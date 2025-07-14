// main.cpp
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

struct Book {
    string title;
    string author;
    bool available;

    Book(string t, string a, bool av = true) : title(t), author(a), available(av) {}
};

vector<Book> library;

void loadBooks() {
    ifstream file("books.txt");
    if (!file.is_open()) return;

    string title, author;
    int avail;
    while (getline(file, title) && getline(file, author) && file >> avail) {
        file.ignore();
        library.push_back(Book(title, author, avail));
    }

    file.close();
}

void saveBooks() {
    ofstream file("books.txt");
    for (auto& b : library) {
        file << b.title << endl;
        file << b.author << endl;
        file << b.available << endl;
    }
    file.close();
}

void showBooks() {
    cout << "\n📚 Kitoblar ro'yxati:\n";
    for (int i = 0; i < library.size(); ++i) {
        cout << i + 1 << ". " << library[i].title
             << " - " << library[i].author
             << " [" << (library[i].available ? "Mavjud" : "Olingan") << "]\n";
    }
}

void addBook() {
    string title, author;
    cout << "\n📘 Kitob nomi: ";
    cin.ignore();
    getline(cin, title);
    cout << "✍️  Muallif: ";
    getline(cin, author);
    library.push_back(Book(title, author));
    cout << "✅ Kitob qo'shildi!\n";
}

void borrowBook() {
    showBooks();
    int choice;
    cout << "\n📥 Qaysi kitobni olishni xohlaysiz (raqami): ";
    cin >> choice;

    if (choice < 1 || choice > library.size()) {
        cout << "❌ Noto‘g‘ri tanlov.\n";
        return;
    }

    if (!library[choice - 1].available) {
        cout << "❌ Bu kitob allaqachon olingan.\n";
    } else {
        library[choice - 1].available = false;
        cout << "📖 Siz kitobni oldingiz: " << library[choice - 1].title << endl;
    }
}

void mainMenu() {
    int option;
    do {
        cout << "\n📚 Kutubxona tizimi\n";
        cout << "1. Kitoblar ro'yxati\n";
        cout << "2. Kitob qo'shish (admin)\n";
        cout << "3. Kitobni olish\n";
        cout << "4. Chiqish\n";
        cout << "Tanlang: ";
        cin >> option;

        switch (option) {
            case 1: showBooks(); break;
            case 2: addBook(); break;
            case 3: borrowBook(); break;
            case 4: saveBooks(); cout << "💾 Saqlandi. Chiqildi.\n"; break;
            default: cout << "❌ Noto'g'ri tanlov!\n";
        }
    } while (option != 4);
}

int main() {
    loadBooks();
    mainMenu();
    return 0;
}

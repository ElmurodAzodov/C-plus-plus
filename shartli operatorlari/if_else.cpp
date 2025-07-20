//! 1
#include <iostream>
using namespace std;


int main() {
    int a;
    cout << "Son kiriting: ";
    cin >> a;
    if (a <= 0) {
        cout << "Manfiy son";
    } else {
        cout << "Musbat son";
    }
    return 0;
}

//! 2
// #include <iostream>
// using namespace std;

// int main() {
//     int a, b;
//     cout << "Ikkita sonni kiriting: ";
//     cin >> a >> b;

//     if (a > b) {
//         cout << "Katta son: " << a << endl;
//     } else if (a < b) {
//         cout << "Katta son: " << b << endl;
//     } else {
//         cout << "Ikkala son teng: " << a << endl;
//     }

//     return 0;
// }
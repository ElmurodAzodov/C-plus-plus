//! 1
#include <iostream>
using namespace std;

int main()
{
    int kun;
    cout << "Haftaning kunini kiriting (1-7): ";
    cin >> kun;

    switch (kun)
    {
    case 1:
        cout << "Dushanba";
        break;
    case 2:
        cout << "Seshanba";
        break;
    case 3:
        cout << "Chorshanba";
        break;
    default:
        cout << "Noto‘g‘ri kun!";
    }
}

//! 2
// #include <iostream>
// using namespace std;

// int main() {
//     int a;
//     cout << "Son kiriting: ";
//     cin >> a;

//     switch (a) {
//         case 0:
//             cout << "Nol son";
//             break;
//         case 1:
//             cout << "Bir son";
//             break;
//         default:
//             if (a < 0) {
//                 cout << "Manfiy son";
//             } else {
//                 cout << "Musbat son";
//             }
//             break;
//     }

//     return 0;
// }

// shaxmat doskasining ikkita turli (x1, y1), (x2, y2) koordinatalari berilgan (1-8 oraliqda yotuvchi butun sonlar). Jumlani rostlikka tekshiring. "Berilgan maydonlari bir xil rangda".
// #include <iostream>
// using namespace std;
// int main() {
//     int x1, y1, x2, y2;
//     cout << "Birinchi maydon koordinatalarini kiriting (x1 y1): ";
//     cin >> x1 >> y1;
//     cout << "Ikkinchi maydon koordinatalarini kiriting (x2 y2): ";
//     cin >> x2 >> y2;

//     // Ranglarni tekshirish
//     if ((x1 + y1) % 2 == (x2 + y2) % 2) {
//         cout << "Berilgan maydonlari bir xil rangda." << endl;
//     } else {
//         cout << "Berilgan maydonlari turli ranglarda." << endl;
//     }

//     return 0;
// }

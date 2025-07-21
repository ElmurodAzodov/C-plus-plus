// //! 1
// #include <iostream>
// using namespace std;


// int main() {
//     int a;
//     cout << "Son kiriting: ";
//     cin >> a;

//     if (a <= 0) {
//         cout << "Manfiy son";
//     } else {
//         cout << "Musbat son";
//     }
//     return 0;
// }

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
//         cout << "Ikkala son teng: " << a << "=" << b << endl;
//     }

//     return 0;
// }

//! 3
#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Son kiriting: " << endl; cin >> a;

    if ( a >= 0 ) {
        a ++;
        cout << a;
    } else {
        cout << a;
    }

    return 0;
}

//! 4
// #include <iostream>
// using namespace std;

// int main() {

//     int a;
//     cout << "Son kiriting: " << endl; cin >> a;

//     if ( a == 0 ) {
//         a ++;
//         cout << "Siz nol sonini kiritgan edingiz, men bunga 1 sonini qo'shdim!" << a;
//     } else if ( a < 0 ) {
//         cout << "Siz kiritgan son manfiy son!";
//     } else {
//         cout << "Siz kiritgan son musbat son!";
//     }

//     return 0;
// }
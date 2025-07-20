
## 🧠 1. `if` ning asosiy sintaksisi:

```cpp
if (shart) {
    // Agar shart rost (true) bo‘lsa, ushbu kod bajariladi
}
```

### ✅ Misol:

```cpp
int yosh = 20;

if (yosh >= 18) {
    cout << "Siz voyaga yetgansiz.";
}
```

---

## 🧠 2. `if...else` — "agar...aks holda"

```cpp
if (shart) {
    // Agar shart rost bo‘lsa
} else {
    // Agar shart noto‘g‘ri bo‘lsa
}
```

### ✅ Misol:

```cpp
int son = 5;

if (son % 2 == 0) {
    cout << "Juft son";
} else {
    cout << "Toq son";
}
```

---

## 🧠 3. `if...else if...else` — ko‘p holatli tekshiruv

```cpp
if (shart1) {
    // 1-holat
} else if (shart2) {
    // 2-holat
} else {
    // Hech biri bo‘lmasa
}
```

### ✅ Misol:

```cpp
int baho = 4;

if (baho == 5) {
    cout << "A'lo!";
} else if (baho == 4) {
    cout << "Yaxshi";
} else if (baho == 3) {
    cout << "Qoniqarli";
} else {
    cout << "Qoniqarsiz";
}
```

---

## ⚠️ Muhim eslatmalar:

1. **Shartlar doimo `true` yoki `false` qiymat qaytaradi.**
2. **Shartda `==` ishlatiladi**, `=` emas! (farq qil: `==` – tenglik tekshiradi, `=` – qiymat beradi)

---

## 🛠 Amaliy mashqlar

### 🧩 1-masala: Son musbatmi, manfiymi?

```cpp
int son;
cout << "Son kiriting: ";
cin >> son;

if (son > 0) {
    cout << "Musbat";
} else if (son < 0) {
    cout << "Manfiy";
} else {
    cout << "Son nolga teng";
}
```

---

### 🧩 2-masala: Imtihon bahosi

```cpp
int ball;
cout << "Ball kiriting: ";
cin >> ball;

if (ball >= 90) {
    cout << "A (A'lo)";
} else if (ball >= 80) {
    cout << "B (Yaxshi)";
} else if (ball >= 70) {
    cout << "C (Qoniqarli)";
} else {
    cout << "F (Qoniqarsiz)";
}
```

---

### 🧩 3-masala: Juft yoki toq

```cpp
int son;
cin >> son;

if (son % 2 == 0) {
    cout << "Juft";
} else {
    cout << "Toq";
}
```

---

## ✅ Xulosa:

| Tuzilma      | Foydasi                            |
| ------------ | ---------------------------------- |
| `if`         | Faqat 1 ta shartni tekshirish      |
| `if/else`    | Shart rost yoki noto‘g‘ri bo‘lsa   |
| `if/else if` | Ko‘p shartlar ketma-ket tekshirish |

---

---

## 🧠 `switch-case` nima?

`switch` — bu **biror o‘zgaruvchining qiymatiga qarab** turli kod bloklarini bajarish uchun ishlatiladigan **shartli operator**.
`if-else` ga o‘xshash, lekin **ko‘p qiymatli holatlarda switch yozish qulayroq**.

---

## ✅ Sintaksisi:

```cpp
switch (ifoda) {
    case qiymat1:
        // Kod 1
        break;
    case qiymat2:
        // Kod 2
        break;
    ...
    default:
        // Hech biri to‘g‘ri bo‘lmasa
}
```

---

## 🎯 Muhim qoidalar:

| Qoidalar                                                                                                | Izoh |
| ------------------------------------------------------------------------------------------------------- | ---- |
| `ifoda` (switch ichida) **butun son (int, char, enum)** bo‘lishi kerak                                  |      |
| `float`, `double`, `string` bilan ishlamaydi                                                            |      |
| Har bir `case` dan keyin **`break`** bo‘lmasa, keyingi case ham bajariladi (bu *fall-through* deyiladi) |      |
| `default` — hech qaysi case to‘g‘ri bo‘lmasa ishlaydi (ixtiyoriy)                                       |      |

---

## ✅ Misol: `int` bilan

```cpp
int kun = 3;

switch (kun) {
    case 1:
        cout << "Dushanba"; break;
    case 2:
        cout << "Seshanba"; break;
    case 3:
        cout << "Chorshanba"; break;
    default:
        cout << "Noto‘g‘ri kun!";
}
```

---

## ✅ Misol: `char` bilan

```cpp
char belgi = 'a';

switch (belgi) {
    case 'a':
        cout << "Siz A harfini tanladingiz"; break;
    case 'b':
        cout << "Siz B harfini tanladingiz"; break;
    default:
        cout << "Noma'lum harf";
}
```

---

## ❌ Noto‘g‘ri misollar:

### ❌ `float` ishlamaydi:

```cpp
float baho = 4.5;

switch (baho) { // ❌ XATO!
    case 4.5:
        cout << "Yaxshi"; break;
}
```

**Xatolik:** `switch` faqat butun qiymatlar bilan ishlaydi!

---

### ❌ `string` ishlamaydi:

```cpp
string soz = "salom";

switch (soz) { // ❌ XATO!
    case "salom":
        cout << "Salom"; break;
}
```

---

## 🛠 Amaliy mashqlar

### 1. Haftaning kuni raqam bo‘yicha:

```cpp
int kun;
cout << "1 dan 7 gacha son kiriting: ";
cin >> kun;

switch (kun) {
    case 1: cout << "Dushanba"; break;
    case 2: cout << "Seshanba"; break;
    case 3: cout << "Chorshanba"; break;
    case 4: cout << "Payshanba"; break;
    case 5: cout << "Juma"; break;
    case 6: cout << "Shanba"; break;
    case 7: cout << "Yakshanba"; break;
    default: cout << "Noto‘g‘ri raqam!";
}
```

---

### 2. Hisoblash kalkulyatori (2 son + operator)

```cpp
double a, b;
char amal;

cout << "Birinchi son: ";
cin >> a;
cout << "Amal (+, -, *, /): ";
cin >> amal;
cout << "Ikkinchi son: ";
cin >> b;

switch (amal) {
    case '+': cout << "Yig‘indi: " << a + b; break;
    case '-': cout << "Ayirma: " << a - b; break;
    case '*': cout << "Ko‘paytma: " << a * b; break;
    case '/': 
        if (b != 0)
            cout << "Bo‘linma: " << a / b;
        else
            cout << "0 ga bo‘lish mumkin emas!";
        break;
    default: cout << "Noto‘g‘ri amal!";
}
```

---

## 🔄 switch vs if/else farqi

| switch-case                         | if/else                                       |
| ----------------------------------- | --------------------------------------------- |
| Faqat `int`, `char`, `enum`, `bool` | Har qanday tip: `int`, `float`, `string`, ... |
| Faqat `==` tekshiradi               | Har qanday shart: `<`, `>`, `==`, `!=`, ...   |
| Ko‘p case bo‘lsa o‘qish qulay       | Qisqa shartlar uchun qulay                    |

---
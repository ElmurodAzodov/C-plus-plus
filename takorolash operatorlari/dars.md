
---

# 🔁 `while` va `do-while` sikllari

## 📌 1. `while` sikli

### 🎯 Maqsadi:

Shart **true** bo‘lgan vaqtida **sikl tanasini qayta-qayta bajarish**.

---

### ✅ Sintaksis:

```cpp
while (shart) {
    // Takrorlanuvchi kodlar
}
```

---

### ⏳ Ishlash tartibi:

1. Avval `shart` tekshiriladi.
2. Agar `shart == true` bo‘lsa → tanadagi kodlar bajariladi.
3. So‘ngra yana `shart` tekshiriladi va shunday davom etadi.
4. Agar `shart == false` bo‘lsa → sikl tugaydi.

---

### ✅ Misol: 1 dan 5 gacha chiqarish

```cpp
int i = 1;

while (i <= 5) {
    cout << i << " ";
    i++;
}
```

📤 Natija: `1 2 3 4 5`

---

### ⚠️ Ehtiyot bo‘ling: agar `i++` yozilmasa — **cheksiz sikl** bo‘ladi.

---

## 📌 2. `do-while` sikli

### 🎯 Maqsadi:

Avval kod bajariladi, keyin shart tekshiriladi. Kamida **bir marta** tanadagi kod bajariladi.

---

### ✅ Sintaksis:

```cpp
do {
    // Takrorlanuvchi kodlar
} while (shart);
```

---

### ⏳ Ishlash tartibi:

1. Dastlab kod bajariladi.
2. So‘ngra `shart` tekshiriladi.
3. `shart == true` bo‘lsa → yana tanadagi kod bajariladi.
4. `shart == false` bo‘lsa → sikl to‘xtaydi.

---

### ✅ Misol: 1 dan 5 gacha chiqarish

```cpp
int i = 1;

do {
    cout << i << " ";
    i++;
} while (i <= 5);
```

📤 Natija: `1 2 3 4 5`

---

### ✅ Misol: Shart noto‘g‘ri bo‘lsa ham 1 marta bajariladi

```cpp
int i = 10;

do {
    cout << "Salom!";
} while (i < 5);
```

📤 Natija: `Salom!` → chunki `do` oldin bajariladi.

---

## 🔍 `while` vs `do-while`

| Farqi              | `while`                        | `do-while`                           |
| ------------------ | ------------------------------ | ------------------------------------ |
| Shart tekshiriladi | Avval tekshiradi               | Keyin tekshiradi                     |
| Bajarilishi        | Shart `true` bo‘lsa bajariladi | Kamida 1 marta bajariladi            |
| Sintaksis oxiri    | `while (...)`                  | `while (...);` (nuqta-vergul kerak!) |

---

## 🧠 Amaliy masalalar:

### 1. 1 dan 10 gacha bo‘lgan sonlar yig‘indisini hisoblash:

```cpp
int i = 1, sum = 0;

while (i <= 10) {
    sum += i;
    i++;
}

cout << "Yig‘indi: " << sum;
```

---

### 2. `do-while`: Foydalanuvchidan 5 kiritilmaguncha son qabul qilish:

```cpp
int son;

do {
    cout << "5 ni kiriting: ";
    cin >> son;
} while (son != 5);

cout << "Rahmat!";
```

---

## 🚨 Xatoliklardan ehtiyot bo‘ling:

1. `while` yoki `do-while` ichida **o‘zgaruvchini o‘zgartirishni unutmaslik** kerak.
2. Aks holda → **cheksiz sikl** (`infinite loop`) bo‘lib qoladi.

---

---

# 🔁 `for` sikli (takrorlovchi sikl)

### 🎯 Maqsadi:

Agar sizga **qancha marta takrorlash kerakligi aniq** bo‘lsa, `for` eng qulay sikldir. Misol: 10 marta chiqarish, 100 ta elementdan iborat ro‘yxatni o‘qish va h.k.

---

## ✅ Sintaksis:

```cpp
for (boshlanish; shart; o‘zgarish) {
    // Takrorlanadigan kod
}
```

### 🎯 Har bir qismi nima qiladi?

| Qism         | Ma’nosi                                           |
| ------------ | ------------------------------------------------- |
| `boshlanish` | O‘zgaruvchi yaratiladi (masalan: `int i = 0`)     |
| `shart`      | Shu shart `true` bo‘lsa sikl ishlaydi             |
| `o‘zgarish`  | Har aylanishdan keyin bajariladi (masalan: `i++`) |

---

## ✅ Oddiy misol: 1 dan 5 gacha chiqarish

```cpp
for (int i = 1; i <= 5; i++) {
    cout << i << " ";
}
```

📤 Natija: `1 2 3 4 5`

---

## ✅ Teskari sanash (5 dan 1 gacha)

```cpp
for (int i = 5; i >= 1; i--) {
    cout << i << " ";
}
```

📤 Natija: `5 4 3 2 1`

---

## ✅ Juft sonlarni chiqarish (2 dan 10 gacha)

```cpp
for (int i = 2; i <= 10; i += 2) {
    cout << i << " ";
}
```

📤 Natija: `2 4 6 8 10`

---

## ✅ `for` ichida shartli operator

```cpp
for (int i = 1; i <= 10; i++) {
    if (i % 2 == 0) {
        cout << i << " - juft son\n";
    } else {
        cout << i << " - toq son\n";
    }
}
```

---

## 🧠 E'tiborli jihatlar:

### 1. Sikl tana qismi bo‘sh bo‘lishi mumkin:

```cpp
for (int i = 0; i < 10; cout << i++ << " ") ;
// Boshida `cout` tanada emas, lekin ishlaydi
```

---

### 2. Cheksiz sikl:

```cpp
for (;;) {
    cout << "Cheksiz!\n"; // Shart va cheklov yo‘q
}
```

---

### 3. Bir nechta o‘zgaruvchilar:

```cpp
for (int i = 0, j = 10; i < j; i++, j--) {
    cout << i << " " << j << "\n";
}
```

---

## 🔍 `for` vs `while` vs `do-while`

| Xususiyat                  | `for`                             | `while`                  | `do-while`                           |
| -------------------------- | --------------------------------- | ------------------------ | ------------------------------------ |
| Qachon ishlatish           | Marta soni oldindan ma’lum bo‘lsa | Shartga bog‘liq holatlar | Kamida 1 marta bajarish kerak bo‘lsa |
| Sintaksis                  | Kompakt, 1 qatorda hammasi        | Uzunroq bo‘ladi          | Shart oxirida tekshiriladi           |
| Kamida 1 marta ishlaydimi? | Yo‘q                              | Yo‘q                     | Ha                                   |

---

## 🧩 Amaliy misollar

### 1. 1 dan 100 gacha bo‘lgan sonlar yig‘indisi

```cpp
int sum = 0;

for (int i = 1; i <= 100; i++) {
    sum += i;
}

cout << "Yig‘indi: " << sum;
```

---

### 2. Foydalanuvchidan `n` sonini olib, 1 dan `n` gacha juft sonlar chiqarish:

```cpp
int n;
cin >> n;

for (int i = 1; i <= n; i++) {
    if (i % 2 == 0)
        cout << i << " ";
}
```

---

### 3. Faktoriyal hisoblash (`n!`)

```cpp
int n;
cin >> n;
int fakt = 1;

for (int i = 1; i <= n; i++) {
    fakt *= i;
}

cout << "Faktorial: " << fakt;
```

---
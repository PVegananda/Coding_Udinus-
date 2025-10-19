#include <iostream>
#include <cmath>
using namespace std;

// ==========================================================
// KASUS 1 – Penjumlahan Deret N bilangan
// ==========================================================
void kasus1() {
    int N = 0;
    int total = 0;

    cout << "\n=== Kasus 1 – Penjumlahan Deret N ===\n";
    cout << "Masukkan jumlah deret (N): ";
    cin >> N;

    if (N > 0) {
        for (int i = 1; i <= N; i++) {
            cout << i << " ";
            total += i;
        }
        cout << "\nHasil Penjumlahan: " << total << endl;
    } else {
        total = 0;
        cout << "Input tidak valid, total = " << total << endl;
    }
}

// ==========================================================
// KASUS 1a – Penjumlahan Deret Versi 2 (input manual)
// ==========================================================
void kasus1a() {
    int total = 0, bilangan = 0;

    cout << "\n=== Kasus 1a – Penjumlahan 5 Bilangan Manual ===\n";
    for (int i = 1; i <= 5; i++) {
        cout << "Input bilangan ke-" << i << ": ";
        cin >> bilangan;
        total += bilangan;
    }
    cout << "Hasil Penjumlahan: " << total << endl;
}

// ==========================================================
// KASUS 2 – Angka Terbesar dan Terkecil
// ==========================================================
void kasus2() {
    int N = 0;
    cout << "\n=== Kasus 2 – Terbesar & Terkecil ===\n";
    cout << "Masukkan jumlah deret (N): ";
    cin >> N;

    if (N > 0) {
        int minVal = 1;
        int maxVal = N;

        for (int i = 1; i <= N; i++) {
            cout << i << " ";
        }

        cout << "\nAngka terkecil: " << minVal;
        cout << "\nAngka terbesar: " << maxVal << endl;
    } else {
        cout << "Input tidak valid\n";
    }
}

// ==========================================================
// KASUS 2a – Min, Max, Jumlah & Rata-rata
// ==========================================================
void kasus2a() {
    int arr[5];
    int total = 0;

    cout << "\n=== Kasus 2a – Min, Max, Jumlah & Rata-rata ===\n";
    for (int i = 0; i < 5; i++) {
        cout << "Input bilangan ke-" << i + 1 << ": ";
        cin >> arr[i];
        total += arr[i];
    }

    int minVal = arr[0];
    int maxVal = arr[0];
    for (int i = 1; i < 5; i++) {
        if (arr[i] < minVal) minVal = arr[i];
        if (arr[i] > maxVal) maxVal = arr[i];
    }

    float rata = (float)total / 5;
    cout << "\nBilangan terkecil: " << minVal;
    cout << "\nBilangan terbesar: " << maxVal;
    cout << "\nHasil Penjumlahan: " << total;
    cout << "\nRata - Rata: " << rata << endl;
}

// ==========================================================
// KASUS 3 – Modifikasi Deret (ganti 2 jadi pangkat 2)
// ==========================================================
void kasus3() {
    int N;
    cout << "\n=== Kasus 3 – Modifikasi Deret ===\n";
    cout << "Masukkan jumlah deret (N): ";
    cin >> N;

    if (N > 0) {
        for (int i = 1; i <= N; i++) {
            if (i == 2) cout << pow(i, 2) << " ";
            else cout << i << " ";
        }
        cout << endl;
    } else {
        cout << "Input tidak valid\n";
    }
}

// ==========================================================
// KASUS 2 (ulang) – Deret Angka 0..10 dan 1..10
// ==========================================================
void kasus2_deret() {
    cout << "\n=== Kasus 2 – Deret Angka ===\n";
    for (int i = 0; i < 10; i++) {
        cout << i << " ";
    }
    cout << endl;
    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
    }
    cout << endl;
    cout << "Perbedaan: Deret pertama dimulai dari 0, sedangkan deret kedua dimulai dari 1.\n";
}

// ==========================================================
// KASUS 2a (ulang) – Deret dari a ke N
// ==========================================================
void kasus2a_deret() {
    int a, N;
    cout << "\n=== Kasus 2a – Deret dari a ke N ===\n";
    cout << "Input N: ";
    cin >> N;
    cout << "Input a: ";
    cin >> a;

    if (a <= N) {
        for (int i = a; i <= N; i++) {
            cout << i << " ";
        }
        cout << endl;
    } else {
        a = 0; N = 0;
        cout << "Input tidak valid. a=" << a << " N=" << N << endl;
    }
}

// ==========================================================
// KASUS 3 – Deret Menurun dari 10 ke 0
// ==========================================================
void kasus3_menurun() {
    cout << "\n=== Kasus 3 – Deret Menurun ===\n";
    for (int i = 10; i >= 0; i--) {
        cout << i << " ";
    }
    cout << endl;

    for (int i = 9; i >= 1; i--) {
        cout << i << " ";
    }
    cout << endl;
}

// ==========================================================
// KASUS 3a – Modifikasi Deret Menurun
// ==========================================================
void kasus3a() {
    int a, b;
    cout << "\n=== Kasus 3a – Modifikasi Deret Menurun ===\n";
    cout << "Input a: ";
    cin >> a;
    cout << "Input b: ";
    cin >> b;

    if (b >= a) {
        for (int i = b; i >= a; i--) {
            cout << i << " ";
        }
        cout << endl;
    } else {
        a = 0; b = 0;
        cout << "Input tidak valid. a=" << a << " b=" << b << endl;
    }
}

// ==========================================================
// MAIN PROGRAM
// ==========================================================
int main() {
    int pilih;
    do {
        cout << "\n==============================\n";
        cout << "         MENU KASUS\n";
        cout << "==============================\n";
        cout << "1. Kasus 1 – Penjumlahan Deret\n";
        cout << "2. Kasus 1a – Penjumlahan Manual\n";
        cout << "3. Kasus 2 – Min & Max\n";
        cout << "4. Kasus 2a – Min, Max, Jumlah & Rata2\n";
        cout << "5. Kasus 3 – Modifikasi Deret (2 pangkat 2)\n";
        cout << "6. Kasus 2 – Deret 0..10 dan 1..10\n";
        cout << "7. Kasus 2a – Deret dari a ke N\n";
        cout << "8. Kasus 3 – Deret Menurun 10..0 dan 9..1\n";
        cout << "9. Kasus 3a – Modifikasi Deret Menurun (b ke a)\n";
        cout << "0. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilih;

        switch (pilih) {
            case 1: kasus1(); break;
            case 2: kasus1a(); break;
            case 3: kasus2(); break;
            case 4: kasus2a(); break;
            case 5: kasus3(); break;
            case 6: kasus2_deret(); break;
            case 7: kasus2a_deret(); break;
            case 8: kasus3_menurun(); break;
            case 9: kasus3a(); break;
            case 0: cout << "Program selesai.\n"; break;
            default: cout << "Pilihan tidak valid.\n"; break;
        }

    } while (pilih != 0);

  

//     do {
//         cout << "==============================\n";
//         cout << "      PROGRAM DERET ANGKA     \n";
//         cout << "==============================\n";
//         cout << "1. Kasus 1 - Penjumlahan Deret Angka\n";
//         cout << "2. Kasus 2a - Deret Angka Naik\n";
//         cout << "3. Kasus 3a - Deret Angka Menurun\n";
//         cout << "4. Kasus 4 - Modifikasi Increment Value\n";
//         cout << "5. Keluar\n";
//         cout << "==============================\n";
//         cout << "Pilih menu (1-5): ";
//         cin >> pilihan;

//         switch (pilihan) {
//             case 1: {
//                 cout << "\n--- Kasus 1: Penjumlahan Deret Angka ---\n";
//                 cout << "Input a: ";
//                 cin >> a;
//                 cout << "Input b: ";
//                 cin >> b;

//                 int total = 0;
//                 for (int i = a; i <= b; i++) {
//                     cout << i;
//                     if (i < b) cout << " + ";
//                     total += i;
//                 }
//                 cout << " = " << total << endl;
//                 break;
//             }

//             case 2: {
//                 cout << "\n--- Kasus 2a: Deret Angka Naik ---\n";
//                 cout << "Input a: ";
//                 cin >> a;
//                 cout << "Input b: ";
//                 cin >> b;

//                 for (int i = a; i <= b; i++) {
//                     cout << i << " ";
//                 }
//                 cout << endl;
//                 break;
//             }

//             case 3: {
//                 cout << "\n--- Kasus 3a: Deret Angka Menurun ---\n";
//                 cout << "Input a: ";
//                 cin >> a;
//                 cout << "Input b: ";
//                 cin >> b;

//                 for (int i = b; i >= a; i--) {
//                     cout << i << " ";
//                 }
//                 cout << endl;
//                 break;
//             }

//             case 4: {
//                 cout << "\n--- Kasus 4: Modifikasi Increment Value ---\n";
//                 cout << "Input a: ";
//                 cin >> a;
//                 cout << "Input b: ";
//                 cin >> b;
//                 cout << "Input increment value: ";
//                 cin >> inc;

//                 if (a < b) {
//                     for (int i = a; i <= b; i += inc) {
//                         cout << i << " ";
//                     }
//                 } else {
//                     for (int i = a; i >= b; i -= inc) {
//                         cout << i << " ";
//                     }
//                 }
//                 cout << endl;
//                 break;
//             }

//             case 5:
//                 cout << "\nProgram selesai. Terima kasih!\n";
//                 break;

//             default:
//                 cout << "Pilihan tidak valid. Coba lagi.\n";
//         }

//         cout << "\n";
//     } while (pilihan != 5);

// }

    return 0;
}

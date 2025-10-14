#include <iostream> // menambah package
#include <cmath> // library matematika
// nim : A11.2025.16575 - Pasyah Wahyu I. V

using namespace std; // agar tidak selalu menuliskan std

int main() { //fungsi utama / main yang akan di eksekusi C++
    int angka = 0; //semua pendeklarasian variabel dengan tipe integer


    cout << "------------PENENTU IF DAN FALSE-----------" << endl; // judul program
    cout << "===========================================" << endl; // judul program
    cout << endl; // Spasi/baris kosong untuk tampilan lebih rapi

    // Operasi perbandingan akan menghasilkan nilai boolean: true (1) atau false (0)

    cout << "3 < 4          = " << (3 < 4) << endl;
    // Membandingkan apakah 3 kurang dari 4 → hasil: true (1)

    cout << "12.5 < 7.5     = " << (12.5 < 7.5) << endl;
    // Membandingkan apakah 12.5 kurang dari 7.5 → hasil: false (0)

    cout << "5 <= 3.14      = " << (5 <= 3.14) << endl;
    // Membandingkan apakah 5 kurang dari atau sama dengan 3.14 → hasil: false (0)

    cout << "3 < false      = " << (3 < false) << endl;
    // false bernilai 0 → jadi perbandingannya: 3 < 0 → hasil: false (0)

    cout << "true == false  = " << (true == false) << endl;
    // true bernilai 1, false bernilai 0 → perbandingan 1 == 0 → hasil: false (0)

    cout << "true != false  = " << (true != false) << endl;
    // 1 != 0 → hasil: true (1)

    cout << "65 == 'A'      = " << (65 == 'A') << endl;
    // Karakter 'A' memiliki nilai ASCII 65 → 65 == 65 → hasil: true (1)

    return 0; // Mengembalikan nilai 0 ke sistem operasi, menandakan program selesai dengan sukses
}

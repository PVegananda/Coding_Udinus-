#include <iostream>    // Library standar input dan output
using namespace std;   // Supaya tidak perlu menulis std::

int main() {
    int angka[5];       // Array untuk menyimpan 5 bilangan
    int minValue;       // Variabel untuk bilangan terkecil
    int maxValue;       // Variabel untuk bilangan terbesar
    int total = 0;      // Variabel untuk jumlah 5 bilangan
    double rataRata;    // Variabel untuk rata-rata

    cout << "============================================" << endl;
    cout << "    Kasus 2a - Bilangan Terbesar Terkecil   " << endl;
    cout << "         Jumlah dan Rata-rata 5 Angka       " << endl;
    cout << "============================================" << endl;

    // Input 5 bilangan
    for (int i = 0; i < 5; i++) {
        cout << "Input bilangan ke-" << i + 1 << ": ";
        cin >> angka[i];
    }

    // Inisialisasi min dan max dengan angka pertama
    minValue = angka[0];
    maxValue = angka[0];

    // Proses mencari min, max, dan jumlah
    for (int i = 0; i < 5; i++) {
        if (angka[i] < minValue) {
            minValue = angka[i];
        }
        if (angka[i] > maxValue) {
            maxValue = angka[i];
        }
        total += angka[i]; // Menambahkan setiap angka ke total
    }

    // Hitung rata-rata
    rataRata = static_cast<double>(total) / 5; // Konversi ke double untuk hasil desimal

    cout << endl;
    cout << "Bilangan terkecil : " << minValue << endl;
    cout << "Bilangan terbesar : " << maxValue << endl;
    cout << "Hasil Penjumlahan : " << total << endl;
    cout << "Rata - Rata       : " << rataRata << endl;

    return 0;
}

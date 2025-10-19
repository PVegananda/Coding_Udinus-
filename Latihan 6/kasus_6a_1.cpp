#include <iostream>   // Library standar untuk input dan output
using namespace std;  // Supaya tidak perlu menulis std::

int main() {
    int n;           // Variabel untuk jumlah angka dalam deret
    int total = 0;   // Variabel untuk menyimpan hasil penjumlahan
    int i;           // Variabel untuk iterasi perulangan

    cout << "==============================" << endl;
    cout << "  Kasus 1 - Penjumlahan Deret " << endl;
    cout << "==============================" << endl;

    cout << "Masukkan jumlah angka (N): ";
    cin >> n;  // Input jumlah angka

    cout << endl;

    // Perulangan dari 1 sampai N
    for (i = 1; i <= n; i++) {
        cout << i << " ";  // Menampilkan angka deret
        total = total + i; // Menjumlahkan angka ke total
    }

    cout << endl;
    cout << "Hasil Penjumlahan: " << total << endl;  // Menampilkan hasil akhir

    return 0; // Program selesai
}

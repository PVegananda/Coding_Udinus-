#include <iostream>   // Library standar untuk input dan output
using namespace std;  // Supaya tidak perlu menulis std::

int main() {
    int total = 0;         // Variabel untuk hasil penjumlahan
    int angka;             // Variabel untuk menampung input sementara
    int jumlah_input = 5;  // Jumlah bilangan yang akan dimasukkan
    int i;                 // Variabel untuk iterasi

    cout << "====================================" << endl;
    cout << "  Kasus 1a - Penjumlahan Deret v2 " << endl;
    cout << "====================================" << endl;

    // Perulangan input sebanyak 5 kali
    for (i = 1; i <= jumlah_input; i++) {
        cout << "Input bilangan ke-" << i << ": ";
        cin >> angka;            // Input angka ke-i
        total = total + angka;   // Menjumlahkan ke total
    }

    cout << "Hasil Penjumlahan: " << total << endl; // Menampilkan hasil akhir

    return 0; // Program selesai
}

#include <iostream>   // Library standar untuk input dan output
using namespace std;  // Supaya tidak perlu menulis std::

int main() {
    int n;           // Variabel untuk menyimpan jumlah deret
    int i;           // Variabel untuk iterasi
    int minValue;    // Variabel untuk nilai terkecil
    int maxValue;    // Variabel untuk nilai terbesar

    cout << "============================================" << endl;
    cout << "   Kasus 2 - Angka Terbesar dan Terkecil   " << endl;
    cout << "============================================" << endl;

    cout << "Masukkan jumlah angka (N): ";
    cin >> n;   // Input jumlah angka yang ingin ditampilkan

    cout << endl;

    // Karena deret dimulai dari 1, maka nilai awal min dan max kita isi 1
    minValue = 1;
    maxValue = n;

    // Perulangan untuk menampilkan deret
    for (i = 1; i <= n; i++) {
        cout << i << " ";
    }

    cout << endl;
    cout << "Angka terkecil: " << minValue << endl; // Karena deret mulai dari 1
    cout << "Angka terbesar: " << maxValue << endl; // Karena deret berakhir di N

    return 0; // Program selesai
}

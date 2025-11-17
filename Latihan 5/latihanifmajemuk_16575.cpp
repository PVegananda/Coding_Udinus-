#include <iostream> // menambah package
#include <iomanip>
#include <cmath> // library matematika
// nim : A11.2025.16575 - Pasyah Wahyu I. V

using namespace std;

int main() {
    int total_belanja, diskon, total_akhir, total_diskon = 0;


    cout << "---------PENENTU DISKON---------" << endl;
    cout << "================================" << endl;
    cout << endl;

    cout << "Masukkan Total Belanja (Rp.) = ";
    cin >> total_belanja;
    cout << fixed << setprecision(0);

    if (total_belanja >= 1000000) {
        diskon = 0.30;  // Perbaiki perhitungan diskon
        total_diskon = diskon * total_belanja;
        total_akhir = total belanja - total diskon;
        cout << "Total Belanja  : " << total_belanja << endl;
        cout << "Diskon         : 30%" << endl;
        cout << "Harga Diskon   : " << total_diskon << endl;
        cout << "Harga Akhir    : " << total_akhir << endl;

    } else if (total_belanja >= 500000 && total_belanja < 1000000) {
        diskon = 0.20;  // Perbaiki perhitungan diskon
        total_diskon = diskon * total_belanja;
        total_akhir = total belanja - total diskon;
        cout << "Total Belanja  : " << total_belanja << endl;
        cout << "Diskon         : 20%" << endl;
        cout << "Harga Diskon   : " << total_diskon << endl;
        cout << "Harga Akhir    : " << total_akhir << endl;

    } else if (total_belanja >= 100000 && total_belanja < 500000) {
        diskon = 0.10;  // Perbaiki perhitungan diskon
        total_diskon = diskon * total_belanja;
        total_akhir = total belanja - total diskon;
        cout << "Total Belanja  : " << total_belanja << endl;
        cout << "Diskon         : 10%" << endl;
        cout << "Harga Diskon   : " << total_diskon << endl;
        cout << "Harga Akhir    : " << total_akhir << endl;

    } else {
        diskon = 0;
        total_diskon = diskon * total_belanja;
        total_akhir = total belanja - total diskon;
        cout << "Total Belanja  : " << total_belanja << endl;
        cout << "Diskon         : 0%" << endl;
        cout << "Harga Diskon   : " << total_diskon << endl;
        cout << "Harga Akhir    : " << total_akhir << endl;
    }

    return 0;
}

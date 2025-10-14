#include <iostream> // menambah package/library untuk input dan output seperti cout dan cin
#include <iomanip> // library agar bilangan double tidak menjadi e+ (notasi ilmiah) saat ditampilkan
#include <cmath> // library matematika (tidak digunakan dalam program ini, bisa dihapus jika tidak dipakai)
// nim : A11.2025.16575 - Pasyah Wahyu I. V

using namespace std; // agar tidak selalu menuliskan std

int main() { //fungsi utama / main yang akan di eksekusi C++
    double total_belanja, diskon, total_belanja_akhir = 0; //semua pendeklarasian variabel dengan tipe double


    cout << "---------PENENTU DISKON---------" << endl; // judul program
    cout << "================================" << endl; // judul program
    cout << endl; // Spasi/baris kosong untuk tampilan lebih rapi


    cout << "Masukkan Total Belanja (Rp.) = "; // text yang akan di tampilkan agar user paham apa yang perlu di inputkan
    cin >> total_belanja; // untuk membaca/read input variabel yang di butuhkan ke program melalui user
    cout << fixed << setprecision(0); // untuk mengatur jumlah angka dibelakang koma (0 berarti tidak ada angka di belakang koma)

    if (total_belanja >= 1000000) { // jika harga belanja / total belanja lebih dari atau sama dengan 1 juta maka coding di dalam if () akan di jalankan karena memenuhi syarat
        diskon = 0.30 ;  // Sama dengan 30% (jika kita pasang 30/100 maka hasilnya akan menjadi 0)
        total_belanja_akhir = total_belanja - (total_belanja * diskon); // menghitung harga total belanja setelah diskon
        cout << "Total Belanja  : " << total_belanja << endl; // untuk menampilkan total belanja sebelum diskon
        cout << "Diskon         : 30%" << endl; // untuk menampilkan diskon yang di dapat
        cout << "Harga Diskon   : " << total_belanja * diskon << endl; // untuk menampilkan harga diskon yang di dapat
        cout << "Harga Akhir    : " << total_belanja_akhir << endl; // untuk menampilkan harga akhir setelah diskon

    } else if (total_belanja >= 500000 && total_belanja < 1000000) { // jika harga belanja / total belanja lebih dari atau sama dengan lima ratus ribu dan kurang dari 1 juta maka coding di dalam if () akan di jalankan karena memenuhi syarat
        diskon = 0.20;  // Sama dengan 20% (jika kita pasang 20/100 maka hasilnya akan menjadi 0)
        total_belanja_akhir = total_belanja - (total_belanja * diskon); // menghitung harga total belanja setelah diskon
        cout << "Total Belanja  : " << total_belanja << endl; // untuk menampilkan total belanja sebelum diskon
        cout << "Diskon         : 20%" << endl; // untuk menampilkan diskon yang di dapat
        cout << "Harga Diskon   : " << total_belanja * diskon << endl; // untuk menampilkan harga diskon yang di dapat
        cout << "Harga Akhir    : " << total_belanja_akhir << endl; // untuk menampilkan harga akhir setelah diskon

    } else if (total_belanja >= 100000 && total_belanja < 500000) { // jika harga belanja / total belanja lebih dari atau sama dengan seratus ribu dan kurang dari lima ratus ribu maka coding di dalam if () akan di jalankan karena memenuhi syarat
        diskon = 0.10;  // Sama dengan 10% (jika kita pasang 10/100 maka hasilnya akan menjadi 0)
        total_belanja_akhir = total_belanja - (total_belanja * diskon); // menghitung harga total belanja setelah diskon
        cout << "Total Belanja  : " << total_belanja << endl; // untuk menampilkan total belanja sebelum diskon
        cout << "Diskon         : 10%" << endl; // untuk menampilkan diskon yang di dapat
        cout << "Harga Diskon   : " << total_belanja * diskon << endl; // untuk menampilkan harga diskon yang di dapat
        cout << "Harga Akhir    : " << total_belanja_akhir << endl; // untuk menampilkan harga akhir setelah diskon

    } else { // jika semua syarat di atas tidak terpenuhi maka program di bawah ini yang akan di eksekusi
        total_belanja_akhir = total_belanja - (total_belanja * diskon); // menghitung harga total belanja setelah diskon
        cout << "Total Belanja  : " << total_belanja << endl; // untuk menampilkan total belanja sebelum diskon
        cout << "Diskon         : 0 / Tidak ada Diskon" << endl; // untuk menampilkan diskon yang di dapat
        cout << "Harga Diskon   : " << total_belanja * diskon << endl; // untuk menampilkan harga diskon yang di dapat
        cout << "Harga Akhir    : " << total_belanja_akhir << endl; // untuk menampilkan harga akhir setelah diskon
    }

    return 0; // menandakan program telah selesai dan sukses di eksekusi jika telah sampai ke baris ini
}

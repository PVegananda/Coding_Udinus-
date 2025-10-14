#include <iostream> // menambah package
#include <iomanip> // library pembulatan
#include <sstream> // library untuk string
#include <cmath> // library matematika
// nim : A11.2025.16575 - Pasyah Wahyu I. V

using namespace std;

int main() {

    double harga_satuan, diskon, harga_akhir, harga_diskon, jumlah_barang, total_harga  = 0;
    string nama_barang;

    cout << "-------------TOKO UD MURAH MERIAH-------------" << endl;
    cout << "==============================================" << endl;
    cout << "--------------PASYAH WAHYU I. V---------------" << endl;
    cout << endl;
    cout << endl;

    cout << "Masukkan Nama Barang(huruf)= ";
    cin >> nama_barang;
    cout << "Masukkan Harga Barang (Rp) = ";
    cin >> harga_satuan;
    cout << "Masukkan Jumlah Barang     = ";
    cin >> jumlah_barang;

    cout << endl;

    cout << fixed << setprecision(0); //agar bilangan double tidak keluar e+ masuk ke library iomanip

        if (jumlah_barang >= 3 && jumlah_barang <= 5) { // penentuan diskon harga sesuai tabel
            diskon = 0.02;
        } else if (jumlah_barang >= 6 && jumlah_barang <= 10)  {
            diskon = 0.05;
        } else if (jumlah_barang >= 11 && jumlah_barang <= 17) {
            diskon = 0.10;
        } else if (jumlah_barang >= 18) {
            diskon = 0.20;
        } else {
            diskon = 0;
        }

    total_harga = harga_satuan * jumlah_barang; // menghitung total harga barang yang di beli
    harga_diskon = diskon * total_harga; // menghitung total diskon yang akan di terima
    harga_akhir = total_harga - harga_diskon; // menentukan harga akhir setelah diskon

    cout << "Nama Barang    : " << nama_barang << endl;
    cout << "Jumlah Barang  : " << jumlah_barang << endl;
    cout << "Total Harga    : " << total_harga << endl;
    cout << "Diskon         : " << diskon * 100 << "%" <<endl; //mengkonversi diskon dari desimal ke bentuk presentase
    cout << "Harga Diskon   : " << harga_diskon << endl;
    cout << "Harga Akhir    : " << harga_akhir << endl;

    return 0; // akhir line sukses
}

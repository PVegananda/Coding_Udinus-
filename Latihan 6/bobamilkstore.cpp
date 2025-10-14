#include <iostream> // menambah package
#include <iomanip> // library pembulatan
#include <sstream> // library untuk string
#include <cmath> // library matematika
// nim : A11.2025.16575 - Pasyah Wahyu I. V

using namespace std;

int main() {

    double harga_satuan, diskon = 0, harga_akhir, harga_diskon, total_harga = 0; // inisialisasi diskon = 0 untuk menghindari nilai sampah
    int jenis_barang, jumlah_barang = 0;
    string bonus = "TIDAK ADA BONUS", nama_barang = "TIDAK ADA BARANG";

    cout << "----------------TOKO BABA SLAMET--------------" << endl;
    cout << "==============================================" << endl;
    cout << "--------------PASYAH WAHYU I. V---------------" << endl;
    cout << endl;
    cout << endl;

    cout << "Barang yang ingin di beli:" << endl;
    cout << "1. 1 PACK HVS MA4 80 gram" << endl;
    cout << "2. TINTA EPSON merk INKQ" << endl;
    cout << "3. Flash Disk" << endl;
    cout << "Barang yang anda beli (1/2/3) = ";
    cin >> jenis_barang;

    system("cls"); //clear line

    cout << "----------------TOKO BABA SLAMET--------------" << endl;
    cout << "==============================================" << endl;
    cout << "--------------PASYAH WAHYU I. V---------------" << endl;
    cout << endl;
    cout << endl;
    cout << "Banyak Barang di beli =";
    cin >> jumlah_barang;

    cout << endl;

    cout << fixed << setprecision(0); //agar bilangan double tidak keluar e+ masuk ke library iomanip

    if (jenis_barang == 1) { // penentuan diskon harga sesuai tabel
        harga_satuan = 55000;
        nama_barang = "1 PACK HVS MA4 80 gram";
        total_harga = harga_satuan * jumlah_barang;
        if (jumlah_barang >= 3 && jumlah_barang <= 5) { // penentuan diskon harga sesuai tabel
            diskon = 0.05;
        } else if (jumlah_barang >= 6 && jumlah_barang <= 10) {
            diskon = 0.10;
        } else if (jumlah_barang >= 11 && jumlah_barang <= 15) {
            diskon = 0.15;
        } else if (jumlah_barang >= 16) {
            diskon = 0.20;
            bonus = "FREE 1 BOBA MILK TEA";
        } else {
            diskon = 0;
        }

    } else if (jenis_barang == 2) {
        harga_satuan = 125000;
        nama_barang = "TINTA EPSON merk INKQ";
        total_harga = harga_satuan * jumlah_barang;
        if (jumlah_barang >= 3 && jumlah_barang <= 10) { // penentuan diskon harga sesuai tabel
            diskon = 0.10;
            bonus = "FREE 1 BOTOL TINTA EPSON 100 ML";
        } else if (jumlah_barang >= 11) {
            diskon = 0.20;
            bonus = "FREE 1 PACK + POTONGAN HARGA 2000";
            total_harga -= 2000; // potongan harga 2000 untuk pembelian 11 atau lebih
        } else {
            diskon = 0;
        }

    } else if (jenis_barang == 3) {
        harga_satuan = 180000;
        nama_barang = "Flash Disk";
        total_harga = harga_satuan * jumlah_barang;

        if (total_harga >= 1800000 && total_harga < 5000000) { // penentuan diskon harga sesuai tabel
            harga_diskon = 250000;
            harga_akhir = total_harga - harga_diskon;
            diskon = harga_diskon / total_harga;
            bonus = "FREE 1 mini bag";
        } else if (total_harga >= 5000000) {
            harga_diskon = 750000;
            harga_akhir = total_harga - harga_diskon;
            diskon = harga_diskon / total_harga;
            bonus = "FREE 1 regular bag dan 1 Gantungan Kunci";
        } else {
            harga_diskon = 0;
            harga_akhir = total_harga;
            diskon = 0;
        }

    } else {
        harga_satuan = 0;
        total_harga = 0;
        diskon = 0;
        harga_diskon = 0;
        harga_akhir = 0;
    }

    // menghitung total harga barang yang di beli
    if (jenis_barang != 3) {
        harga_diskon = diskon * total_harga; // menghitung total diskon yang akan di terima
        harga_akhir = total_harga - harga_diskon; // menentukan harga akhir setelah diskon
    }

    cout << "Nama Barang    : " << nama_barang << endl;
    cout << "Jumlah Barang  : " << jumlah_barang << endl;
    cout << "Total Harga    : " << total_harga << endl;
    cout << "Diskon         : " << diskon * 100 << "%" << endl; //mengkonversi diskon dari desimal ke bentuk presentase
    cout << "Harga Diskon   : " << harga_diskon << endl;
    cout << "Harga Akhir    : " << harga_akhir << endl;
    cout << "Bonus          : " << bonus << endl;

    return 0; // akhir line sukses
}

#include <iostream>
#include <cmath>
#include <iomanip>
#include <sstream>

using namespace std;

int main() {
    int jumlah_obat = 0;
    int a = 0;
    int jumlah_beli;
    string nama_pasien;
    string bpjs;
    string nama_obat;
    string bonus;
    string satuan_jual;
    long long harga_total,harga_diskon,harga_setelah_diskon,harga_satuan,harga_total_akhir,harga_bpjs,harga_pajak,harga_total_setelah_diskon;
    float diskon = 0;
    float potongan_bpjs = 0;
    float pajak = 0.10;

    cout << " APOTEK ABC - PROGRAM PENJUALAN OBAT " << endl;
    cout << "=====================================" << endl;
    cout << " BY Pasyah Wahyu Insanni Vegananda   " << endl;
    cout << " A11.2025.16575   " << endl;
    cout << endl;
    cout << " Masukkan Jumlah Obat Yang di beli : ";
    cin  >> jumlah_obat;
    cout << " Masukkan Nama Pasien / Pembeli    : ";
    cin.ignore();
    getline(cin, nama_pasien);
    cout << endl;
    cout << " Apakah Punya BPJS (Y/N)           : ";
    cin  >> bpjs;
    cout << endl;


    while (a<jumlah_obat){
        cout << endl;
        a++;
        cout << "Obat yang ke-" <<a<< endl;
        cout << " Nama Obat             : ";
        cin.ignore();
        getline(cin, nama_obat);
        cout << " Satuan Jual           : ";
        cin >> satuan_jual;
        cout << " Harga Satuan          : Rp.";
        cin >> harga_satuan;
        cout << " Jumlah yang di beli   : ";
        cin >> jumlah_beli;

        harga_total = jumlah_beli * harga_satuan;

        if (jumlah_beli > 10){
            diskon = 0.10;
            harga_diskon = harga_total * diskon;
            harga_setelah_diskon = harga_total - harga_diskon;
            harga_total_setelah_diskon += harga_setelah_diskon;
            cout << " Total Jual            : Rp." << harga_total << endl;
            cout << " Diskon 10%            : Rp." << harga_diskon << endl;
            cout << " Harga Setelah Diskon  : Rp." << harga_setelah_diskon << endl;
            if (harga_total > 1000000){
                bonus = "PAYUNG";
            } else {
                bonus = "TISSUE";
            }
        } else {
            harga_diskon = harga_total * diskon;
            harga_setelah_diskon = harga_total - harga_diskon;
            harga_total_setelah_diskon += harga_setelah_diskon;
            cout << " Total Jual            : Rp." << harga_total << endl;
            cout << " Diskon 0%             : Rp." << harga_diskon << endl;
            cout << " Harga Setelah Diskon  : Rp." << harga_setelah_diskon << endl;
            if (harga_total > 1000000){
                bonus = "PAYUNG";
            } else {
                bonus = "TISSUE";
            }
        }


        if (bpjs == "Y" || bpjs == "y" || bpjs == "ya" || bpjs == "Ya"){
            potongan_bpjs = 0.5;
            harga_bpjs = harga_total - (potongan_bpjs * harga_total);
    }
    } cout << " Total Setelah Diskon  : Rp." << harga_total_setelah_diskon << endl;


    harga_pajak = harga_setelah_diskon * pajak;
    harga_total_akhir = harga_pajak + harga_total_setelah_diskon - potongan_bpjs;



    cout << endl;
    cout << " " << endl;
    cout << "=====================================" << endl;
    cout << "Nama Pembeli / Pasien  : " << nama_pasien << endl;
    cout << "Peserta BPJS           : " << bpjs << endl;
    cout << "Total Harga Obat       : " << harga_total_setelah_diskon << endl;
    cout << "Pajak 10%              : " << harga_pajak << endl;
    cout << "Total Akhir            : " << harga_total_akhir << endl;
    cout << "Bonus                  : " << bonus << endl;
    cout << "=====================================" << endl;



    return 0;
}

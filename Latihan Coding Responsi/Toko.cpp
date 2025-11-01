#include <iostream>
#include <sstream> //buat string
#include <iomanip>

using namespace std;

int main() {
    int jumlah_obat,jumlah_beli = 0;
    string nama_pembeli,nama_obat,satuan_obat;
    long harga_obat = 0;
    string bpjs;
    int a = 1;
    float diskon = 0;
    long jumlah_harga_awal =0;
    long jumlah_diskon = 0;
    long jumlah_bpjs = 0;
    long jumlah_total_setelah_diskon = 0;
    long jumlah_total_semua = 0;

    cout << "PROGRAM PENJUALAN OBAT" <<endl;
    cout << "======================" <<endl;
    cout << endl;

    cout << "Jumlah obat yang di jual : ";
    cin  >> jumlah_beli;
    cout << "Nama Pembeli             : ";
    cin.ignore();
    getline(cin, nama_pembeli);
    cout << "Peserta BPJS [Y/T]       : ";
    cin  >> bpjs;

    cout << endl;

    cout << fixed << setprecision(2);

    while(a <= jumlah_beli){
        cout << "Obat ke  - "<<a<<endl;
        cout << "Nama obat yang di beli : ";
        cin  >> nama_obat;
        cout << "Satuan obat            : ";
        cin  >> satuan_obat;
        cout << "Harga satuan obat      : Rp. ";
        cin  >> harga_obat;
        cout << "Jumlah Obat yang dibeli: ";
        cin  >> jumlah_obat;

        jumlah_harga_awal = harga_obat * jumlah_obat;
        cout << "Total Jual             : Rp. "<<jumlah_harga_awal<<endl;

        if (jumlah_obat > 10 ){
            diskon = 0.10;
            if (bpjs == "Y" ){
                jumlah_diskon = jumlah_harga_awal * diskon;
                jumlah_bpjs = jumlah_harga_awal * 0.05;
                jumlah_total_setelah_diskon = jumlah_harga_awal - (jumlah_diskon + jumlah_bpjs);
                cout << "Diskon 10%     : Rp. " <<jumlah_diskon<<endl;
            } else {
                diskon = 0.10;
                jumlah_diskon = jumlah_harga_awal * diskon;
                jumlah_total_setelah_diskon = jumlah_harga_awal - jumlah_diskon;
                cout << "Diskon 10%     : Rp." <<jumlah_diskon<<endl;
            }
        }else if (jumlah_obat <= 10 ){
            diskon = 0;
            if (bpjs == "Y" ){
                jumlah_bpjs = jumlah_harga_awal * 0.05;
                jumlah_total_setelah_diskon = jumlah_harga_awal - jumlah_bpjs;
                cout << "Diskon 0%      : Rp.0" <<endl;
            } else {
                diskon = 0;
                jumlah_total_setelah_diskon = jumlah_harga_awal - 0;
                cout << "Diskon 0%      : Rp.0" <<endl;
            }
        }



        cout << "Total Setelah Diskon  : Rp." <<jumlah_total_setelah_diskon<<endl;
        jumlah_total_semua += jumlah_total_setelah_diskon;
        a++;
    }

    cout << "\n==============================\n";
    cout << "Nama Pasien        : "<< nama_pembeli<<endl;
    cout << "Peserta BPJS       : "<< bpjs << endl;
    cout << "Total Harga Obat   : Rp."<< jumlah_total_semua <<endl;
    long pajak = jumlah_total_semua * 0.10;
    long jumlah_harga_akhir = jumlah_total_semua + pajak;
    cout << "Pajak 10%          : Rp."<< pajak << endl;
    cout << "Total Akhir        : Rp."<< jumlah_harga_akhir; endl;
    if (jumlah_total_semua > 1000000){
        cout << "Bonus              : Payung ";
    }   else {
        cout << "Bonus              : Tisu ";
    }
    cout << "\n==============================\n";








return 0;
}

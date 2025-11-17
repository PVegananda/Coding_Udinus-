#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

int main() {
    int jumlah_mobil = 0;
    string nama_sewa;
    string langganan;

    cout << " RENTAL ABC - PROGRAM PENYEWAAN MOBIL " << endl;
    cout << "=====================================" << endl;
    cout << " BY Pasyah Wahyu Insanni Vegananda   " << endl;
    cout << " A11.2025.16575   " << endl;
    cout << endl;
    cout << " Masukkan Jumlah Mobil Yang Di Sewa : ";
    cin  >> jumlah_mobil;
    cout << " Nama Pembeli                       : ";
    cin.ignore();
    getline(cin, nama_sewa);
    cout << " Apakah Langganan (Y/N)             : ";
    cin  >> langganan;
    cout << endl;
    cout << "-----------------------------------" << endl;

    cout << fixed << setprecision(2);

    int a = 1;
    string nama_mobil;
    string jenis_mobil;
    int tahun_produksi;
    string satuan;
    string bonus;
    double harga_sewa = 0;
    int lama_sewa = 0;
    double total_harga_sewa = 0;
    float diskon = 0;
    long harga_diskon = 0;
    long banyak_diskon = 0;
    long total_setelah_langganan;
    long total_awal;
    long total_akhir = 0;

    //coding
    while (a <= jumlah_mobil){

        cout << "Mobil Ke - " <<a<<endl;
        cout << "Nama Mobil          : ";
        cin.ignore();
        getline(cin, nama_mobil);

        if (nama_mobil == "Avanza" ) {
            jenis_mobil = "MPV";
            tahun_produksi = 2015;
            satuan = "unit";

        }else if ( nama_mobil == "Xenia"){
            jenis_mobil = "MPV";
            tahun_produksi = 2014;
            satuan = "unit";

        }else if ( nama_mobil == "Atlis"){
            jenis_mobil = "Sedan";
            tahun_produksi = 2010;
            satuan = "unit";

        }else {
            jenis_mobil = "Belum Ada di Data";
            tahun_produksi = 2025;
            satuan = "unit";
        }

        cout << "Jenis Mobil         : "<<jenis_mobil<<endl;
        cout << "Tahun Produksi      : "<<tahun_produksi<<endl;
        cout << "Satuan              : "<<satuan<<endl;
        cout << "Harga Sewa / Hari   : Rp.";
        cin  >> harga_sewa;
        cout << "Lama Sewa           : ";
        cin  >> lama_sewa;


        total_harga_sewa = harga_sewa * lama_sewa;

        if ( jumlah_mobil >= 2 && lama_sewa > 10 ){
                if (langganan == "Y" || langganan == "y"){
                    diskon = 0.10;
                    banyak_diskon = diskon * total_harga_sewa;
                    harga_diskon = total_harga_sewa - banyak_diskon - (0.10 * total_harga_sewa);
                    cout << "Diskon 10%         : Rp." <<banyak_diskon<<endl;
                } else {
                    diskon = 0.10;
                    banyak_diskon = diskon * total_harga_sewa;
                    harga_diskon = total_harga_sewa - banyak_diskon;
                    cout << "Diskon 10%         : Rp." <<banyak_diskon<<endl;
                }

        } else {
            if (langganan == "Y" || langganan == "y"){
                    diskon = 0;
                    banyak_diskon = diskon * total_harga_sewa;
                    harga_diskon = total_harga_sewa - banyak_diskon - (0.10 * total_harga_sewa);
                    cout << "Diskon langganan   : " <<banyak_diskon<<endl;
                } else {
                    diskon = 0;
                    banyak_diskon = diskon * total_harga_sewa;
                    harga_diskon = total_harga_sewa - banyak_diskon;
                    cout << "Diskon 0%          : " <<banyak_diskon<<endl;
                }
        }

        cout << "Total Setelah Diskon       :" <<harga_diskon<<endl;
        cout << endl;

        total_awal += harga_diskon;
        a++;

    }
        double pajak = total_awal * 0.10;
        total_akhir = total_awal + pajak;

        cout << endl;
        cout << "=====================================" << endl;
        cout << "Nama Peminjam      : "<<nama_sewa<<endl;
        cout << "Langganan          : "<<langganan<<endl;
        cout << "Jumlah Mobil       : "<<jumlah_mobil<<endl;
        cout << "Sewa Mobil         : Rp."<<total_awal<<endl;
        cout << "Pajak 10%          : Rp."<<pajak<<endl;
        cout << "Total Akhir        : Rp."<<total_akhir<<endl;
        if ( total_akhir > 2500000 ){
            bonus = "Sarung Cover Mobil";
        } else {
            bonus = "Tissue Kabin";
        }
        cout << "Bonus              : "<<bonus<<endl;
        cout << "=====================================" << endl;
        cout << endl;
        cout << endl;



        cout << " SOAL 2" << endl;
        cout << "=====================================" << endl;
        cout << " BY Pasyah Wahyu Insanni Vegananda   " << endl;
        cout << endl;
        a = 1;

        for (int i = 1; i <= 1; i++) {
                cout << i << " ";
            }

        cout<<endl;

        while (a<3){
            a += 1;
            cout << a << " ";
        }

        cout<<endl;

        while (a<6){
            a += 1;
            cout << a << " ";
        }

        cout<<endl;
        do {
            a += 1;
            cout << a << " ";
        } while (a<10);

    return 0;
}



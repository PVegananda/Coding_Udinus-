#include <iostream> //semua
#include <sstream> //string
#include <cmath> //lib math
#include <iomanip> //double

using namespace std;

int main(){
    int jumlah_barang = 0;
    double harga_barang = 0;
    long long harga_seluruh_barang = 0;
    float diskon = 0;
    int harga_diskon = 0;
    long long harga_akhir = 0;
    int a = 0;

    cout <<"Masukkan Jumlah Barang yang di beli = ";
    cin >> jumlah_barang;

    while(a<jumlah_barang){
        cout<<"Masukkan Harga Barang = ";
        cin>>harga_barang; //pasti di eksekusi dan ada infinity loop
        harga_seluruh_barang += harga_barang;
        a++; // satu persatu karena menghitung jumlah

    }

    if (harga_seluruh_barang > 500000 && harga_seluruh_barang < 1000000){
        diskon = 0.15;
    } else if (harga_seluruh_barang >= 1000000){
        diskon = 0.25;
    }

    harga_diskon = diskon * harga_seluruh_barang;
    harga_seluruh_barang -= harga_diskon;

    cout << endl;
    cout << "Jumlah Barang yang di beli : "<<jumlah_barang <<endl;
    cout << "Diskon Barang              : "<<diskon * 100<< "%" <<endl;
    cout << "Harga Diskon Barang        : "<<harga_diskon <<endl;
    cout << "Harga Seluruh Barang       : "<<harga_seluruh_barang <<endl;


    cout << fixed << setprecision(0);
    return 0;

    // perhatikan tipe data
    // lebih dari 100 juta gunakan long long
    // diskon menggunakan float
    // bisa menggunakan decrement untuk mengurangi
}

#include <iostream>
#include <cstdlib>  // untuk rand() dan srand()
#include <ctime>    // untuk time()

using namespace std;

int main() {
    int angka, random, a = 0;
    srand(time(0)); // membuat angka random / acuan
    random = rand() % 100 + 1;
    string lanjut = "Y";

    do {
        cout << "Masukkan Angka = ";
        cin >> angka;
        a++;

        if (angka > random){
            cout << "angka terlalu tinggi!. \n";
        }else if (angka < random){
            cout << "angka terlalu rendah!. \n";
        }else {
            cout << "Selamat Anda Berhasil Menebak \n";
            cout << "Jumlah Tebakan : " << a << endl;
            cout << "Angka          : " << random << endl;
        }
    } while (angka != random);

    while (true){
        // digunakan saat buat game / buat list menu
        cout << "Apakah ingin melanjutkan ";
        cin >> lanjut;

        if (lanjut == "Y"){

        } else if (lanjut == "N"){
            exit();
        }
    }

    return 0;
    }



#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    int a = 0;
    int jumlah_angka = 0;
    int total = 0;

    cout << "Masukkan Jumlah angka yang akan anda input : ";
    cin >> jumlah_angka;

    int angka[jumlah_angka];

    while (a < jumlah_angka){
        cout << "Angka ke  - " << a+1 << ": ";
        cin >> angka[a];
        total += angka[a];
        a++;
    }

    int maks = angka[0];
    int mins = angka[0];

    cout << "Angka yang anda masukkan adalah : " << endl;
    for (int e = 0; e < jumlah_angka; e++){
        cout << angka[e] << " ";
    }

    cout << endl;

    cout << "jumlah elemen  : " << a << endl;
    cout << "total array    : " << total << endl;
    for (int i = 0; i < jumlah_angka; i++){
        if (angka[i] > maks){
            maks = angka[i];
        }

        if (angka[i] < mins ){
            mins = angka[i];
        }

    }

    cout << "angka terbesar : " << maks << endl;
    cout << "angka terkecil : " << mins << endl;
    return 0;
}

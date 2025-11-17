#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a = 0;
    int jumlah = 0;
    int hitung_genap = 0;
    int hitung_ganjil = 0;
    int jumlah_ganjil = 0;
    int jumlah_genap = 0;


    for (int a = 2; a <= 10; a+=2) {
        cout << a << " ";
        jumlah += a;
        if ( a%2 == 0){
            hitung_genap ++;
        }
    }
    cout<<endl;
    cout << "banyak angka genap : " << hitung_genap << endl;
    cout << "jumlah angka genap : " << jumlah << endl;
    cout<<endl;

    jumlah = 0;

    for (int a = 1; a <= 10; a+=2) {
        cout << a << " ";
        jumlah += a;
        if ( a%2 != 0){
            hitung_ganjil ++;
        }
    }


    cout << endl;
    cout << "banyak angka ganjil : " << hitung_ganjil << endl;
    cout << "jumlah angka ganjil : " << jumlah << endl;
    cout << endl;
    cout << endl;

    //contoh pak sinaga

    a = 0;
    jumlah = 0;
    hitung_genap = 0;
    hitung_ganjil = 0;
    jumlah_ganjil = 0;
    jumlah_genap = 0;

    for (int a = 1; a <= 5; a++) {
        cout << a << " ";
        jumlah += a;
        if ( a%2 == 0){
            hitung_genap ++;
            jumlah_genap +=a;
        } else {
            hitung_ganjil ++;
            jumlah_ganjil +=a;
        }
    }

    cout << endl;
    cout << "jumlah semua bilangan  : " << jumlah << endl;
    cout << "banyak angka ganjil    : " << hitung_ganjil << endl;
    cout << "jumlah angka ganjil    : " << jumlah_ganjil << endl;
    cout << "banyak angka genap     : " << hitung_genap << endl;
    cout << "jumlah angka genap     : " << jumlah_genap << endl;



return 0;
}

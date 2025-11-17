#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a = 0;
    int b = 0;
    int jumlah = 0;
    int hitung_genap = 0;
    int hitung_ganjil = 0;

    /*
    for (int a = 1; a<=10; a++) {
       cout<<a<<" - UDINUS"<<endl;
    }
    cout<<endl;
    for (int a = 5; a<=10; a++) {
       cout<<a<<" - UDINUS"<<endl;
    }
    cout<<"Bilangan Ganjil"<<endl;
    for (int a = 1; a<=20; a+=2) {
        cout<<a<<" ";
    }
    cout<<endl;
    cout<<"Bilangan Genap"<<endl;
    for (int a = 2; a<=20; a+=2) {
        cout<<a<<" ";
    } */

    for (int a = 1; a <= 10; a++) {
        cout << a << " ";
        jumlah += a;
    }
    cout << endl;
    cout << "Hasil Penjumlahan : " << jumlah << endl;

    for (int a = 2; a <= 10; a+=2) {
        cout << a << " ";
        if ( a%2 == 0){
            hitung_genap ++;
        }
    }

    for (int a = 1; a <= 10; a+=2) {
        cout << a << " ";
        if ( a%2 != 0){
            hitung_ganjil ++;
        }
    }


    cout << endl;
    cout << "banyak angka ganjil : " << hitung_ganjil << endl;
    cout << "banyak angka genap : " << hitung_genap << endl;

return 0;
}

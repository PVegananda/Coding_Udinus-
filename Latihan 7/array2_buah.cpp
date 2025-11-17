#include <iostream>
#include <iomanip>
#include <cmath>
#include <sstream>

using namespace std;

int main(){
    int jumlah_buah = 0;
    int a = 0;
    double total_harga = 0;
    int total_item = 0;

    cout << fixed << setprecision(2);

    cout << "Masukkan jumlah buah : ";
    cin >> jumlah_buah;
    cout << endl;

    string nama_buah[jumlah_buah];
    double harga[jumlah_buah];

    while (a < jumlah_buah){
        cout << "Buah ke  - " << a+1 << " : ";
        cin >> nama_buah[a];
        cout << "Harga Buah   : Rp.";
        cin >> harga[a];
        total_harga += harga[a];
        total_item += 1;
        a++;
    }

    cout << endl;
    cout << endl;

    cout << "Buah yang anda masukkan adalah : " << endl;
    for (int i = 0; i < jumlah_buah; i++){
        cout << "Buah ke " << i+1 << " : " << nama_buah[i] << endl;
    }
    cout << "Total Item yang di beli            : " << total_item<< endl;
    cout << "Total Harga yang harus anda bayar  : Rp." <<total_harga<<endl;


    return 0;
}


#include <iostream> //menambah package
#include <math.h> //library matematika

// ini di bawah agar tidak selalu menulis std
using namespace std;

int keluar () {

}

//fungsi main berisi coding
int main() {
 string juan = "halo";
 int kalkulator;
 int x;
 int y;


    //looping
    while (true){ //infinity loop
    cout<<"KALKULATOR PENJUMLAHAN SEDERHANA"<<endl;
    cout<<"================================"<<endl;
    cout<<"Operator Mana yang kamu ingin gunakan"<<endl;
    cout<<"1. Penjumlahan"<<endl;
    cout<<"2. Pengurangan"<<endl;
    cout<<"3. Perkalian"<<endl;
    cout<<"4. Pembagian"<<endl;
    cout<<"Pilih angka (1/2/3/4) = ";
    cin>>kalkulator;
    cout<<""<<endl;

    if (kalkulator == 1){
    //Penjumlahan
    cout<<"Masukkan Angka Pertama: ";
    cin>>x;
    cout<<"Masukkan Angka Kedua: ";
    cin>>y;
    cout<<endl;
    cout<<"Hasil Penjumlahan : "<<x+y<<endl;
    cout<<""<<endl;cout<<""<<endl;
    cout<<"Apakah kamu ingin Keluar (yes/no) : ";
    cin>>juan;
    if ( juan == "yes"){
        exit(0);

    } else {

    }
    system("cls");

    } else if (kalkulator == 2){
    //Pengurangan
    cout<<"Masukkan Angka Pertama: ";
    cin>>x;
    cout<<"Masukkan Angka Kedua: ";
    cin>>y;
    cout<<endl;
    cout<<"Hasil Pengurangan : "<<x-y<<endl;
    cout<<""<<endl;cout<<""<<endl;
    cout<<"Apakah kamu ingin Keluar (yes/no) : ";
    cin>>juan;
    if ( juan == "yes"){
        exit(0);

    } else {

    }
    system("cls");

    } else if (kalkulator == 3){
    //Penjumlahan
    cout<<"Masukkan Angka Pertama: ";
    cin>>x;
    cout<<"Masukkan Angka Kedua: ";
    cin>>y;
    cout<<endl;
    cout<<"Hasil Perkalian : "<<x*y<<endl;
    cout<<""<<endl;cout<<""<<endl;
    cout<<"Apakah kamu ingin Keluar (yes/no) : ";
    cin>>juan;
    if ( juan == "yes"){
        exit(0);

    } else {

    }
    system("cls");

    } else if (kalkulator == 4){
    //Pembagian
    cout<<"Masukkan Angka Pertama: ";
    cin>>x;
    cout<<"Masukkan Angka Kedua: ";
    cin>>y;
    cout<<endl;
    cout<<"Hasil Pembagian : "<<x/y<<endl;
    cout<<""<<endl;cout<<""<<endl;
    cout<<"Apakah kamu ingin Keluar (yes/no) : ";
    cin>>juan;
    if ( juan == "yes"){
        exit(0);

    } else {

    }
    system("cls");

    } else {
        cout<<"Jangan ngisi ngawur bye"<<endl;
        exit(0);
    }


}


return 0;
}

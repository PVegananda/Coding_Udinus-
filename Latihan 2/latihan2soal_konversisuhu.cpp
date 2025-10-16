

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
    cout<<"KONVERSI SUHU"<<endl;
    cout<<"================================"<<endl;
    cout<<"Suhu mana yang mau anda hitung"<<endl;
    cout<<"1. Dari Celcius ke Farenheit"<<endl;
    cout<<"2. Dari Celcius ke Kelvin"<<endl;
    cout<<"3. Dari Celcius ke Reamur"<<endl;
    cout<<"Pilih angka (1/2/3) = ";
    cin>>kalkulator;
    cout<<""<<endl;

    if (kalkulator == 1){
    //Penjumlahan
    cout<<"Suhu Celcius: ";
    cin>>x;
    cout<<endl;
    float Farenheit = 9/5*x;
    cout<<"Hasil Konversi : "<<Farenheit+32<<endl;
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
    cout<<"Suhu Celcius: ";
    cin>>x;
    cout<<endl;
    float Kelvin = 9/5*x;
    cout<<"Hasil Konversi : "<<Kelvin+273<<endl;
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
    cout<<"Suhu Celcius: ";
    cin>>x;
    cout<<endl;
    float reamur = 4*x;
    cout<<"Hasil Konversi : "<<reamur/5<<endl;
    cout<<""<<endl;cout<<""<<endl;
    cout<<"Apakah kamu ingin Keluar (yes/no) : ";
    cin>>juan;
    if ( juan == "yes"){
        exit(0);

    } else {

    }


    system("cls");
    }
    else {
        cout<<"Jangan ngisi ngawur bye"<<endl;
        exit(0);
    }
    }

return 0;
}




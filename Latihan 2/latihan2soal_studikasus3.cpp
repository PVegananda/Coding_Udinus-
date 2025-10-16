
#include <iostream> //menambah package
#include <cmath> //library matematika

// ini di bawah agar tidak selalu menulis std
using namespace std;

int keluar () {

}

//fungsi main berisi coding
int main() {


    cout<<"Latihan 2 "<<endl;
    cout<<"Studi Kasus 3 Matematika"<<endl;
    cout<<""<<endl; //blankspace
    cout<<"NAMA    _______________________Pasyah Wahyu I. V"<<endl;
    cout<<"NIM     _______________________A11.2025.16575"<<endl;
    cout<<"JURUSAN _______________________S1 - Teknik Informatika"<<endl;

    cout<<""<<endl;cout<<""<<endl;
    cout<<"Kasus Satu"<<endl;
    float a = a;
    float b;
    float c;
    float d;
    float e;

    cout<<"jika nilai y = a^3 + 7 "<<endl;
    cout<<"input nilai a = ";
    cin>>a;

    float x = pow(a, 3); //perpangkatan
    cout<<"hasil dari operasi di atas adalah = y ="<<a<<"^3 + 7"<<endl;
    cout<<"hasil dari operasi di atas adalah = y ="<<x<<endl;
    cout<<""<<endl;


    cout<<"Kasus Dua"<<endl;
    cout<<"jika nilai y = a^2 + bx + c "<<endl;
    cout<<"input nilai a = ";
    cin>>a;
    cout<<"input nilai b = ";
    cin>>b;
    cout<<"input nilai c = ";
    cin>>c;

    float y = pow(a, 2); //perpangkatan
    cout<<"hasil dari operasi di atas adalah = y ="<<a<<"^2 + "<<b<<"x + "<<c<<endl;
    cout<<"hasil dari operasi di atas adalah = y ="<<y<<" + "<<b<<"x + "<<c<<endl;
    cout<<""<<endl;


    cout<<"Kasus Tigas"<<endl;
    cout<<"Masukkan 5 bilangan"<<endl;
    cout<<"input nilai a = ";
    cin>>a;
    cout<<"input nilai b = ";
    cin>>b;
    cout<<"input nilai c = ";
    cin>>c;
    cout<<"input nilai d = ";
    cin>>d;
    cout<<"input nilai e = ";
    cin>>e;

    float z = a+b+c+d+e;
    cout<<"Hasil Penjumlahan : "<<z<<endl;
    cout<<"Nilai Rata2 : "<<z/5<<endl;


    cout<<endl;

    return 0;

}

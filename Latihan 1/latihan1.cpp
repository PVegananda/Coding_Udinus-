#include <iostream> //menambah package

// ini di bawah agar tidak selalu menulis std
using namespace std;

//fungsi main berisi coding
int main(){

// ini bagian coding
// jika std hilang maka kita harus menulisnya menjadi std::cout bukan cout saja

    cout<<"    Hello World   "<<endl; //coding untuk output text

    cout<<"Latihan Satu"<<endl;
    cout<<"Belajar Pemrograman Dasar Menggunakan C#"<<endl;
    cout<<""<<endl; //blankspace
    cout<<"NAMA    _______________________Pasyah Wahyu I. V"<<endl;
    cout<<"NIM     _______________________A11.2025.16575"<<endl;
    cout<<"JURUSAN _______________________S1 - Teknik Informatika"<<endl;

    //warna kotak merah : tempat terjadi kesalahan (lineblock)
    //bahasa pemrograman : bahasa lengkap dengan tipe data
    //tipe data : membedakan data satu dengan data yang lain

    cout<<""<<endl;cout<<""<<endl;
    cout<<"DIBAWAH INI MEMBAHAS TIPE DATA"<<endl;
    cout<<"=============================="<<endl; //blankspace

    //tipe data primitif
    int a=10; //tipe datanya masih integer
    int b=3;  //tipe datanya masih integer
    float c=(float)a/b; // konversi menjadi float (float menampung angka desimal)
    float d =(float)a*c;
    float e = d + c;

    //PENJUMLAHAN
    cout<<"Nilai penjumlahan="<<a+b<<endl;
    cout<<"Nilai a="<<a<<endl;
    cout<<"Nilai b="<<b<<endl;
    cout<<"Nilai c (a/b)="<<c<<endl; //hasilnya pasti 3 karena tipe datanya bulat / float
    cout<<"Nilai d (bxa)="<<d<<endl;
    cout<<"Nilai e = "<< d << "+" << c << "="<< e <<endl;
    cout<<""<<endl;cout<<""<<endl;

return 0; //penutup coding agar tidak loop
}

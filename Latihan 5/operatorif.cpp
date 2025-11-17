#include <iostream> //menambah package
#include <cmath> //library matematika

// ini di bawah agar tidak selalu menulis std
using namespace std;

int main() {
    int a=10;
    int b=5;
    cout<<(a>5)<<endl; //1 = True
    cout<<(a==5)<<endl; //0 = False
    cout<<(a>=5 && a<=10)<<endl; // 1 True
    cout<<(a==5 && b==10)<<endl; // 0 False

    bool ya=true;
    bool tidak=false;

    cout<<ya<<endl; //1 = True
    cout<<tidak<<endl; //0 = False

    //decision making

    if(a>= 5 && a<=10) //permisalan jika benar menggunakan AND
    {
        cout<<"Pernyataan BENAR !"<<endl;
    }
    else //permisalan jika selain benar / salah
    {
        cout<<"Pernyataan SALAH !"<<endl;
    }

    if(a>= 5 || a>10) //permisalan jika benar menggunakan OR
    {
        cout<<"Pernyataan BENAR !"<<endl;
    }
    else //permisalan jika selain benar / salah
    {
        cout<<"Pernyataan SALAH !"<<endl;
    }

    if(a<5 || a>10) //permisalan jika benar menggunakan OR
    {
        cout<<"Pernyataan BENAR !"<<endl;
    }
    else //permisalan jika selain benar / salah
    {
        cout<<"Pernyataan SALAH !"<<endl;
    }
    cout<<endl;
    int x=7;
    if (x%2==0){
        cout<<"================ "<<endl;
        cout<<x<<" adalah GENAP "<<endl;
        cout<<"================ "<<endl;
    } else {
        cout<<"================ "<<endl;
        cout<<x<<" adalah GANJIL "<<endl;
        cout<<"================ "<<endl;
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;

    int na=0;
    cout<<"Masukkan Nilai : ";
    cin>>na;

    while (!(cin >> na)) {
        // Jika input bukan angka
        cout << "Input tidak valid! Masukkan angka saja: ";

        // Mengabaikan input yang salah
        cin.clear();  // Membersihkan status error pada cin
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Mengabaikan karakter yang tersisa dalam buffer
    }
    if (na>=95) {
        cout<<"Nilai Akhir : "<<na<<endl;
        cout<<"Nilai Huruf : A"<<endl;
        cout<<"Keteramgan  : LULUS"<<endl;
        cout<<"Predikat    : ISTIMEWA"<<endl;

    }else if (na>=85) {
        cout<<"Nilai Akhir : "<<na<<endl;
        cout<<"Nilai Huruf : B"<<endl;
        cout<<"Keteramgan  : LULUS"<<endl;
        cout<<"Predikat    : SANGAT MEMUASKAN"<<endl;

    }else if (na>=75) {
        cout<<"Nilai Akhir : "<<na<<endl;
        cout<<"Nilai Huruf : BC"<<endl;
        cout<<"Keteramgan  : LULUS"<<endl;
        cout<<"Predikat    : MEMUASKAN"<<endl;

    }else if (na>=60) {
        cout<<"Nilai Akhir : "<<na<<endl;
        cout<<"Nilai Huruf : C"<<endl;
        cout<<"Keteramgan  : LULUS"<<endl;
        cout<<"Predikat    : CUKUP"<<endl;

    }else if (na>=50) {
        cout<<"Nilai Akhir : "<<na<<endl;
        cout<<"Nilai Huruf : D"<<endl;
        cout<<"Keteramgan  : REMIDI"<<endl;
        cout<<"Predikat    : SANGAT KURANG"<<endl;

    }//else if (na == not int) {

    //}
    else {
        cout<<"Nilai Akhir : "<<na<<endl;
        cout<<"Nilai Huruf : E"<<endl;
        cout<<"Keteramgan  : SANGAT BURUK"<<endl;
        cout<<"Predikat    : MENGULANG"<<endl;
    }


return 0;
}

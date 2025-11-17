#include <iostream> //menambah package
#include <cmath> //library matematika

// ini di bawah agar tidak selalu menulis std
using namespace std;

int main() {
    int a = 5;
    int b = 3;

    cout<<a<<" + "<<b<<" = "<<a+b<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"-----------INCREMENT------------"<<endl;
    cout<<"================================"<<endl;
    cout<<endl;
    cout<<"---------POST-INCREMENT---------"<<endl;

    cout<<"================================"<<endl;
    a++; //increment a++ = a + 1 / post increment
    cout<<a<<endl;
    cout<<a++<<" ( a Masih 6 )"<<endl; // masih proses
    cout<<a<<" ( a Sudah 7 )"; // sudah di tampilkan
    cout<<endl;

    cout<<endl;
    cout<<"----------PRE-INCREMENT---------"<<endl;
    cout<<"================================"<<endl;
    int i=10;
    ++i; //pre-encrement
    i++;
    cout<<i<<endl;
    cout<<++i<<endl; //pre increment sudah tampil angka 12 karena di proses terlebih dahulu

    cout<<endl;
    cout<<endl;
    cout<<endl;
    int c = 5;
    int d = 3;

    cout<<c<<" + "<<d<<" = "<<c+d<<endl;
    cout<<"-----------DECREMENT------------"<<endl;
    cout<<"================================"<<endl;
    cout<<endl;
    cout<<"---------POST-DECREMENT---------"<<endl;

    cout<<"================================"<<endl;
    c--; //decrement a++ = a + 1 / post decrement
    cout<<c<<endl;
    cout<<c--<<" ( a Masih 4 )"<<endl; // masih proses
    cout<<c<<" ( a Sudah 3 )"; // sudah di tampilkan
    cout<<endl;

    cout<<endl;
    cout<<"----------PRE-DRECREMENT---------"<<endl;
    cout<<"================================"<<endl;
    int f=10;
    --f; //pre-decrement
    f--;
    cout<<f<<endl;
    cout<<--f<<endl; //pre decrement sudah tampil angka 12 karena di proses terlebih dahulu

    return 0;
}

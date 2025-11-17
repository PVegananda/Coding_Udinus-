#include <iostream> //menambah package
#include <cmath> //library matematika

// ini di bawah agar tidak selalu menulis std
using namespace std;

int main() {
    int x = 265;

    cout<<"---------KASUS 4 LAT 4----------"<<endl;
    cout<<"================================"<<endl;
    cout<<endl;

    cout<<"masukan angka 3 digit = ";
    cin>>x;
    x%=10;
    cout<<"digit terakhir dari angka tersebut adalah = "<<x<<endl;

return 0;
}

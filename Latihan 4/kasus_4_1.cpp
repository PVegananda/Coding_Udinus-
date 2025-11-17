#include <iostream> //menambah package
#include <cmath> //library matematika

// ini di bawah agar tidak selalu menulis std
using namespace std;

int main() {
    cout<<"---------KASUS 1 LAT 4----------"<<endl;
    cout<<"================================"<<endl;
    cout<<endl;

    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;

    a = 5;
    b = 2;
    c = 10;
    cout<<a<<" * "<<b<<" + "<<c<<" = "<<a*b+c<<endl;

    a = 6;
    b = 3;
    c = 2;
    d = 3;
    cout<<a<<" / "<<b<<" + "<<c<<" * "<<d<<" = "<<a/b+c*d<<endl;

    a = 3;
    b = 4;
    c = 2;
    cout<<a<<" - "<<b<<" / "<<c<<" = "<<a-b/c<<endl;

    int x = 10;
    int y = 5;
    cout<<x<<" / "<<"3"<<" + "<<y<<" = "<<x/3+y<<endl;

    float z = 10;
    float i = 5;
    cout<<z<<" / "<<"3"<<" + "<<i<<" = "<<(z/3)+i<<endl;


return 0;
}

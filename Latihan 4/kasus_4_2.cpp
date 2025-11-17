#include <iostream> //menambah package
#include <cmath> //library matematika

// ini di bawah agar tidak selalu menulis std
using namespace std;

int main() {

    int x = 5;
    int y = 3;

    cout<<"---------KASUS 2 LAT 4----------"<<endl;
    cout<<"================================"<<endl;
    cout<<endl;

    cout<<"nilai x = 5 dan nilai y = 3"<<endl;

    // Compound Assignment
    x+=1; // sama dengan x = x + 1
    cout<<"1. x+= = "<<x<<endl;
    x+=y; // sama dengan x = x + y
    cout<<"2. x+=y = "<<x<<endl;
    y-=1; // sama dengan y = y-1
    cout<<"3. y-=1 = "<<y<<endl;
    y-=x; // sama dengan y = y-x
    cout<<"4. y-=x = "<<y<<endl;
    x*=y+1; // sama dengan x = x * (y +1) dengan y = -7 dan x = 9
    cout<<"5. x*=y+1 = "<<x<<endl;
    y/=3; // sama dengan y = y / 3 dengan y = -7
    cout<<"6. y/=3 = "<<y<<endl;


 return 0;
}

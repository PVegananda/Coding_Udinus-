#include <iostream> // menambah package
#include <iomanip>
#include <cmath> // library matematika
// nim : A11.2025.16575 - Pasyah Wahyu I. V

using namespace std;

int main() {

    int a=0;
    cout<<"Masukkan sebuah angka = ";
    cin>>a;

    cout<<endl;
    //nested if
        if(a>0){
            cout<<a<<" Adalah bilangan Positif"<<endl;
                if(a%2 == 0){ //nested if
                    cout<<a<<" Adalah bilangan Genap"<<endl;
                }else{
                    cout<<a<<" Adalah bilangan Ganjil"<<endl;
                } //akhir nested if
        }else if(a == 0) {
            cout<<a<<" Adalah bilangan Nol"<<endl;
        }else{
            cout<<a<<" Adalah bilangan Negatif"<<endl;
        }


return 0;
}

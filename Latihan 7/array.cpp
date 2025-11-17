#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){

    int nilai[5];
    int total = 0;
    int i = 0;
    int angka[] = {1,2,3,4,5};

    cout << "Masukkan 5 nilai" << endl;

    while (i < 5){
        cout << "Nilai ke  - " << i+1 << ": ";
        cin >> nilai[i];
        total += nilai[i];
        i++;
    }

    cout << "Total : " << total << endl;
    cout << endl;

    i = 0;
    while (i < 5){
        cout << "Nilai ke  - " << i+1 << ": " << angka[i] << endl;
        i++;
    }

    cout << endl;

    for (int a = 0 ; a < 5 ; a++){
        cout <<angka[a] << " ";
    }

    cout << endl;

    return 0;
}

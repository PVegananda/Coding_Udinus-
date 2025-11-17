#include <iostream>

using namespace std;

int main() {

    int a = 1;

    for (int i = 1; i <= 1; i++) {
            cout << i << " ";
        }

    cout<<endl;

    while (a<3){
        a += 1;
        cout << a << " ";
    }

    cout<<endl;

    while (a<6){
        a += 1;
        cout << a << " ";
    }

    cout<<endl;
    do {
        a += 1;
        cout << a << " ";
    } while (a<10);
}

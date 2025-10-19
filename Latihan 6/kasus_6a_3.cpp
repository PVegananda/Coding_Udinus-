#include <iostream>
#include <cmath>  // untuk fungsi pow()
using namespace std;

int main() {
    int N;
    cout << "Masukkan jumlah N: ";
    cin >> N;

    cout << "Deret: ";
    for (int i = 1; i <= N; i++) {
        if (i == 2) {
            cout << pow(i, 2) << " ";  // 2^2 = 4
        } else {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}

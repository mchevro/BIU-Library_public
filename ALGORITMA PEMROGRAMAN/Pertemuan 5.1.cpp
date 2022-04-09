/*
AUTHOR : MCHEVRO
*/
#include <iostream>

using namespace std;

int main() {
    short i, x, z;
    cout << "Jumlah Batas Deret : ";
    cin >> z;
    for (i = 1; i <= z; i++) {
        if (i % 2) {
            cout << i << " ";
            x += i;
        }
    }
    cout << endl << "Hasil Penjumalan Deret Diatas : " << x;

    return 0;
}

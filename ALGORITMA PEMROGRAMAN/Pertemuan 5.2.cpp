/*
AUTHOR : MCHEVRO
*/
#include <iostream>

using namespace std;

int main() {
    short i, x, z, y;
    cout << "Jumlah Batas Deret : ";
    cin >> z;
    for (i = 1; i <= z; i++) {
        y = 0;
        for (x = 1; x <= i; x++) {
            if (x == i) {
                cout << x;
                y += x;
            } else {
                cout << x;
                cout << "+";
                y += x;
            }
        }
        cout << "=" << y << endl;
    }
    cout << endl;
}

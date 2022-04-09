#include <iostream>

using namespace std;
int main() {
    int i, j, n, a, b, z, c, d;

    //Nama
    cout << "Mahendra Chevro Susanto\n";
    cout << "--------------------------\n";

    //Perulangan Berbintang
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << "\n";
    }
    cout << "--------------------------\n";

    //Cari Bilangan Ganjil
    a = -1;
    for (z = 1; z <= 10; z++) {
        b = 2 + a;
        cout << b << "";
        a = b;
    }
    cout << "\n--------------------------\n";

    //Hitung Penjumlahan
    c = 10;
    d = 10;
    cout << c + d;
    return 0;
}

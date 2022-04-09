#include <iostream>

using namespace std;

int main() {
    /*
    	BANNER
    */
    cout << "===============================================" << endl;
    cout << "PROGRAM HITUNG KELILING, LUAS PERMUKAAN DAN ISI" << endl;
    cout << "===============================================" << endl;

    /*
    	DEKLARASI VARIABLE
    	k = keliling
    	lp = luas permukaan
    	i = isi
    	r = Jari - Jari
    */
    int k, lp, i, r;

    r = 10; //nilai jari-jari adalah 10

    k = 2 * 3.14 * r; //rumus hitung keliling

    /*
    	rumus hitung luas permukaan
    */
    lp = 4 / 3 * 3.14 * r * r * r;

    i = 4 * 3.14 * r * r; //rumus isi dari sebuah bolah

    /*
    	OUTPUT
    */
    cout << "Jari - Jari = 10" << endl;
    cout << "Keliling = " << k << endl;
    cout << "Luas Permukaan = " << lp << endl;
    cout << "Isi = " << i << endl;
    return 0;
}

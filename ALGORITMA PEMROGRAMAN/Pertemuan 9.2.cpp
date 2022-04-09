//AUTHOR : M.C x AKATSUKI

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    string nama_barang[3];
    int jumlah_penjualan[3][3];
    
    for(int i =0; i<3; i++){
        cout << "Data Penjualan Ke - " << i << endl;
        cout << "Nama Barang : ";
        getline(cin, nama_barang[i]);
        for(int j=0; j<3; j++){
            cout << "Jumlah Penjualan : ";
            cin >> jumlah_penjualan[i][j];
        }
        cout << endl;
        cin.ignore();
    }
    
    cout << "============================================" << endl;
    cout << "No\tNama Barang\t2001\t2002\t2003" << endl;
    cout << "============================================" << endl;
    
    for(int i=0; i<3; i++){
        cout << setiosflags(ios::left) << setw(2) << i+1 << "\t";
        cout << setiosflags(ios::left) << setw(17) << nama_barang[i];
        
        for(int j=0; j<3; j++){
            cout << jumlah_penjualan[i][j] << "\t";
        }

        cout << endl;
        
    }
    return 0;
}

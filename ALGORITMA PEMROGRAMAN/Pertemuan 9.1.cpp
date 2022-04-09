/*
AUTHOR : MCHEVRO
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    string bulan[4][3] = {{"Januari", "Feburari", "Maret"}, {"April", "Mei", "Juni"},
                        {"Juli", "Agustus", "September"}, {"Oktober", "November", "Desember"}};
    
    cout << "==================================" << endl;
    cout << "\tPROGRAM NAMA BULAN" << endl;
    cout << "\t    TAHUN 2018" << endl;
    cout << "==================================" << endl;
    for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){
            cout << setiosflags(ios::left) << setw(12) << bulan[i][j];
        }
        cout << endl;
    }
    return 0;
}

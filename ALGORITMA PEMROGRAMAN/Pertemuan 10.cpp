//AUTHOR : M.C x AKATSUKI 

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    string nama_pembeli[2], jenis_kue[2];
    char kode_kue[2], opsi;
    int harga_kue[2], jumlah_beli[2], total_harga[2];
    do{
        for(int i=0; i<2; i++){
            cout << "Data Ke - " << i+1 << endl;
            cout << "Nama Pembeli : ";
            cin >> nama_pembeli[i];
            cout << "Kode Kue [A/B/C] : ";
            cin >> kode_kue[i];
            
            if (kode_kue[i] == 'A' || kode_kue[i] == 'a'){
                jenis_kue[i] = "Black Forest";
                harga_kue[i] = 150000;
            }else if(kode_kue[i] == 'B' || kode_kue[i] == 'b'){
                jenis_kue[i] = "Birthday Cake";
                harga_kue[i] = 200000;
            }else if(kode_kue[i] == 'C' || kode_kue[i] == 'c'){
                jenis_kue[i] = "Tiramisu";
                harga_kue[i] = 250000;
            }else{
                cout << "Kode Tidak Ada" << endl;
            }
            cout << "Jenis Kue : " << jenis_kue[i] << endl;
            cout << "Harga Kue : " << harga_kue[i] << endl;
            cout << "Jumlah Beli : ";
            cin >> jumlah_beli[i];
            total_harga[i] = harga_kue[i] * jumlah_beli[i];
            cout << "Total Harga : " << total_harga[i];
            cout << endl << endl;
            
        }
        
        
        cout << "\t\t\t\t\tDATA PENJUALAN CAKE" << endl;
        cout << "**************************************************************************************************************************" << endl;
        cout << setiosflags(ios::left) << setw(10) << "No";
        cout << setiosflags(ios::left) << setw(25) << "NamaPembeli";
        cout << setiosflags(ios::left) << setw(15) << "KodeCake";
        cout << setiosflags(ios::left) << setw(25) << "JenisCake";
        cout << setiosflags(ios::left) << setw(15) << "HargaCake";
        cout << setiosflags(ios::left) << setw(15) << "JumlahBeli";
        cout << setiosflags(ios::left) << setw(25) << "TotalBayar";
        cout << endl;
        cout << "**************************************************************************************************************************" << endl;
        
        for(int i=0; i<2; i++){
            cout << setiosflags(ios::left) << setw(10) << i+1;
            cout << setiosflags(ios::left) << setw(25) << nama_pembeli[i];
            cout << setiosflags(ios::left) << setw(15) << kode_kue[i];
            cout << setiosflags(ios::left) << setw(25) << jenis_kue[i];
            cout << setiosflags(ios::left) << setw(15) << harga_kue[i];
            cout << setiosflags(ios::left) << setw(15) << jumlah_beli[i];
            cout << setiosflags(ios::left) << setw(25) << total_harga[i];
            
            cout << endl;
        }
        cout << "**************************************************************************************************************************" << endl;
        
        cout << endl;
        
        cout << "Input Lagi ? : ";
        cin >> opsi;
        cout << endl;
        if(opsi == 'Y' || opsi == 'y'){
            continue;
        }else{
            break;
        }
        
    }while(true);
    
    
    return 0;
}

//RECODING BY : M.C x AKATSUKI 
//REFRENCE : https://jaranguda.com/menghitung-total-dari-harga-di-array/ & SCRIPT YANG DIGRUP ALGORITMA

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    string jenis_ayam[5];
    int jumlah_order, jumlah_potong[5], harga_ayam[5], jumlah_harga[5], total_harga = 0, pajak, total_bayar;
    char kode_jenis[5];
    
    //OUPUT
    cout << "\tGerobak Fried Chiken" << endl;
    cout << "====================================" << endl;
    cout << setiosflags(ios::left) << setw(10) << "KODE";
    cout << setiosflags(ios::left) << setw(10) << "JENIS";
    cout << setiosflags(ios::left) << setw(10) << "HARGA";
    cout << endl;
    cout << "====================================" << endl;
    cout << setiosflags(ios::left) << setw(10) << "D" << setw(10) << "DADA" << setw(10) << "RP.2500" << endl;
    cout << setiosflags(ios::left) << setw(10) << "P" << setw(10) << "PAHA" << setw(10) << "RP.2000" << endl;
    cout << setiosflags(ios::left) << setw(10) << "S" << setw(10) << "SAYAP" << setw(10) << "RP.1500" << endl;
    cout << "====================================" << endl;
    
    cout << "Jumlah Order : ";
    cin >> jumlah_order;
    cout << endl;
    
    //LOOP ARRAY FOR INPUT
    for(int i=0; i<jumlah_order; i++){
        cout << "Nomor Order - " << i+1 << endl;
        cout << "Jenis Potong [D/P/S] : ";
        cin >> kode_jenis[i];
        cout << "Jumlah Potong : ";
        cin >> jumlah_potong[i];
        
        switch(kode_jenis[i]){
            case 'd':
            case 'D':
                jenis_ayam[i] = "Dada";
                harga_ayam[i] = 2500;
                break;
            case 'p':
            case 'P':
                jenis_ayam[i] = "Paha";
                harga_ayam[i] = 2000;
                break;
            case 's':
            case 'S':
                jenis_ayam[i] = "Sayap";
                harga_ayam[i] = 1500;
                break;
            default:
                cout << "Tidak Ada Jenis Ayam!";
                break;
        }
        cout << endl;
    }
    
    cout << endl;
    
    cout << "============================================================================" << endl;
    cout << setiosflags(ios::left) << setw(5) << "No";
    cout << setiosflags(ios::left) << setw(20) << "JenisAyam";
    cout << setiosflags(ios::left) << setw(20) << "HargaSatuan";
    cout << setiosflags(ios::left) << setw(20) << "JumlahPotong";
    cout << setiosflags(ios::left) << setw(20) << "JumlahHarga";
    cout << endl;
    cout << "============================================================================" << endl;
    
    //LOOP FOR OUTPUT
    for(int i=0; i<jumlah_order; i++){
        jumlah_harga[i] = harga_ayam[i] * jumlah_potong[i];
        cout << setiosflags(ios::left) << setw(5) << i+1;
        cout << setiosflags(ios::left) << setw(20) << jenis_ayam[i];
        cout << setiosflags(ios::left) << setw(20) << harga_ayam[i];
        cout << setiosflags(ios::left) << setw(20) << jumlah_potong[i];
        cout << setiosflags(ios::left) << setw(20) << jumlah_harga[i];
        
        total_harga += jumlah_harga[i];
        pajak = 0.1 * total_harga;
        total_bayar = total_harga + pajak;
        cout << endl;
        cout << "----------------------------------------------------------------------------" << endl;
    }
    
    cout << "Jumlah Bayar \t: Rp." << total_harga << endl;
    cout << "Pajak 10% \t: Rp." << pajak << endl;
    cout << "Total Bayar \t: Rp." << total_bayar;
    
    
    
    return 0;
}

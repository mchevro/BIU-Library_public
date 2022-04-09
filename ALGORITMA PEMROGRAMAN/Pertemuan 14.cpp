/**
 * @file Pertemuan_14.cpp
 * @author Mchevro (mchevro19@gmail.com)
 * @test Running On VSCode & OnlineGDB
 * @version 0.1
 * @date 2022-01-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include <iomanip>
using namespace std;

//Banner Keterangan Harga
void Banner();
//Input Data Dari User Dan Ouput Hasil
void inputAndOuputData();

//MAIN PROGRAM
int main(){
    char opsi;

    do{
        Banner();
        inputAndOuputData();
        cout << "Input Data Lagi[Y/T]? : ";
        cin >> opsi;

        if(opsi == 'Y' || opsi == 'y'){
            system("cls");
            continue;
        }else{
            break;
        }
    }while(true);
    return 0;
}

void Banner(){
    cout << "\tDAFTAR HARGA MOUSE GAMING" << endl;
    cout << "--------------------------------------------" << endl;
    cout << setiosflags(ios::left) << setw(10) << "Kode";
    cout << setiosflags(ios::left) << setw(20) << "Jenis";
    cout << setiosflags(ios::left) << setw(10) << "Harga";
    cout << endl;
    cout << setiosflags(ios::left) << setw(10) << "LG";
    cout << setiosflags(ios::left) << setw(20) << "LOGITEX";
    cout << setiosflags(ios::left) << setw(10) << "50.000";
    cout << endl;
    cout << setiosflags(ios::left) << setw(10) << "MC";
    cout << setiosflags(ios::left) << setw(20) << "MACRO";
    cout << setiosflags(ios::left) << setw(10) << "45.000";
    cout << endl;
    cout << setiosflags(ios::left) << setw(10) << "RX";
    cout << setiosflags(ios::left) << setw(20) << "REXUS";
    cout << setiosflags(ios::left) << setw(10) << "30.000";
    cout << endl;
    cout << "--------------------------------------------" << endl << endl;
    
}

void inputAndOuputData(){
    struct DataUser
    {
        string jenis_barang;
        int harga_barang;
        string kode_barang;
        short jumlah_beli;
        int ppn, subtotal;
    };
    short jumlah_data;
    int total_harga = 0, diskon, grand_total = 0, uang_bayar = 0, uang_kembali;
    char opsi;

    //Dynamic Array Of Struct
    cout << "Jumlah Data : ";
    cin >> jumlah_data;
    DataUser* DynDataUser;
    DynDataUser = new (nothrow) DataUser[jumlah_data];

    //Input NIlai Array Of Struct
    for(int i=0; i<jumlah_data; i++){
        cout << "Data Ke - " << i+1 << endl;
        cout << "Kode Barang : "; cin >> DynDataUser[i].kode_barang;
        cout << "Jumlah Beli : "; cin >> DynDataUser[i].jumlah_beli;

        if (DynDataUser[i].kode_barang == "LG" || DynDataUser[i].kode_barang == "lg")
        {
            DynDataUser[i].jenis_barang = "LOGITEX";
            DynDataUser[i].harga_barang = 50000;
        }else if (DynDataUser[i].kode_barang == "MC" || DynDataUser[i].kode_barang == "mc")
        {
            DynDataUser[i].jenis_barang = "MACRO";
            DynDataUser[i].harga_barang = 45000;
        }else if (DynDataUser[i].kode_barang == "RX" || DynDataUser[i].kode_barang == "rx")
        {
            DynDataUser[i].jenis_barang = "REXUS";
            DynDataUser[i].harga_barang = 30000;
        }
        DynDataUser[i].ppn = DynDataUser[i].harga_barang * 0.1;
        DynDataUser[i].subtotal = (DynDataUser[i].harga_barang * DynDataUser[i].jumlah_beli) + DynDataUser[i].ppn;

        total_harga+= DynDataUser[i].subtotal;
        cout << endl;
    }

    if(total_harga >= 50000){
        diskon = total_harga * 0.05;
    } else if(total_harga >= 100000){
        diskon = total_harga * 0.1;
    }
    grand_total = total_harga - diskon;

    //OUTPUT HASIL
    cout << "\t\t\t STRUK PENJUALAN MOUSE GAMING" << endl;
    cout << "----------------------------------------------------------------------------------------" << endl;
    cout << setiosflags(ios::left) << setw(10) << "No";
    cout << setiosflags(ios::left) << setw(20) << "Jenis";
    cout << setiosflags(ios::left) << setw(15) << "Harga";
    cout << setiosflags(ios::left) << setw(15) << "Pcs";
    cout << setiosflags(ios::left) << setw(15) << "PPN";
    cout << setiosflags(ios::left) << setw(15) << "Subtotal";
    cout << endl;
    cout << "----------------------------------------------------------------------------------------" << endl;

    for(int i=0; i<jumlah_data; i++){
        cout << setiosflags(ios::left) << setw(10) << i+1;
        cout << setiosflags(ios::left) << setw(20) << DynDataUser[i].jenis_barang;
        cout << setiosflags(ios::left) << setw(15) << DynDataUser[i].harga_barang;
        cout << setiosflags(ios::left) << setw(15) << DynDataUser[i].jumlah_beli;
        cout << setiosflags(ios::left) << setw(15) << DynDataUser[i].ppn;
        cout << setiosflags(ios::left) << setw(15) << DynDataUser[i].subtotal;
        cout << endl;
    }
    cout << "----------------------------------------------------------------------------------------" << endl;
    cout << setiosflags(ios::left) << setw(55) << "" << "Total \t\t: " << total_harga << endl;
    cout << setiosflags(ios::left) << setw(55) << "" << "Diskon \t\t: " << diskon << endl;
    cout << setiosflags(ios::left) << setw(55) << "" << "Grand Total \t: " << grand_total << endl;
    cout << setiosflags(ios::left) << setw(55) << "" << "Uang Bayar \t: "; cin >> uang_bayar;
    uang_kembali = uang_bayar - grand_total;
    cout << setiosflags(ios::left) << setw(55) << "" << "Uang Kembali \t: " << uang_kembali;
    cout << endl << endl;

}
/**
 * @file Pertemuan 13.cpp
 * @author Mchevro (mchevro19@gmail.com)
 * @brief Pertemuan 13
 * @version 0.2
 * @date 2021-12-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>

using namespace std;

time_t now = time(0);
tm *ltm = localtime(&now);

class Pegawai{
    private :
        struct structPegawai{
            string nama;
            int honor_total, honor_lembur;
            short jam_kerja;
        };
    public:
        int total_honor_pegawai = 0;
        void dataOuput(short *);
};

int main(){
    short size;
    Pegawai meriangGembira;
    cout << "PT. Meriang Gembira" << endl << endl;
    cout << "Jumlah Pegawai \t: ";
    cin >> size;
    cin.ignore();
    meriangGembira.dataOuput(&size);
    return 0;
}

void Pegawai :: dataOuput(short *size){
    structPegawai* DynStructPegawai;
    DynStructPegawai = new(nothrow) structPegawai[*size];

    cout << "Tanggal Input : " << ltm->tm_mday << "/" << 1 + ltm->tm_mon << "/" << 1900 + ltm->tm_year << endl;
    cout << "--------------------------------------------------------------" << endl;

    //Input Struct Of Array
    for(int i=0; i<*size; i++){
        cout << "Data Ke - " << i+1 << endl;
        cout << "Nama Pegawai : ";
        getline(cin, DynStructPegawai[i].nama);
        cout << "Jam Kerja : ";
        cin >> DynStructPegawai[i].jam_kerja;
        
        //Perhitungan Honor Lembur
        if(DynStructPegawai[i].jam_kerja > 8){
            DynStructPegawai[i].honor_lembur = (DynStructPegawai[i].jam_kerja - 8) * 1500;
            DynStructPegawai[i].honor_total = 25000 + DynStructPegawai[i].honor_lembur;
        }else{
            DynStructPegawai[i].honor_lembur = 0;
            DynStructPegawai[i].honor_total = (25000 / 8) * DynStructPegawai[i].jam_kerja;
        }
        total_honor_pegawai += DynStructPegawai[i].honor_total;
        cout << endl;
        cin.ignore();
    }

    system("cls");
    cout << "PT. Meriang Gembira" << endl;
    cout << "Tanggal \t: " << ltm->tm_mday << "/" << 1 + ltm->tm_mon << "/" << 1900 + ltm->tm_year << endl;
    cout << "=============================================================================" << endl;
    cout << setiosflags(ios::left) << setw(10) << "No";
    cout << setiosflags(ios::left) << setw(25) << "Nama";
    cout << setiosflags(ios::left) << setw(15) << "Jumlah";
    cout << setiosflags(ios::left) << setw(15) << "Honor";
    cout << setiosflags(ios::left) << setw(15) << "Total";
    cout << endl;
    cout << setiosflags(ios::left) << setw(10) << "";
    cout << setiosflags(ios::left) << setw(25) << "Pegawai Honor";
    cout << setiosflags(ios::left) << setw(15) << "Jam Kerja";
    cout << setiosflags(ios::left) << setw(15) << "Lembur";
    cout << setiosflags(ios::left) << setw(15) << "Honor";
    cout << endl;
    cout << "=============================================================================" << endl;

    //Ouput Struct Of Array
    for(int i=0; i<*size; i++){
        cout << setiosflags(ios::left) << setw(10) << i+1;
        cout << setiosflags(ios::left) << setw(25) << DynStructPegawai[i].nama;
        cout << setiosflags(ios::left) << setw(15) << DynStructPegawai[i].jam_kerja;
        cout << setiosflags(ios::left) << setw(15) << DynStructPegawai[i].honor_lembur;
        cout << setiosflags(ios::left) << setw(15) << DynStructPegawai[i].honor_total;
        cout << endl;
    }
    cout << "-----------------------------------------------------------------------------" << endl;
    cout << setw(65) << "Total Honor Pegawai Sebesar : " << total_honor_pegawai;
}

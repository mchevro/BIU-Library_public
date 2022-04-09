//ATUHOR : M.C x AKATSUKI
#include <iostream>
#include <iomanip>
using namespace std;

char Grade(short *); //Prototype function Grade

int main(){
    short size; //Deklarasi Variable Size Untuk Jumlah Array
    cout << "PROGRAM HITUNG NILAI AKHIR" << endl;
    cout << "Jumlah Mahasiswa : "; cin >> size;
    cout << endl;
    
    //Struct Mahasiswa Dengan Array Dan Ukuran Dinamis
    struct{
        string nama;
        char grade;
        short nilai_uts, nilai_uas, nilai_akhir;
    }mahasiswa[size]; 
    
    //FOR Untuk input struct mahasiswa
    for(int i=0; i<size; i++){
        cout << "Mahasiwa Ke - " << i+1 << endl;
        cout << "Nama Mahasiwa \t: "; cin >> mahasiswa[i].nama;
        cout << "Nilai UTS \t: "; cin >> mahasiswa[i].nilai_uts;
        cout << "Nilai UAS \t: "; cin >> mahasiswa[i].nilai_uas;
        
        //Hitung Nilai Murni
        mahasiswa[i].nilai_akhir = (mahasiswa[i].nilai_uts * 0.6) + (mahasiswa[i].nilai_uas * 0.4);
        
        //Return function grade ditampung di struct mahasiswa dengan elemen grade
        mahasiswa[i].grade = Grade(&mahasiswa[i].nilai_akhir);
        cout << endl;
    }
    
    
    //OUTPUT
    cout << "\t\t\t\tDAFTAR NILAI" << endl;
    cout << "------------------------------------------------------------------------------" << endl;
    cout << setiosflags(ios::left) << setw(10) << "No";
    cout << setiosflags(ios::left) << setw(35) << "Nama";
    cout << setiosflags(ios::left) << setw(20) << "Nilai";
    cout << setiosflags(ios::left) << setw(10) << "Grade";
    cout << endl;
    cout << setiosflags(ios::left) << setw(10) << "";
    cout << setiosflags(ios::left) << setw(25) << "Mahasiswa";
    cout << "-------------------------";
    cout << endl;
    cout << setiosflags(ios::left) << setw(35) << "";
    cout << setiosflags(ios::left) << setw(10) << "UTS";
    cout << setiosflags(ios::left) << setw(10) << "UAS";
    cout << setiosflags(ios::left) << setw(10) << "Akhir";
    cout << endl;
    cout << "------------------------------------------------------------------------------" << endl;
    
    //FOR Untuk Output Struct Mahasiswa
    for(int i = 0; i<size; i++){
        cout << setiosflags(ios::left) << setw(10) << i+1;
        cout << setiosflags(ios::left) << setw(25) << mahasiswa[i].nama;
        cout << setiosflags(ios::left) << setw(10) << mahasiswa[i].nilai_uts;
        cout << setiosflags(ios::left) << setw(10) << mahasiswa[i].nilai_uas;
        cout << setiosflags(ios::left) << setw(12) << mahasiswa[i].nilai_akhir;
        cout << setiosflags(ios::left) << setw(10) << mahasiswa[i].grade;
        cout << endl;
    }
    
    return 0;
}

//Function Grade
char Grade(short *nilai_akhirPtr){
    //Logic Pemilihan Grade
    if(*nilai_akhirPtr >= 80){
        return 'A';
    }else if(*nilai_akhirPtr >= 70){
        return 'B';
    }else if(*nilai_akhirPtr >= 56){
        return 'C';
    }else if(*nilai_akhirPtr >= 47){
        return 'D';
    }else{
        return 'E';
    }
}

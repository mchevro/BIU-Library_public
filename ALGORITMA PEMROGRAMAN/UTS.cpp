//AUTHOR : MCHEVRO
#include <iostream>
using namespace std;
int main() {
     string nama_pelanggan, nama_layanan;
     short jumlah_layanan;
     char kode_layanan, question;
     int harga_layanan, total_bayar;
     do {
         cout << "----------------------------------------------\n";
         cout << "\tSALON KECANTIKAN `XYZ`\n";
         cout << "----------------------------------------------\n";
         cout << "Nama Pelanggan \t\t: ";
         cin >> nama_pelanggan;
         cout << "Menu Layanan : C=Creambath | G=Gunting | L=Lulur" << endl;
         cout << "Kode Layanan [C/G/L] \t: ";
         cin >> kode_layanan;
         cout << "Masukan Jumlah Layanan \t: ";
         cin >> jumlah_layanan;
         switch (kode_layanan) {
             case 'c':
             case 'C':
             nama_layanan = "Creambath";
             harga_layanan = 80000;
             total_bayar = harga_layanan * jumlah_layanan;
             break;
             case 'g':
             case 'G':
             nama_layanan = "Gunting";
             harga_layanan = 55000;
             total_bayar = harga_layanan * jumlah_layanan;
             break;
             case 'l':
             case 'L':
             nama_layanan = "Lulur";
             harga_layanan = 100000;
             total_bayar = harga_layanan * jumlah_layanan;
             break;
             default:
             cout << "Kode Layanan Tidak Ada!";
             break;
         }
         cout << "\n\n----------------------------------------------\n";
         cout << "\tSTRUK LAYANAN SALON\n";
         cout << "----------------------------------------------\n";
         cout << "Nama Pelanggan \t: " << nama_pelanggan << endl;
         cout << "Nama Layanan \t: " << nama_layanan << endl;
         cout << "Harga \t\t: " << harga_layanan << endl;
         cout << "Total Bayar \t: " << total_bayar << endl;
         cout << "----------------------------------------------\n";
         cout << "Input Lagi [Y/T]? : ";
         cin >> question;
         if (question == 'y' || question == 'Y') {
            cout << endl;
            continue;
         }else{
            break;
         }
     } while (true);
     return 0;
}

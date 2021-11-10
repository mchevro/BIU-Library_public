/*
AUTHOR : MCHEVRO
*/
#include <iostream>

using namespace std;

int main() {
    string nama_penumpang, tujuan, nama_bus, hadiah;
    char kode_bus;
    int harga_tiket, total_harga, total_bayar, pajak, uang_bayar, uang_kembali;
    short jumlah_beli;
    cout << "Nama Penumpang \t\t: ";
    cin >> nama_penumpang;
    cout << "Kode Bus [R/S/B] \t: ";
    cin >> kode_bus;
    cout << "Tujuan Bus \t\t: ";
    cin >> tujuan;

    switch (kode_bus) {
    case 'r':
    case 'R':
        nama_bus = "Rosalia";
        if (tujuan == "SBY" || tujuan == "sby") {
            harga_tiket = 300000;
        } else if (tujuan == "MLG" || tujuan == "mlg") {
            harga_tiket = 400000;
        } else {
            cout << "TUJUAN TIDAK TERDAFTAR!";
        }
        break;

    case 's':
    case 'S':
        nama_bus = "Sinar Jaya";
        if (tujuan == "SLO" || tujuan == "slo") {
            harga_tiket = 200000;
        } else if (tujuan == "TGL" || tujuan == "tgl") {
            harga_tiket = 250000;
        } else {
            cout << "TUJUAN TIDAK TERDAFTAR!";
        }
        break;

    case 'h':
    case 'H':
        nama_bus = "Hiba Utama";
        if (tujuan == "LMP" || tujuan == "lmp") {
            harga_tiket = 350000;
        } else if (tujuan == "JGY" || tujuan == "jgy") {
            harga_tiket = 400000;
        } else {
            cout << "TUJUAN TIDAK TERDAFTAR!";
        }
        break;
    default:
        cout << "KODE BUS TIDAK ADA!";
        break;
    }

    cout << "\n*******************AGEN PESAWAT SELALU SELAMAT TOUR*************************\n";
    cout << "Nama Bus \t: " << nama_bus << endl;
    cout << "Tujuan \t\t: " << tujuan << endl;
    cout << "Harga Tiket \t: " << harga_tiket << endl;
    cout << "Jumlah Beli \t: ";
    cin >> jumlah_beli;

    total_harga = jumlah_beli * harga_tiket;
    pajak = 0.05 * total_harga;
    total_bayar = total_harga + pajak;

    if (jumlah_beli >= 3) {
        hadiah = "Jam Tangan";
        cout << "****************************************************************************\n";
        cout << "Total Harga \t: " << total_harga << endl;
        cout << "Hadiah \t\t: " << hadiah << endl;
        cout << "PPN \t\t: " << pajak << endl;
        cout << "Total Bayar \t: " << total_bayar << endl;
        cout << "****************************************************************************\n";
        cout << "Uang Bayar \t: ";
        cin >> uang_bayar;
        uang_kembali = uang_bayar - total_bayar;
        cout << "Uang Kembali \t: " << uang_kembali << endl;
        cout << "******************************Terima Kasih***********************************\n";
    } else {
        cout << "****************************************************************************\n";
        cout << "Total Harga \t: " << total_harga << endl;
        cout << "PPN \t\t: " << pajak << endl;
        cout << "Total Bayar \t: " << total_bayar << endl;
        cout << "****************************************************************************\n";
        cout << "Uang Bayar \t: ";
        cin >> uang_bayar;
        uang_kembali = uang_bayar - total_bayar;
        cout << "Uang Kembali \t: " << uang_kembali << endl;
        cout << "******************************Terima Kasih***********************************\n";
    }

    return 0;
}

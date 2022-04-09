/*
AUTHOR : MCHEVRO
*/
#include <iostream>

using namespace std;

int main() {
    int honor, honor_lembur, net_honor, golongan, j_kerja, t_jabatan, t_pendi;
    string nama, pendi;

    cout << "Program Hitung Honor Karyawan Kontrak PT. DINGIN DAMAI" << endl << endl;
    cout << "Nama Karyawan : ";
    cin >> nama;
    cout << "Golongan : ";
    cin >> golongan;
    cout << "Pendidikan (SMU/D3/S1) : ";
    cin >> pendi;
    cout << "Jumlah Jam Kerja : ";
    cin >> j_kerja;

    honor = 300000; // Gaji Karyawan Kontrak Perbulan Rp 300.000

    //Logic Pemilihan Golongan
    if (golongan == 1) {
        // hasil 0.05 dari 5/100 = 0.05
        t_jabatan = 0.05 * honor;
        net_honor = t_jabatan + honor;
    } else if (golongan == 2) {
        // hasil 0.1 dari 10/100 = 0.1
        t_jabatan = 0.1 * honor;
        net_honor = t_jabatan + honor;
    } else if (golongan == 3) {
        // hasil 0.15 dari 15/100 = 0.15
        t_jabatan = 0.15 * honor;
        net_honor = t_jabatan + honor;
    };

    //Logic Pemilihan Pendidikan
    if (pendi == "SMU") {
        // hasil 0.025 dari 2.5/100 = 0.025
        t_pendi = 0.025 * net_honor;
        net_honor = t_pendi + net_honor;
    } else if (pendi == "D3") {
        // hasil 0.05 dari 5/100 = 0.05
        t_pendi = 0.05 * net_honor;
        net_honor = t_pendi + net_honor;
    } else if (pendi == "S1") {
        // hasil 0.075 dari 7.5/100 = 0.075
        t_pendi = 0.075 * net_honor;
        net_honor = t_pendi + net_honor;
    }

    //Logic Honor Lembur
    if (j_kerja > 8) {
        honor_lembur = j_kerja * 2500;
        // HASIL AKHIR DENGAN JAM LEMBUR
        cout << endl << "Karyawan yang bernama : " << nama << endl << endl;
        cout << "=====HONOR YANG DITERIMA=====" << endl;
        cout << "Honor Tetap : Rp " << honor << endl;
        cout << "Tunjangan Jabatan : Rp " << t_jabatan << endl;
        cout << "Tunjangan Pendidikan  : Rp " << t_pendi << endl;
        cout << "Honor Lembur : Rp " << honor_lembur << endl;
        cout << "Honor Yang Diterima : Rp " << net_honor + honor_lembur << endl;
    } else {
        // HASIL AKHIR TANPA JAM LEMBUR
        cout << "Karyawan yang bernama : " << nama << endl << endl;
        cout << "=====HONOR YANG DITERIMA=====" << endl;
        cout << "Honor Tetap : Rp " << honor << endl;
        cout << "Tunjangan Jabatan : Rp " << t_jabatan << endl;
        cout << "Tunjangan Pendidikan  : Rp " << t_pendi << endl;
        cout << "Honor Yang Diterima : Rp " << net_honor << endl;
    };

    return 0;
}

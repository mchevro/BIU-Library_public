#include <iostream>

using namespace std;
int main() {
    string nama_siswa;
    int nilai_keaktifan, nilai_tugas, nilai_ujian, murni_keaktifan, murni_tugas, murni_ujian, hasil_akhir;

    cout << "PROGRAM HITUNG NILAI AKHIR" << endl;
    cout << "===================" << endl;

    cout << "Nama Siswa : "; //Input Nama Siswa
    cin >> nama_siswa;

    cout << "Nilai Keaktifan : "; //Input Nilai Keaktifan
    cin >> nilai_keaktifan;

    cout << "Nilai Tugas : "; //Input Nilai Tugas
    cin >> nilai_tugas;

    cout << "Nilai Ujian : "; //Input Nilai Ujian
    cin >> nilai_ujian;

    cout << endl;

    murni_keaktifan = 20 * nilai_keaktifan / 100; //Nilai keaktifan * 20
    murni_tugas = 30 * nilai_tugas / 100; //Nilai tugas * 30
    murni_ujian = 50 * nilai_ujian / 100; //Nilai ujian * 50
    hasil_akhir = murni_keaktifan + murni_tugas + murni_ujian; //Hitung Hasil Akhir

    cout << "Siswa yang bernama : " << nama_siswa << endl;
    cout << "Dengan Nilai Persentasi Yang Dihasilkan" << endl;
    cout << "Nilai Keaktifan * 20% : " << murni_keaktifan << endl;
    cout << "Nilai Tugas * 30% : " << murni_tugas << endl;
    cout << "Nilai Ujian *50% : " << murni_ujian << endl;

    cout << "Jadi Siswa yang bernama " << nama_siswa << " memperoleh nilai akhir sebesar " << hasil_akhir;

    cout << endl << endl;
}

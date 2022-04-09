//AUTHOR : MCHEVRO
//MESSAGE : JANGAN HAPUS AUTHOR LAH. BUAT INI JUGA SPEND WAKTU ASW
//REFRENSI : https://www.journaldev.com/36852/string-uppercase-lowercase-c-plus-plus

#include <iostream>
#include <cstring>
#define mchevro void
using namespace std;

//Global Deklasrasi Variable
char kode_menu_paket, kode_level_paket, ulang_program;
string nama_menu_paket;
int harga_menu_paket, harga_upgrade_level, jumlah_beli, sub_total_harga, diskon, total_bayar, uang_bayar, uang_kembali;

//Function Hitung Sub Total
mchevro funcSubtotal() {
	sub_total_harga = (harga_menu_paket + harga_upgrade_level) * jumlah_beli;
	cout << "Sub Total \t: " << sub_total_harga << endl;
}

//Function Hitung Diskon
mchevro funcDiskon() {
	if (jumlah_beli >= 6) {
		diskon = 0.1 * sub_total_harga;
	}
	else if (jumlah_beli >= 3) {
		diskon = 0.02 * sub_total_harga;
	}
	cout << "Diskon \t\t: " << diskon << endl;
}

//Function Hitung Total Bayar
mchevro funcTotalBayar() {
	total_bayar = sub_total_harga - diskon;
	cout << "Total Bayar \t: " << total_bayar << endl;
}

//Function Hitung Uang Kembalian
mchevro funcUangKembali() {
	cout << "Uang Bayar \t: ";
	cin >> uang_bayar;
	uang_kembali = uang_bayar - total_bayar;
	cout << "Uang Kembali \t: " << uang_kembali << endl << endl;
}

//Function Menampilkan Hasil Akhir
mchevro funcOuput() {
	cout << "Menu \t\t: " << nama_menu_paket << endl;
	cout << "Harga \t\t: " << harga_menu_paket << endl;
	cout << "Tambah Level \t: " << harga_upgrade_level << endl;
	cout << "Jumlah Beli \t: ";
	cin >> jumlah_beli;
	funcSubtotal();
	funcDiskon();
	funcTotalBayar();
	funcUangKembali();
}

//Main Program
int main() {
	do
	{
		//CHAR TO STRING UPPER
		char header[] = "AYAM GEPREK MAHENDRA CHEVRO";
		for (int x = 0; x < strlen(header); x++)
			toupper(header[x]);


		//HEADER
		cout << "====================================================\n";
		cout << "\t" << header << endl;
		cout << "====================================================\n";

		cout << "Pilih Paket [A/B/C] \t: ";
		cin >> kode_menu_paket;
		cout << "Menu Level : " << endl;
		cout << "[1] Level 1" << endl;
		cout << "[2] Level 2" << endl;
		cout << "[3] Level 3" << endl;
		cout << "[4] Level 4" << endl;
		cout << "[5] Level 5" << endl;
		cout << "Pilih Level \t: ";
		cin >> kode_level_paket;

		//Pilih Menut Paket
		if (kode_menu_paket == 'A' || kode_menu_paket == 'a')
		{
			nama_menu_paket = "Ayam Geprek + Keju Mozarella";
			harga_menu_paket = 28000;
		}
		else if (kode_menu_paket == 'B' || kode_menu_paket == 'b') {
			nama_menu_paket = "Ayam Geprek + Sambal Matah";
			harga_menu_paket = 25000;
		}
		else if (kode_menu_paket == 'C' || kode_menu_paket == 'c') {
			nama_menu_paket = "Ayam Geprek + Sambal Terasi";
			harga_menu_paket = 22000;
		}
		else
		{
			cout << "Kode Salah";
		}

		//Pilih Upgrade Level
		switch (kode_level_paket)
		{
		case '1':
			harga_upgrade_level = 1000;
			break;
		case '2':
			harga_upgrade_level = 2000;
			break;
		case '3':
			harga_upgrade_level = 3000;
			break;
		case '4':
			harga_upgrade_level = 4000;
			break;
		case '5':
			harga_upgrade_level = 5000;
			break;
		default:
			break;
		}

		cout << "====================================================\n";
		funcOuput(); //Function Ouput Hasil Akhir

		//Kondisi Apakah Ulang Program
		cout << "Beli Lagi [Y/T] ? : ";
		cin >> ulang_program;
		if (ulang_program == 'Y' || ulang_program == 'y') {
			system("CLS");
			continue;
		}
		else
		{
			break;
		}

	} while (true);


	return 0;
}

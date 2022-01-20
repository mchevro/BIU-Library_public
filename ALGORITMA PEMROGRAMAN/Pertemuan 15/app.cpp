/**
 * @file app.cpp
 * @author Mchevro (mchevro@gmail.com)
 * @brief Implementasi Algoritma Kode Kaisar ROT3
 * @version 0.1
 * @date 2022-01-04
 * @link 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include "KodeKaisar.h" // File Header Berisi Function Encrypt Dan Decrypt Algoritma KODE KAISAR ROT3
using namespace std;

int main(){
    char opsi, question;
    string plain_teks, cipher_teks;
    do{
        cout << "-----------------------------" << endl;
        cout << "KRIPTOGRAFI KODE KAISAR ROT3" << endl;
        cout << "-----------------------------" << endl;
        cout << "[1]. Enkripsi Pesan" << endl;
        cout << "[2]. Dekripsi Pesan" << endl;
        cout << "-----------------------------" << endl;
        cout << "Opsi : "; cin >> opsi;

        switch (opsi)
        {
        case '1':
            cout << "Plain Teks : "; cin >> plain_teks;
            cout << "Cipher Teks : " << Encrypt(plain_teks);
            cout << endl << endl;
            break;
        
        case '2':
            cout << "Cipher Teks : "; cin >> cipher_teks;
            cout << "Plain Teks : " << Decrypt(cipher_teks);
            cout << endl << endl;
            break;

        default:
            cout << "Opsi Salah!" << endl;
            break;
        }

        cout << "Ulang Program [Y/T]? : "; cin >> question;
        if (question == 'Y' || question == 'y'){
            system("cls");
            continue;
        }else{
            break;
        }
        
    }while(true);
    return 0;
}
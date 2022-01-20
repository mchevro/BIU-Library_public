/**
 * @file app.cpp
 * @author Mchevro (mchevro@gmail.com)
 * @brief Implementasi Algoritma Kode Kaisar ROT3
 * @version 0.1
 * @date 2022-01-04
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <iomanip>
#include "KodeKaisar.h" //File Header Berisi Function Encrypt Dan Decrypt Algoritma KODE KAISAR ROT3
using namespace std;

int main(){
    char opsi, question;
    string plain_teks, cipher_teks;
    short size;

    /**
     * @brief Skema 
     * Account.username = {"mchevro", "naruto"};
     * Account.password = {"xxxxxxx", "xxxxxx"};
     * 
     */
    struct Account
    {
        string username, password;
    };

    do{
        cout << "-----------------------------" << endl;
        cout << "KRIPTOGRAFI KODE KAISAR ROT3" << endl;
        cout << "-----------------------------" << endl;
        cout << "[0]. Jumlah Record " << endl;
        cout << "[1]. Register Data" << endl;
        cout << "[2]. Lihat Database (Enkripsi)" << endl;
        cout << "[3]. Lihat Database (Dekripsi)" << endl;
        cout << "-----------------------------" << endl;
        cout << "Opsi : "; cin >> opsi;
        cout << endl;

        switch (opsi)
        {
        case '0':
            //Struct Of Array
            cout << "Jumlah Record : "; cin >> size;
            Account* DynAccount;
            DynAccount = new (nothrow) Account[size];
            system("cls");
            break;
        case '1':
            for(int i=0; i<size; i++){
                cout << "Akun Ke - " << i+1 << endl;
                cout << "Username : "; cin >> DynAccount[i].username;
                cout << "Password : "; cin >> DynAccount[i].password;
                DynAccount[i].password = Encrypt(DynAccount[i].password); //Enkripsi Password
                cout << endl;
            }
            system("cls");
            break;
        
        case '2':
            system("cls");
            cout << "=========================================" << endl;
            cout << "\tDATABASE FACEBOOK MOD" << endl;
            cout << "=========================================" << endl;
            cout << setiosflags(ios::left) << setw(10) << "No";
            cout << setiosflags(ios::left) << setw(15) << "Username";
            cout << setiosflags(ios::left) << setw(15) << "Password";
            cout << endl;
            cout << "=========================================" << endl;

            for(int i=0; i<size; i++){
                cout << setiosflags(ios::left) << setw(10) << i+1;
                cout << setiosflags(ios::left) << setw(15) << DynAccount[i].username;
                cout << setiosflags(ios::left) << setw(15) << DynAccount[i].password;
                cout << endl;
                cout << "-----------------------------------------" << endl;
            }
            break;

        case '3':
            system("cls");
            cout << "=========================================" << endl;
            cout << "\tDATABASE FACEBOOK MOD" << endl;
            cout << "=========================================" << endl;
            cout << setiosflags(ios::left) << setw(10) << "No";
            cout << setiosflags(ios::left) << setw(15) << "Username";
            cout << setiosflags(ios::left) << setw(15) << "Password";
            cout << endl;
            cout << "=========================================" << endl;

            for(int i=0; i<size; i++){
                cout << setiosflags(ios::left) << setw(10) << i+1;
                cout << setiosflags(ios::left) << setw(15) << DynAccount[i].username;
                cout << setiosflags(ios::left) << setw(15) << Decrypt(DynAccount[i].password);
                cout << endl;
                cout << "-----------------------------------------" << endl;
            }
            break;

        default:
            cout << "Opsi Salah!" << endl;
            break;
        }
        cout << endl;
        
    }while(true);
    return 0;
}
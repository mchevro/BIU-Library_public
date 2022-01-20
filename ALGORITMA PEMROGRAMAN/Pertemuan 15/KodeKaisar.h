/**
 * @file KodeKaisar.h
 * @author Mchevro (mchevro@gmail.com)
 * @brief Function Enkripsi Dan Dekripsi
 * @version 0.1
 * @date 2022-01-20
 * @ref Dony Ariyus "Pengantar Ilmu Kriptografi"
 * 
 * @copyright Copyright (c) 2022
 * 
 */
using namespace std;

/**
 * @brief Function Encrypt beguna untuk melakukan perubahan 
 * Plain Teks ke Cipher Teks dengan pergeseran sebanyak 3 huruf. 
 * Setelah itu akan di return hasil Encrypt menggunakan tipe data string.
 * 
 * @return string 
 */
string Encrypt(string plain_teks){
    /**
     * @brief Varibale c berfungsi untuk mengconvert huruf menjadi
     * kode ascii dengan tipe data int.
     * 
     */
    int c;
    string cipher_teks;
    for(int i=0; i < plain_teks.length(); i++){
        /**
         * @brief Rumus untuk melakukan Enkripsi ROT3 adalah c = c + 3; 
         * 
         * Ex : 
         * c = 97 (a); 
         * c = c + 3 = 100 (d);
         * 
         * cipher_teks = d;
         * 
         * dst..
         */
        c = tolower(plain_teks[i]);
        c = c + 3;
        if(c == 35){ 
            c = c - 3; //RollBack Ke Spasi
        }else if(c > 122){
            c = c - 26;
        }
        cipher_teks += char(c);
    }
    return cipher_teks;
}

/**
 * @brief Function Decrypt berguna untuk melakukan perubahan
 * Cipher Teks ke Plain Teks dengan pergeseran sebanyak 3 huruf.
 * Setelah itu akan di return hasil Decrypt menggunakan tipe data string.
 * 
 * @return string 
 */
string Decrypt(string cipher_teks){
    /**
     * @brief Varibale c berfungsi untuk mengconvert huruf menjadi
     * kode ascii dengan tipe data int.
     * 
     */
    int c;
    string plain_teks;
    for(int i=0; i<cipher_teks.length(); i++){
        /**
         * @brief Rumus untuk melakukan Dekripsi ROT3 adalah c = c - 3; 
         * 
         * Ex : 
         * c = 97 (a); 
         * c = c - 3 = 94 (UKNOWN);
         * 
         * Jika c < 97, Maka
         * c = c + 26 = 120 (x);
         * 
         * plain_teks = x;
         * 
         * dst..
         */
        c = tolower(cipher_teks[i]);
        c = c - 3;
        if(c == 29){
            c = c + 3; //RollBack Ke Spasi
        }else if(c < 97){
            c = c + 26;
        }
        plain_teks += char(c);
    }
    return plain_teks;
}
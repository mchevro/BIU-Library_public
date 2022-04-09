## Distribusi Frekuensi

### Langkah-Langkah
- Urutkan data (terkecil sampai terbesar)
- Membuat kategori atau kelas
- Melakukan penturusan atau tabulasi, memasukan nilai ke dalam interval

## Rumus
### Mencari Berapa Kelas
K = Kelas <br>
N = Jumlah Data <br>
![image](https://user-images.githubusercontent.com/67460437/140759445-5c9e4e93-303e-4456-9f77-bb93e11c4dc2.png)
![image](https://user-images.githubusercontent.com/67460437/140758691-4f0ae11c-1cc3-4a3d-b4c8-2368e9323f04.png)

Note : Kelas tidak boleh dibulatkan, berapapun angka dibelakangnya harus mengikuti angka didepan

### Menentukan Interval Kelas
![image](https://user-images.githubusercontent.com/67460437/140759938-7fa76aea-11be-444e-92a3-cfe9e06b7122.png)
![image](https://user-images.githubusercontent.com/67460437/140763021-692378a6-838f-46a4-b64b-20d75e2b08cc.png)


### Membuat Tabel Distribusi Frekuensi
![image](https://user-images.githubusercontent.com/67460437/140767659-474b5997-c09c-4516-b45a-5ac0461fe341.png)


Ket : <br>
- Menentukan interval harus dimulai dari data terkecil. Contoh 50+5 = 55. nilai 50 didapat dari nilai data terkecil dan 5 didapat dari hasil Interval Kelas yaitu 4.833 atau dibulatkan jadi 5. <br>
- Mencari Kolom Fi dengan rumus =FREQUENCY(Data_Array,Bins_array) <br>
Note : Hasil Penjumlahan Kolom Fi harus berjumlah sama dengan data. Contoh disini hasil jumlah kolom frekuensi adalah 40, karena data berjumlah 40

### Mencari FK >
![image](https://user-images.githubusercontent.com/67460437/140770358-5bcc9e2f-3426-4101-882b-e4ec356455d6.png)

Ket : Mencari FK > dimulai dari nilai Fi kelas pertama sampai terakhir, untuk kelas selanjutnya FK kelas pertama ditambah Fi kelas kedua, dst. Contoh Kelas pertama FK > 3, 3+1=4, 4+0=4, 4+14=18, 18+18=36, 36+4=40. Hasil Akhir sama dengan jumlah data.

### Mencari FK <
![image](https://user-images.githubusercontent.com/67460437/140775501-8f0644dc-e747-4f0c-b764-5b26e43a5fa7.png)

Ket : Mencari FK < dimulai dari nilai Fi kelas terakhir sampai kelas pertama, untuk kelas selanjutnya FK kelas terakhir ditambah Fi kelas kelima, dst. Contoh Kelas terakhir FK < 4, 4+18=22, 22+14=36, 36+0=36, 36+1=37, 37+3=40. Hasil akhir sama dengan jumlah data.

### Mencari FR >				
![image](https://user-images.githubusercontent.com/67460437/140779630-30489043-d885-4f21-8d04-dbcd62a6f28c.png)
![image](https://user-images.githubusercontent.com/67460437/140779990-638d7901-c3d1-4d50-bcbe-3453ede0b170.png)

### Mencari FR < 		
![image](https://user-images.githubusercontent.com/67460437/140780368-b0369ba1-0798-4ec4-8482-0304067fa4e0.png)
![image](https://user-images.githubusercontent.com/67460437/140780288-c92eafb9-3bfd-42c5-88e2-ca2b2c710f2e.png)

### Mencari LCL
![image](https://user-images.githubusercontent.com/67460437/140834800-9f9741d0-4192-45af-96eb-dd079f06dc30.png)

Ket : LCL adalah nilai interval terkecil setiap kelasnya.

### Mencari UCL
![image](https://user-images.githubusercontent.com/67460437/140834966-b3adf6c3-4206-4058-afc3-cb7f80ab0f5b.png)

Ket : UCL adalah nilai interval terbesar setiap kelasnya.

### Mencari LCB									
![image](https://user-images.githubusercontent.com/67460437/140835993-16268e74-abdd-4ebf-bd15-c1cedc9156a0.png)
![image](https://user-images.githubusercontent.com/67460437/140835972-95a4844d-9b47-4f5f-b64f-54c0717a2b44.png)

### Mencari UCB
![image](https://user-images.githubusercontent.com/67460437/140836434-e523d5dd-44e0-454b-ba4a-f7694da23d19.png)
![image](https://user-images.githubusercontent.com/67460437/140836474-666ed41f-9768-45c2-8165-25112596311b.png)


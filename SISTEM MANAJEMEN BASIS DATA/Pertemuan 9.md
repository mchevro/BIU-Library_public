# Normalisasi
Normalisasi merupakan sebuah teknik dalam logical desain sebuah basis data yang mengelompokkan atribut dari suatu relasi sehingga membentuk struktur relasi yang baik (tanpa redudansi).

# Proses Normalisasi
1. Termukan entitas-entitas utama dalam model data.
2. Temukan hubungan antara setiap entitas.
3. Tentukan atribut yang dimiliki masing-masing entitas.

# Langkah-Langkah Normalisasi
## Bentuk Normal Pertama (1NF)
Sebuah model data dikatakan memenuhi bentuk normal pertama apabila setiap atribut yang dimilikinya memiliki satu dan hanya satu nilai. Apabila ada atribut yang memiliki nilai lebih dari satu, atribut tersebut adalah kandidat untuk menjadi entitas tersendiri.

### Studi Kasus
---
#### Sebelum
Diagram

![image](https://user-images.githubusercontent.com/67460437/151117156-61e4e4eb-7225-4582-8fd2-6a66a66df4d0.png)

Table

![image](https://user-images.githubusercontent.com/67460437/151118006-1f1b3933-2cb9-4eb7-90e3-db552c7ef77b.png)

Atribute *nama_kelas* mencamtukan kelas-kelas di mana tugas tersebut berlaku. Apabila pendaftar untuk sebuah matakuliah melebihi kapasistas ruangan yang dimiliki fakultas, kebijakan yang umum diambil kepala program studi adalah membagi kegiatan perkuliah untuk matakuliah tersebut menjadi beberapa kelas. Karenanya atribut ini rentan memiliki nilai lebih dari satu, dan lebih sesuai menjadi entitas baru atau atribut dari entitas lain.

Untuk itu kita akan membuat entitas baru yaitu dengan nama *after_Kelas*, dimana sebgaian atribut berasal dari entitas *before_Matakuliah* yang secara logis lebih sesuai menjadi atribut entias ini. Sementara itu entitas *before_Matakuliah* akan menjandi bernilai tunngal di semua atributnya selain *nama_kelas*.

#### Relasi Antar-Entitas Dan Identifier
Setelah kita memisahkan atribut yang memiliki nilai jamak menjadi entitas baru, sekarang kita akan menghubungkan dua entitas antara *before_matakuliah* dengan *after_Kelas*. Satu tugas dapat diberikan pada beberapa kelas yang berbeda, dalam pemodelan data ini berarti antara entitas *before_Manatkuliah* dan entitas *after_Kelas* terdapat relasi 1:N, untuk nilai N lebih dari satu. Cara paling intuitif untuk menghubungkan kedua entitas tersebut adalah menyertakan **identitas** suatu entitas sebagai atribut entitas lain. 

**identitas** sebuah entitas haruslah unik untuk menghidarkan ambiguitas saat akan merujuk pada suatu objek khusus dari entitas tersebut. Entitas *before_Matakuliah akan mengganti nama menjadi *after_Matakuliah* dan untuk nama atribut **identitas** pada *after_Matakuliah* adalah *matakuliah_id*. Entitas *after_Kelas* memiliki nama atribut **identitas** *kode_kelas* dan *nama_matakuliah*.


#### Sesudah
Diagram

![image](https://user-images.githubusercontent.com/67460437/151688895-ce8378df-0790-4b32-8855-f7497c52f8e6.png)

Table

![image](https://user-images.githubusercontent.com/67460437/151688977-11865c5f-19dd-4872-83ff-ccc730b73bbe.png)


Sejauh ini tidak ada atribut yang memiliki nilai lebih dari satu, sehingga rasanya cukup aman mengatakan bahwa model ini memenuhi bentuk normal pertama (1NF).

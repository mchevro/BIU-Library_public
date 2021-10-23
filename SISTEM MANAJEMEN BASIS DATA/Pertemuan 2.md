## Operasi Dan Manfaat Basis Data

### Operasi Dasar Basis Data
- Pembuatan basis data baru (**create database**), identik dengan pembuatan lemari arsip yang baru.
- Penghapusan basis data (**drop database**), identik dengan perusakan lemari arsip, sekaligus beserta isinya.
- Pembuatan table baru ke suatu basis data (**create table**), yang identik dengan penambahan map arsip baru ke sebuah lemari arsip
yang telah ada.
- Penghapusan table dari suatu basis data (**drop table**), identik dengan perusakan map arsip lama yang ada di sebuah lemari arsip.
- Penambahan / pengisian data baru di sebuah basis data (**insert**), identik dengan penambahan lembaran arsip ke sebuah map arsip.
- Pengambilan data dari sebuah table (**retrieve / search**), identik dengan pencarian lembaran arsip dalam sebuah map arsip.
- Pengubahan data dalam sebuah table (**update**), identik dengan perbaikan isi lembaran arsip yang ada disebuah map arsip.
- penghapusan data dari sebuah table (**delete**), identik dengan penghapusan sebuah lembaran arsip yang ada di sebuah map arsip.

### Manfaat Basis Data
- Tidak ada redudansi data, database dapat membantu meminimalkan redudansi data. Redundansi adalah munculnya banyak data dalam file yang berbeda.
- Integritas data terjaga, database memastikan integritas data yang tinggi, di mana database akan memastikan keakuratan, aksesbilitas, konsistensi, dan kualitas tinggi pada suatu data.
- Menjaga independensi data, database menjaga independensi data di mana orang lain tidak dapat mengubah data, meski data bisa diakses.
- Kemudahan berbagi data, menggunakan perangkat lunak database bisa digunakan untuk berbagi data atau informasi dengan sesama pengguna lainnya.
- Pemeliharaan keamanan data, database memastikan keamanan informasi dan data, di mana kamu dapat memasukkan kode akses untuk data tertentu yang tidak dapat diakses.
- Kemudahan akses data, dengan adanya database kamu dapat mempermudah dalam mengakses dan memperoleh data karena semua data telah tertata dengan baik.

### Fungsi Basis Data
- Mengelompokkan data dan informasi sehingga lebih mudah dimengerti.
- Mencegah terjadinya duplikat data maupun inkonsistensi data.
- Mempermudah proses penyimpanan, akses, pembaharuan, dan menghapus data.
- Menjaga kualitas data dan informasi yang diakses sesuai dengan yang diinput.
- Membantu proses penyimpanan data yang besar.
- Membantu meningkatkan kinerja aplikasi yang membutuhkan penyimpanan data.

### Kerugian Basis Data
- Diperlukan hardware (perangkat keras tambahan) CPU yang lebih kuat, terminal yang lebih banyak, alat komunikasi.
- Biaya performance yang lebih besar Listrik, personil yang lebih tinggi klasifikasinya, biaya telekomunikasi antar lokasi.
- Rawanya keberhasilan operasi, Gangguan listrik, dan komunikasi
- Sistem kelihatan lebih kompleks, Banyaknya aspek yang harus diperhatikan.

### Abstraksi Data
1) Level Pandangan Pemakai (View Level)
Level abstraksi tertinggi yang mengambarkan hanya satu bagian dari keseluruhan database, pada level ini hanya sebagian saja yang dilihat dan dipakai. Hal ini disebabkan beberapa pemakai database tidak membutuhkan semua isi database.

2) Level Konseptual
Level abstraksi data level lebih tinggi yang menggambarkan data apa (what) yang disimpan dalam basis data, dan hubungan relasi yang terjadi antar data. Level ini digunakan oleh database administrator, yang memutuskan informasi apa yang akan dipelihara dalam satu database.

3) Level Phisik
Level abstraksi paling rendah, menggambarkan bagaimana (how) data disimpan dalam kondisi sebenarnya. Level ini digunakan oleh programmer, yang digunakan untuk melakukan pemrograman dengan mengunakan database dan DBMS tertentu sesuai dengan kebutuhan end-user.

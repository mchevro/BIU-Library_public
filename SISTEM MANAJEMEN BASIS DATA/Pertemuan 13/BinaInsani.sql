/*
AUTHOR : CHEVROOO
JADIKAN REFERENSI ATAU MAU DIUBAH SOURCE CODE INI MENJADI LEBIH BAIK SILAHKAN, TINGGAL DI PULL REQUEST NANTI GW ACC. 
KALO GK ADA GITHUB PM GW AJA NANTI GW UPLOAD KESINI DAN GW TAMBAHIN NAMA AUTHORNYA SELOW.

NOTE : JANGAN HAPUS NAMA AUTHOR, HARGAIN PEMBUAT BJIRR, MALU SC ORANG NGAKUNYA BUAT SENDIRI :)
*/

/*BUAT DATABASE*/
CREATE DATABASE BinaInsani;

/*GUNAKAN DATABASE BinaInsani*/
use BinaInsani;

/*BUAT TABLE Jurusan
Skema : 
	(pk) kode_jur : 31,
	nama_jur : Teknik Informatika,
	jenjang : S1,
	nama_kajur : Rully Pramudita, S.T., M.Kom
*/
CREATE TABLE Jurusan (
	kode_jur TINYINT PRIMARY KEY,
	nama_jur VARCHAR(30) NOT NULL,
	jenjang VARCHAR(3) NOT NULL,
	nama_kajur VARCHAR(50) NOT NULL
);

/*BUAT TABLE Mahasiswa
Skema : 
	(pk) nim : 2021310101,
	nama_m : Mahendra Chevro Susanto,
	tpt_lhr_m : Bekasi,
	tgl_lhr_m : 2003-04-30,
	j_kelamin : Laki-Laki,
	alm_m : Jln. Tambun Selatan,
	kota_m : Bekasi,
	agama_m : Islam,
	telpon_m : 081381662912,
	(fk) kode_jur : 31
*/
CREATE TABLE Mahasiswa (
	nim VARCHAR(12) PRIMARY KEY,
	nama_m VARCHAR(30) not null,
	tpt_lhr_m VARCHAR(20),
	tgl_lhr_m DATE,
	j_kelamin VARCHAR(15),
	alm_m VARCHAR(50),
	kota_m VARCHAR(20),
	agama_m VARCHAR(20),
	telpon_m VARCHAR(14),
	kode_jur  TINYINT NOT NULL FOREIGN KEY REFERENCES Jurusan(kode_jur) 
);

/*BUAT TABLE Matakuliah
Skema :
	(pk) kdmk : 21FISMBD
	nama_mk : Sistem Manajemen Basis Data,
	sks : 3
	semester : 1
*/
CREATE TABLE Matakuliah (
	kdmk VARCHAR(15) PRIMARY KEY,
	nama_mk VARCHAR(35) NOT NULL,
	sks TINYINT NOT NULL,
	semester TINYINT NOT NULL
);

/*BUAT TABLE Dosen
Skema : 
	(pk) nid : 105240,
	nama_d : Rully Pramudita, S.T., M.Kom,
	pendidikan_d : Magister
	agama_d : Islam,
	alamat_d : Jln. Soedirman,
	kota_d : Jakarta,
	telpon_d : 082218441010
*/
CREATE TABLE Dosen (
	nid VARCHAR(6) PRIMARY KEY,
	nama_d VARCHAR(50) NOT NULL,
	pendidikan_d VARCHAR(15) NOT NULL,
	agama_d VARCHAR(20),
	alamat_d VARCHAR(50),
	kota_d VARCHAR(20),
	telpon_d VARCHAR(14) NOT NULL
);

/*BUAT TABLE Nilai
Skema : 
	(pk) nim : 2021310101,
	(pk) kdmk : 21FISMBD,
	(pk) smt : 1,
	(fk) nid : 105240,
	nilai_absen : 80,
	nilai_tugas : 90,
	nilai_uts : 78,
	nilai_uas : 99
*/
CREATE TABLE Nilai (
	nim VARCHAR(12) NOT NULL FOREIGN KEY REFERENCES Mahasiswa(nim),
	kdmk VARCHAR(15) NOT NULL FOREIGN KEY REFERENCES Matakuliah(kdmk),
	smt TINYINT NOT NULL,
	nid VARCHAR(6) NOT NULL FOREIGN KEY REFERENCES Dosen(nid),
	nilai_absen INT,
	nilai_tugas INT,
	nilai_uts INT,
	nilai_uas INT
	PRIMARY KEY(nim, kdmk, smt)

);

/******************************************************************************************************************
  _____ _   _  _____ ______ _____ _______    _____       _______       
 |_   _| \ | |/ ____|  ____|  __ \__   __|  |  __ \   /\|__   __|/\    
   | | |  \| | (___ | |__  | |__) | | |     | |  | | /  \  | |  /  \   
   | | | . ` |\___ \|  __| |  _  /  | |     | |  | |/ /\ \ | | / /\ \  
  _| |_| |\  |____) | |____| | \ \  | |     | |__| / ____ \| |/ ____ \ 
 |_____|_| \_|_____/|______|_|  \_\ |_|     |_____/_/    \_\_/_/    \_\

*******************************************************************************************************************/
--INSERT DATA Jurusan
INSERT INTO Jurusan(kode_jur, nama_jur, jenjang, nama_kajur) 
VALUES (31, 'Teknik Informatika', 'S1', 'Rully Pramudita, S.T., M.Kom');
INSERT INTO Jurusan(kode_jur, nama_jur, jenjang, nama_kajur) 
VALUES (32, 'Sistem Informasi', 'S1', 'Hanif Aulawi, S.E., M.M.');

--INSERT DATA Mahasiswa
INSERT INTO Mahasiswa(nim, nama_m, tpt_lhr_m, tgl_lhr_m, j_kelamin, alm_m, kota_m, agama_m, telpon_m, kode_jur) VALUES ('2021320100', 'Keane Kennedy', 'Bekasi', '20010220', 'Laki-Laki', 'Jln. Mawar Blok E4 No 0', 'Bekasi', 'Islam', '08138166220', 32);
INSERT INTO Mahasiswa(nim, nama_m, tpt_lhr_m, tgl_lhr_m, j_kelamin, alm_m, kota_m, agama_m, telpon_m, kode_jur) VALUES ('2021310101', 'Leilani Gates', 'Bogor', '20040522', 'Perempuan', 'Jln. HJ Nawir Blok K2 No 0', 'Depok', 'Kristen', '08138166221', 31);
INSERT INTO Mahasiswa(nim, nama_m, tpt_lhr_m, tgl_lhr_m, j_kelamin, alm_m, kota_m, agama_m, telpon_m, kode_jur) VALUES ('2021320102', 'Harrison Grimes', 'Bandung', '20030523', 'Laki-Laki', 'Jln. Soedirman Blok C6 No 0', 'Bintaro', 'Budha', '08138166222', 32);
INSERT INTO Mahasiswa(nim, nama_m, tpt_lhr_m, tgl_lhr_m, j_kelamin, alm_m, kota_m, agama_m, telpon_m, kode_jur) VALUES ('2021310103', 'Tara Sharp', 'Yogyakarta', '20020512', 'Perempuan', 'Jln. Soekarno Blok Z1 No 0', 'Jakarta Selatan', 'Katolik', '08138166223', 31);
INSERT INTO Mahasiswa(nim, nama_m, tpt_lhr_m, tgl_lhr_m, j_kelamin, alm_m, kota_m, agama_m, telpon_m, kode_jur) VALUES ('2021320104', 'Clare Myers', 'Jakarta', '20010502', 'Laki-Laki', 'Jln. B.J Habibie Blok Y9 No 0', 'Jakarta', 'Hindu', '08138166224', 32);
INSERT INTO Mahasiswa(nim, nama_m, tpt_lhr_m, tgl_lhr_m, j_kelamin, alm_m, kota_m, agama_m, telpon_m, kode_jur) VALUES ('2021310105', 'Velma Silva', 'Depok', '20010220', 'Perempuan', 'Jln. Mawar Blok E4 No 1', 'Bekasi', 'Islam', '08138166225', 31);
INSERT INTO Mahasiswa(nim, nama_m, tpt_lhr_m, tgl_lhr_m, j_kelamin, alm_m, kota_m, agama_m, telpon_m, kode_jur) VALUES ('2021320106', 'Ignacia Avila', 'Jakarta Selatan', '20040522', 'Laki-Laki', 'Jln. HJ Nawir Blok K2 No 1', 'Depok', 'Kristen', '08138166226', 32);
INSERT INTO Mahasiswa(nim, nama_m, tpt_lhr_m, tgl_lhr_m, j_kelamin, alm_m, kota_m, agama_m, telpon_m, kode_jur) VALUES ('2021310107', 'Hedley Ferguson', 'Salatiga', '20030523', 'Perempuan', 'Jln. Soedirman Blok C6 No 1', 'Bintaro', 'Budha', '08138166227', 31);
INSERT INTO Mahasiswa(nim, nama_m, tpt_lhr_m, tgl_lhr_m, j_kelamin, alm_m, kota_m, agama_m, telpon_m, kode_jur) VALUES ('2021320108', 'Harlan Ayers', 'Sumatera', '20020512', 'Laki-Laki', 'Jln. Soekarno Blok Z1 No 1', 'Jakarta Selatan', 'Katolik', '08138166228', 32);
INSERT INTO Mahasiswa(nim, nama_m, tpt_lhr_m, tgl_lhr_m, j_kelamin, alm_m, kota_m, agama_m, telpon_m, kode_jur) VALUES ('2021310109', 'Erin Harding', 'Kalimantan', '20010502', 'Perempuan', 'Jln. B.J Habibie Blok Y9 No 1', 'Jakarta', 'Hindu', '08138166229', 31);
INSERT INTO Mahasiswa(nim, nama_m, tpt_lhr_m, tgl_lhr_m, j_kelamin, alm_m, kota_m, agama_m, telpon_m, kode_jur) VALUES ('20213201010', 'Cassady Hebert', 'Bekasi', '20010220', 'Laki-Laki', 'Jln. Mawar Blok E4 No 2', 'Bekasi', 'Islam', '081381662210', 32);
INSERT INTO Mahasiswa(nim, nama_m, tpt_lhr_m, tgl_lhr_m, j_kelamin, alm_m, kota_m, agama_m, telpon_m, kode_jur) VALUES ('20213101011', 'Carolyn Griffith', 'Bogor', '20040522', 'Perempuan', 'Jln. HJ Nawir Blok K2 No 2', 'Depok', 'Kristen', '081381662211', 31);
INSERT INTO Mahasiswa(nim, nama_m, tpt_lhr_m, tgl_lhr_m, j_kelamin, alm_m, kota_m, agama_m, telpon_m, kode_jur) VALUES ('20213201012', 'Carl Leach', 'Bandung', '20030523', 'Laki-Laki', 'Jln. Soedirman Blok C6 No 2', 'Bintaro', 'Budha', '081381662212', 32);
INSERT INTO Mahasiswa(nim, nama_m, tpt_lhr_m, tgl_lhr_m, j_kelamin, alm_m, kota_m, agama_m, telpon_m, kode_jur) VALUES ('20213101013', 'Martina Ruiz', 'Yogyakarta', '20020512', 'Perempuan', 'Jln. Soekarno Blok Z1 No 2', 'Jakarta Selatan', 'Katolik', '081381662213', 31);
INSERT INTO Mahasiswa(nim, nama_m, tpt_lhr_m, tgl_lhr_m, j_kelamin, alm_m, kota_m, agama_m, telpon_m, kode_jur) VALUES ('20213201014', 'Odette Salas', 'Jakarta', '20010502', 'Laki-Laki', 'Jln. B.J Habibie Blok Y9 No 2', 'Jakarta', 'Hindu', '081381662214', 32);
INSERT INTO Mahasiswa(nim, nama_m, tpt_lhr_m, tgl_lhr_m, j_kelamin, alm_m, kota_m, agama_m, telpon_m, kode_jur) VALUES ('20213101015', 'Mahendra Chevro', 'Depok', '20010220', 'Laki-Laki', 'Jln. Mawar Blok E4 No 3', 'Bekasi', 'Islam', '081381662215', 31);
INSERT INTO Mahasiswa(nim, nama_m, tpt_lhr_m, tgl_lhr_m, j_kelamin, alm_m, kota_m, agama_m, telpon_m, kode_jur) VALUES ('20213201016', 'Darryl Summers', 'Jakarta Selatan', '20040522', 'Laki-Laki', 'Jln. HJ Nawir Blok K2 No 3', 'Depok', 'Kristen', '081381662216', 32);
INSERT INTO Mahasiswa(nim, nama_m, tpt_lhr_m, tgl_lhr_m, j_kelamin, alm_m, kota_m, agama_m, telpon_m, kode_jur) VALUES ('20213101017', 'Wade Riley', 'Salatiga', '20030523', 'Perempuan', 'Jln. Soedirman Blok C6 No 3', 'Bintaro', 'Budha', '081381662217', 31);
INSERT INTO Mahasiswa(nim, nama_m, tpt_lhr_m, tgl_lhr_m, j_kelamin, alm_m, kota_m, agama_m, telpon_m, kode_jur) VALUES ('20213201018', 'Stephen Ramos', 'Sumatera', '20020512', 'Laki-Laki', 'Jln. Soekarno Blok Z1 No 3', 'Jakarta Selatan', 'Katolik', '081381662218', 32);
INSERT INTO Mahasiswa(nim, nama_m, tpt_lhr_m, tgl_lhr_m, j_kelamin, alm_m, kota_m, agama_m, telpon_m, kode_jur) VALUES ('20213101019', 'Ulysses Herring', 'Kalimantan', '20010502', 'Perempuan', 'Jln. B.J Habibie Blok Y9 No 3', 'Jakarta', 'Hindu', '081381662219', 31);
INSERT INTO Mahasiswa(nim, nama_m, tpt_lhr_m, tgl_lhr_m, j_kelamin, alm_m, kota_m, agama_m, telpon_m, kode_jur) VALUES ('20213201020', 'Aiko Best', 'Bekasi', '20010220', 'Laki-Laki', 'Jln. Mawar Blok E4 No 4', 'Bekasi', 'Islam', '081381662220', 32);
INSERT INTO Mahasiswa(nim, nama_m, tpt_lhr_m, tgl_lhr_m, j_kelamin, alm_m, kota_m, agama_m, telpon_m, kode_jur) VALUES ('20213101021', 'Hamilton O donnell', 'Bogor', '20040522', 'Perempuan', 'Jln. HJ Nawir Blok K2 No 4', 'Depok', 'Kristen', '081381662221', 31);
INSERT INTO Mahasiswa(nim, nama_m, tpt_lhr_m, tgl_lhr_m, j_kelamin, alm_m, kota_m, agama_m, telpon_m, kode_jur) VALUES ('20213201022', 'Sage Dean', 'Bandung', '20030523', 'Laki-Laki', 'Jln. Soedirman Blok C6 No 4', 'Bintaro', 'Budha', '081381662222', 32);
INSERT INTO Mahasiswa(nim, nama_m, tpt_lhr_m, tgl_lhr_m, j_kelamin, alm_m, kota_m, agama_m, telpon_m, kode_jur) VALUES ('20213101023', 'Illiana Cherry', 'Yogyakarta', '20020512', 'Perempuan', 'Jln. Soekarno Blok Z1 No 4', 'Jakarta Selatan', 'Katolik', '081381662223', 31);
INSERT INTO Mahasiswa(nim, nama_m, tpt_lhr_m, tgl_lhr_m, j_kelamin, alm_m, kota_m, agama_m, telpon_m, kode_jur) VALUES ('20213201024', 'Jermaine Rosales', 'Jakarta', '20010502', 'Laki-Laki', 'Jln. B.J Habibie Blok Y9 No 4', 'Jakarta', 'Hindu', '081381662224', 32);
INSERT INTO Mahasiswa(nim, nama_m, tpt_lhr_m, tgl_lhr_m, j_kelamin, alm_m, kota_m, agama_m, telpon_m, kode_jur) VALUES ('20213101025', 'Anthony Mayer', 'Depok', '20010220', 'Perempuan', 'Jln. Mawar Blok E4 No 5', 'Bekasi', 'Islam', '081381662225', 31);
INSERT INTO Mahasiswa(nim, nama_m, tpt_lhr_m, tgl_lhr_m, j_kelamin, alm_m, kota_m, agama_m, telpon_m, kode_jur) VALUES ('20213201026', 'Kibo Ramos', 'Jakarta Selatan', '20040522', 'Laki-Laki', 'Jln. HJ Nawir Blok K2 No 5', 'Depok', 'Kristen', '081381662226', 32);
INSERT INTO Mahasiswa(nim, nama_m, tpt_lhr_m, tgl_lhr_m, j_kelamin, alm_m, kota_m, agama_m, telpon_m, kode_jur) VALUES ('20213101027', 'Alan Martin', 'Salatiga', '20030523', 'Perempuan', 'Jln. Soedirman Blok C6 No 5', 'Bintaro', 'Budha', '081381662227', 31);
INSERT INTO Mahasiswa(nim, nama_m, tpt_lhr_m, tgl_lhr_m, j_kelamin, alm_m, kota_m, agama_m, telpon_m, kode_jur) VALUES ('20213201028', 'Tarik Bates', 'Sumatera', '20020512', 'Laki-Laki', 'Jln. Soekarno Blok Z1 No 5', 'Jakarta Selatan', 'Katolik', '081381662228', 32);
INSERT INTO Mahasiswa(nim, nama_m, tpt_lhr_m, tgl_lhr_m, j_kelamin, alm_m, kota_m, agama_m, telpon_m, kode_jur) VALUES ('20213101029', 'Myles Garza', 'Kalimantan', '20010502', 'Perempuan', 'Jln. B.J Habibie Blok Y9 No 5', 'Jakarta', 'Hindu', '081381662229', 31);
INSERT INTO Mahasiswa(nim, nama_m, tpt_lhr_m, tgl_lhr_m, j_kelamin, alm_m, kota_m, agama_m, telpon_m, kode_jur) VALUES ('20213201030', 'Hayden Weber', 'Bekasi', '20010220', 'Laki-Laki', 'Jln. Mawar Blok E4 No 6', 'Bekasi', 'Islam', '081381662230', 32);
INSERT INTO Mahasiswa(nim, nama_m, tpt_lhr_m, tgl_lhr_m, j_kelamin, alm_m, kota_m, agama_m, telpon_m, kode_jur) VALUES ('20213101031', 'Bryar Hester', 'Bogor', '20040522', 'Perempuan', 'Jln. HJ Nawir Blok K2 No 6', 'Depok', 'Kristen', '081381662231', 31);
INSERT INTO Mahasiswa(nim, nama_m, tpt_lhr_m, tgl_lhr_m, j_kelamin, alm_m, kota_m, agama_m, telpon_m, kode_jur) VALUES ('20213201032', 'Ryan Gonzales', 'Bandung', '20030523', 'Laki-Laki', 'Jln. Soedirman Blok C6 No 6', 'Bintaro', 'Budha', '081381662232', 32);
INSERT INTO Mahasiswa(nim, nama_m, tpt_lhr_m, tgl_lhr_m, j_kelamin, alm_m, kota_m, agama_m, telpon_m, kode_jur) VALUES ('20213101033', 'Demetria Johns', 'Yogyakarta', '20020512', 'Perempuan', 'Jln. Soekarno Blok Z1 No 6', 'Jakarta Selatan', 'Katolik', '081381662233', 31);
INSERT INTO Mahasiswa(nim, nama_m, tpt_lhr_m, tgl_lhr_m, j_kelamin, alm_m, kota_m, agama_m, telpon_m, kode_jur) VALUES ('20213201034', 'Judah Cherry', 'Jakarta', '20010502', 'Laki-Laki', 'Jln. B.J Habibie Blok Y9 No 6', 'Jakarta', 'Hindu', '081381662234', 32);
INSERT INTO Mahasiswa(nim, nama_m, tpt_lhr_m, tgl_lhr_m, j_kelamin, alm_m, kota_m, agama_m, telpon_m, kode_jur) VALUES ('20213101035', 'Yael Rodgers', 'Depok', '20010220', 'Perempuan', 'Jln. Mawar Blok E4 No 7', 'Bekasi', 'Islam', '081381662235', 31);
INSERT INTO Mahasiswa(nim, nama_m, tpt_lhr_m, tgl_lhr_m, j_kelamin, alm_m, kota_m, agama_m, telpon_m, kode_jur) VALUES ('20213201036', 'Mark Randall', 'Jakarta Selatan', '20040522', 'Laki-Laki', 'Jln. HJ Nawir Blok K2 No 7', 'Depok', 'Kristen', '081381662236', 32);
INSERT INTO Mahasiswa(nim, nama_m, tpt_lhr_m, tgl_lhr_m, j_kelamin, alm_m, kota_m, agama_m, telpon_m, kode_jur) VALUES ('20213101037', 'Cain Cain', 'Salatiga', '20030523', 'Perempuan', 'Jln. Soedirman Blok C6 No 7', 'Bintaro', 'Budha', '081381662237', 31);
INSERT INTO Mahasiswa(nim, nama_m, tpt_lhr_m, tgl_lhr_m, j_kelamin, alm_m, kota_m, agama_m, telpon_m, kode_jur) VALUES ('20213201038', 'Peter Cardenas', 'Sumatera', '20020512', 'Laki-Laki', 'Jln. Soekarno Blok Z1 No 7', 'Jakarta Selatan', 'Katolik', '081381662238', 32);
INSERT INTO Mahasiswa(nim, nama_m, tpt_lhr_m, tgl_lhr_m, j_kelamin, alm_m, kota_m, agama_m, telpon_m, kode_jur) VALUES ('20213101039', 'Micah Wilkinson', 'Kalimantan', '20010502', 'Perempuan', 'Jln. B.J Habibie Blok Y9 No 7', 'Jakarta', 'Hindu', '081381662239', 31);
INSERT INTO Mahasiswa(nim, nama_m, tpt_lhr_m, tgl_lhr_m, j_kelamin, alm_m, kota_m, agama_m, telpon_m, kode_jur) VALUES ('20213201040', 'India Hewitt', 'Bekasi', '20010220', 'Laki-Laki', 'Jln. Mawar Blok E4 No 8', 'Bekasi', 'Islam', '081381662240', 32);
INSERT INTO Mahasiswa(nim, nama_m, tpt_lhr_m, tgl_lhr_m, j_kelamin, alm_m, kota_m, agama_m, telpon_m, kode_jur) VALUES ('20213101041', 'Vivien Castillo', 'Bogor', '20040522', 'Perempuan', 'Jln. HJ Nawir Blok K2 No 8', 'Depok', 'Kristen', '081381662241', 31);
INSERT INTO Mahasiswa(nim, nama_m, tpt_lhr_m, tgl_lhr_m, j_kelamin, alm_m, kota_m, agama_m, telpon_m, kode_jur) VALUES ('20213201042', 'Murphy Battle', 'Bandung', '20030523', 'Laki-Laki', 'Jln. Soedirman Blok C6 No 8', 'Bintaro', 'Budha', '081381662242', 32);
INSERT INTO Mahasiswa(nim, nama_m, tpt_lhr_m, tgl_lhr_m, j_kelamin, alm_m, kota_m, agama_m, telpon_m, kode_jur) VALUES ('20213101043', 'Jemima Lynn', 'Yogyakarta', '20020512', 'Perempuan', 'Jln. Soekarno Blok Z1 No 8', 'Jakarta Selatan', 'Katolik', '081381662243', 31);
INSERT INTO Mahasiswa(nim, nama_m, tpt_lhr_m, tgl_lhr_m, j_kelamin, alm_m, kota_m, agama_m, telpon_m, kode_jur) VALUES ('20213201044', 'Roth Wolf', 'Jakarta', '20010502', 'Laki-Laki', 'Jln. B.J Habibie Blok Y9 No 8', 'Jakarta', 'Hindu', '081381662244', 32);
INSERT INTO Mahasiswa(nim, nama_m, tpt_lhr_m, tgl_lhr_m, j_kelamin, alm_m, kota_m, agama_m, telpon_m, kode_jur) VALUES ('20213101045', 'Wynne Joseph', 'Depok', '20010220', 'Perempuan', 'Jln. Mawar Blok E4 No 9', 'Bekasi', 'Islam', '081381662245', 31);
INSERT INTO Mahasiswa(nim, nama_m, tpt_lhr_m, tgl_lhr_m, j_kelamin, alm_m, kota_m, agama_m, telpon_m, kode_jur) VALUES ('20213201046', 'Holmes Campbell', 'Jakarta Selatan', '20040522', 'Laki-Laki', 'Jln. HJ Nawir Blok K2 No 9', 'Depok', 'Kristen', '081381662246', 32);
INSERT INTO Mahasiswa(nim, nama_m, tpt_lhr_m, tgl_lhr_m, j_kelamin, alm_m, kota_m, agama_m, telpon_m, kode_jur) VALUES ('20213101047', 'Aquila Lowe', 'Salatiga', '20030523', 'Perempuan', 'Jln. Soedirman Blok C6 No 9', 'Bintaro', 'Budha', '081381662247', 31);
INSERT INTO Mahasiswa(nim, nama_m, tpt_lhr_m, tgl_lhr_m, j_kelamin, alm_m, kota_m, agama_m, telpon_m, kode_jur) VALUES ('20213201048', 'Mira Brown', 'Sumatera', '20020512', 'Laki-Laki', 'Jln. Soekarno Blok Z1 No 9', 'Jakarta Selatan', 'Katolik', '081381662248', 32);
INSERT INTO Mahasiswa(nim, nama_m, tpt_lhr_m, tgl_lhr_m, j_kelamin, alm_m, kota_m, agama_m, telpon_m, kode_jur) VALUES ('20213101049', 'Craig Frost', 'Kalimantan', '20010502', 'Perempuan', 'Jln. B.J Habibie Blok Y9 No 9', 'Jakarta', 'Hindu', '081381662249', 31);

--INSERT DATA Matakuliah
INSERT INTO Matakuliah(kdmk, nama_mk, sks, semester) 
VALUES ('21FISMBD', 'Sistem Manajemen Basis Data', 3, 1);

--INSERT DATA Dosen
INSERT INTO Dosen(nid, nama_d, pendidikan_d, agama_d, alamat_d, kota_d, telpon_d) 
VALUES ('105240', 'Rully Pramudita, S.T., M.Kom', 'Magister', 'Islam', 'Jln. Soedirman', 'Jakarta', '082218441010');

--INSERT DATA Nilai
INSERT INTO Nilai (nim, kdmk, smt, nid, nilai_absen, nilai_tugas, nilai_uts, nilai_uas) VALUES ('2021320100', '21FISMBD', 1, '105240', 74,73,88,65);
INSERT INTO Nilai (nim, kdmk, smt, nid, nilai_absen, nilai_tugas, nilai_uts, nilai_uas) VALUES ('2021310101', '21FISMBD', 1, '105240', 17,34,22,14);
INSERT INTO Nilai (nim, kdmk, smt, nid, nilai_absen, nilai_tugas, nilai_uts, nilai_uas) VALUES ('2021320102', '21FISMBD', 1, '105240', 28,43,60,82);
INSERT INTO Nilai (nim, kdmk, smt, nid, nilai_absen, nilai_tugas, nilai_uts, nilai_uas) VALUES ('2021310103', '21FISMBD', 1, '105240', 26,52,23,70);
INSERT INTO Nilai (nim, kdmk, smt, nid, nilai_absen, nilai_tugas, nilai_uts, nilai_uas) VALUES ('2021320104', '21FISMBD', 1, '105240', 24,14,52,41);
INSERT INTO Nilai (nim, kdmk, smt, nid, nilai_absen, nilai_tugas, nilai_uts, nilai_uas) VALUES ('2021310105', '21FISMBD', 1, '105240', 26,78,60,56);
INSERT INTO Nilai (nim, kdmk, smt, nid, nilai_absen, nilai_tugas, nilai_uts, nilai_uas) VALUES ('2021320106', '21FISMBD', 1, '105240', 47,3,10,87);
INSERT INTO Nilai (nim, kdmk, smt, nid, nilai_absen, nilai_tugas, nilai_uts, nilai_uas) VALUES ('2021310107', '21FISMBD', 1, '105240', 13,41,66,43);
INSERT INTO Nilai (nim, kdmk, smt, nid, nilai_absen, nilai_tugas, nilai_uts, nilai_uas) VALUES ('2021320108', '21FISMBD', 1, '105240', 70,63,37,43);
INSERT INTO Nilai (nim, kdmk, smt, nid, nilai_absen, nilai_tugas, nilai_uts, nilai_uas) VALUES ('2021310109', '21FISMBD', 1, '105240', 2,45,35,24);
INSERT INTO Nilai (nim, kdmk, smt, nid, nilai_absen, nilai_tugas, nilai_uts, nilai_uas) VALUES ('20213201010', '21FISMBD', 1, '105240', 33,64,74,44);
INSERT INTO Nilai (nim, kdmk, smt, nid, nilai_absen, nilai_tugas, nilai_uts, nilai_uas) VALUES ('20213101011', '21FISMBD', 1, '105240', 68,22,22,37);
INSERT INTO Nilai (nim, kdmk, smt, nid, nilai_absen, nilai_tugas, nilai_uts, nilai_uas) VALUES ('20213201012', '21FISMBD', 1, '105240', 51,78,75,89);
INSERT INTO Nilai (nim, kdmk, smt, nid, nilai_absen, nilai_tugas, nilai_uts, nilai_uas) VALUES ('20213101013', '21FISMBD', 1, '105240', 80,28,84,12);
INSERT INTO Nilai (nim, kdmk, smt, nid, nilai_absen, nilai_tugas, nilai_uts, nilai_uas) VALUES ('20213201014', '21FISMBD', 1, '105240', 24,4,47,54);
INSERT INTO Nilai (nim, kdmk, smt, nid, nilai_absen, nilai_tugas, nilai_uts, nilai_uas) VALUES ('20213101015', '21FISMBD', 1, '105240', 77,69,15,57);
INSERT INTO Nilai (nim, kdmk, smt, nid, nilai_absen, nilai_tugas, nilai_uts, nilai_uas) VALUES ('20213201016', '21FISMBD', 1, '105240', 61,89,26,74);
INSERT INTO Nilai (nim, kdmk, smt, nid, nilai_absen, nilai_tugas, nilai_uts, nilai_uas) VALUES ('20213101017', '21FISMBD', 1, '105240', 37,34,13,16);
INSERT INTO Nilai (nim, kdmk, smt, nid, nilai_absen, nilai_tugas, nilai_uts, nilai_uas) VALUES ('20213201018', '21FISMBD', 1, '105240', 53,82,17,8);
INSERT INTO Nilai (nim, kdmk, smt, nid, nilai_absen, nilai_tugas, nilai_uts, nilai_uas) VALUES ('20213101019', '21FISMBD', 1, '105240', 47,75,80,32);
INSERT INTO Nilai (nim, kdmk, smt, nid, nilai_absen, nilai_tugas, nilai_uts, nilai_uas) VALUES ('20213201020', '21FISMBD', 1, '105240', 72,86,70,84);
INSERT INTO Nilai (nim, kdmk, smt, nid, nilai_absen, nilai_tugas, nilai_uts, nilai_uas) VALUES ('20213101021', '21FISMBD', 1, '105240', 9,64,12,33);
INSERT INTO Nilai (nim, kdmk, smt, nid, nilai_absen, nilai_tugas, nilai_uts, nilai_uas) VALUES ('20213201022', '21FISMBD', 1, '105240', 88,51,50,59);
INSERT INTO Nilai (nim, kdmk, smt, nid, nilai_absen, nilai_tugas, nilai_uts, nilai_uas) VALUES ('20213101023', '21FISMBD', 1, '105240', 70,84,78,69);
INSERT INTO Nilai (nim, kdmk, smt, nid, nilai_absen, nilai_tugas, nilai_uts, nilai_uas) VALUES ('20213201024', '21FISMBD', 1, '105240', 63,11,39,49);
INSERT INTO Nilai (nim, kdmk, smt, nid, nilai_absen, nilai_tugas, nilai_uts, nilai_uas) VALUES ('20213101025', '21FISMBD', 1, '105240', 81,55,29,64);
INSERT INTO Nilai (nim, kdmk, smt, nid, nilai_absen, nilai_tugas, nilai_uts, nilai_uas) VALUES ('20213201026', '21FISMBD', 1, '105240', 63,23,74,78);
INSERT INTO Nilai (nim, kdmk, smt, nid, nilai_absen, nilai_tugas, nilai_uts, nilai_uas) VALUES ('20213101027', '21FISMBD', 1, '105240', 14,85,55,34);
INSERT INTO Nilai (nim, kdmk, smt, nid, nilai_absen, nilai_tugas, nilai_uts, nilai_uas) VALUES ('20213201028', '21FISMBD', 1, '105240', 38,6,49,88);
INSERT INTO Nilai (nim, kdmk, smt, nid, nilai_absen, nilai_tugas, nilai_uts, nilai_uas) VALUES ('20213101029', '21FISMBD', 1, '105240', 56,51,58,62);
INSERT INTO Nilai (nim, kdmk, smt, nid, nilai_absen, nilai_tugas, nilai_uts, nilai_uas) VALUES ('20213201030', '21FISMBD', 1, '105240', 60,28,46,44);
INSERT INTO Nilai (nim, kdmk, smt, nid, nilai_absen, nilai_tugas, nilai_uts, nilai_uas) VALUES ('20213101031', '21FISMBD', 1, '105240', 73,78,8,62);
INSERT INTO Nilai (nim, kdmk, smt, nid, nilai_absen, nilai_tugas, nilai_uts, nilai_uas) VALUES ('20213201032', '21FISMBD', 1, '105240', 73,84,79,75);
INSERT INTO Nilai (nim, kdmk, smt, nid, nilai_absen, nilai_tugas, nilai_uts, nilai_uas) VALUES ('20213101033', '21FISMBD', 1, '105240', 49,33,67,35);
INSERT INTO Nilai (nim, kdmk, smt, nid, nilai_absen, nilai_tugas, nilai_uts, nilai_uas) VALUES ('20213201034', '21FISMBD', 1, '105240', 60,40,83,4);
INSERT INTO Nilai (nim, kdmk, smt, nid, nilai_absen, nilai_tugas, nilai_uts, nilai_uas) VALUES ('20213101035', '21FISMBD', 1, '105240', 58,59,40,77);
INSERT INTO Nilai (nim, kdmk, smt, nid, nilai_absen, nilai_tugas, nilai_uts, nilai_uas) VALUES ('20213201036', '21FISMBD', 1, '105240', 74,20,37,1);
INSERT INTO Nilai (nim, kdmk, smt, nid, nilai_absen, nilai_tugas, nilai_uts, nilai_uas) VALUES ('20213101037', '21FISMBD', 1, '105240', 17,42,2,52);
INSERT INTO Nilai (nim, kdmk, smt, nid, nilai_absen, nilai_tugas, nilai_uts, nilai_uas) VALUES ('20213201038', '21FISMBD', 1, '105240', 32,61,67,81);
INSERT INTO Nilai (nim, kdmk, smt, nid, nilai_absen, nilai_tugas, nilai_uts, nilai_uas) VALUES ('20213101039', '21FISMBD', 1, '105240', 53,82,35,5);
INSERT INTO Nilai (nim, kdmk, smt, nid, nilai_absen, nilai_tugas, nilai_uts, nilai_uas) VALUES ('20213201040', '21FISMBD', 1, '105240', 70,87,88,76);
INSERT INTO Nilai (nim, kdmk, smt, nid, nilai_absen, nilai_tugas, nilai_uts, nilai_uas) VALUES ('20213101041', '21FISMBD', 1, '105240', 64,87,50,35);
INSERT INTO Nilai (nim, kdmk, smt, nid, nilai_absen, nilai_tugas, nilai_uts, nilai_uas) VALUES ('20213201042', '21FISMBD', 1, '105240', 82,66,57,41);
INSERT INTO Nilai (nim, kdmk, smt, nid, nilai_absen, nilai_tugas, nilai_uts, nilai_uas) VALUES ('20213101043', '21FISMBD', 1, '105240', 30,74,72,36);
INSERT INTO Nilai (nim, kdmk, smt, nid, nilai_absen, nilai_tugas, nilai_uts, nilai_uas) VALUES ('20213201044', '21FISMBD', 1, '105240', 15,24,5,8);
INSERT INTO Nilai (nim, kdmk, smt, nid, nilai_absen, nilai_tugas, nilai_uts, nilai_uas) VALUES ('20213101045', '21FISMBD', 1, '105240', 68,31,65,56);
INSERT INTO Nilai (nim, kdmk, smt, nid, nilai_absen, nilai_tugas, nilai_uts, nilai_uas) VALUES ('20213201046', '21FISMBD', 1, '105240', 69,14,48,55);
INSERT INTO Nilai (nim, kdmk, smt, nid, nilai_absen, nilai_tugas, nilai_uts, nilai_uas) VALUES ('20213101047', '21FISMBD', 1, '105240', 75,74,83,81);
INSERT INTO Nilai (nim, kdmk, smt, nid, nilai_absen, nilai_tugas, nilai_uts, nilai_uas) VALUES ('20213201048', '21FISMBD', 1, '105240', 66,64,78,71);
INSERT INTO Nilai (nim, kdmk, smt, nid, nilai_absen, nilai_tugas, nilai_uts, nilai_uas) VALUES ('20213101049', '21FISMBD', 1, '105240', 31,57,64,62);

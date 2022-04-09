## Peta Karnaugh/ K-MAP
### Fungsi K-MAP
Karnaugh Map adalah suatu teknik penyederhanaan fungsi logika dengan cara pemetaan.

### Langkah Dalam Menggunakan K-MAP
1. Konversikan persamaan Boolean yang diketahui ke dalam bentuk persamaan SOP (Sum of Product). Gunakan tabel kebenaraan untuk membantu.
2. Gambarkan K-map dengan rumus jumlah sel = 2^n (n= jumlah variable).
3. Isi sel K-map dengan logic output "1" dari tabel kebenaran pada langkah 1.
4. Kelompokkan sel-sel belogik "1" yang berdekatan dengan aturan : 
    - Hanya yang berdekatan secara vertikal atau horizontal yang boleh dikelompokan
    - Jumlah sel yang boleh dalam satu kelompok adalah 2, 4, 8, 16, 32, 64 dst
    - Jika tidak ada kelompok, artinya sel tersebut berdiri sendiri, dan tetap dimasukan ke persamaan SOP baru
5. Buat persamaan SOP baru sesuai dengan hasil pengelompokkan sel.
6. Buat rangkaian logika sederhana dari persamaan SOP pada langkah 5.
<p align="center">
	<img src="https://user-images.githubusercontent.com/67460437/144635273-298f64b0-bc2e-41d0-8e47-4de97deb1f0d.png" width=700 />
</p>

### Refrence :
https://media.neliti.com/media/publications/161825-ID-none.pdf

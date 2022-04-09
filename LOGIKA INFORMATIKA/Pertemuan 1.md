# Daftar Isi
- [Himpunan](#himpunan)
  * [Definisi](#definisi)
  * [Simbol-Simbol Baku](#simbol-simbol-baku)
  * [Penyajian Himpunan](#penyajian-himpunan)
    + [Enumerasi](#enumerasi)
      - [Contoh 1.1](#contoh-11)
      - [Contoh 1.2](#contoh-12)
      - [Contoh 1.3](#contoh-13)
      - [Contoh 1.4](#contoh-14)
    + [Notasi](#notasi)
      - [Contoh 1.5](#contoh-15)
    + [Diagram Venn](#diagram-venn)
      - [Contoh 1.6](#contoh-16)
  * [Refrensi](#refrensi)

<small><i><a href='http://ecotrust-canada.github.io/markdown-toc/'>Table of contents generated with markdown-toc</a></i></small>


# Himpunan
## Definisi
Himpunan (set) adalah kumpulan objek-objek yang *berbeda*. Objek yang terdapat di dalam himpunan disebut **elemen**, **unsur**, atau **anggota**. Setiap elemen dalam himpunan tidak boleh sama!.

## Simbol-Simbol Baku
- P = Himpunan bilangan bulat positif = { 1,2,3,... }
- N = Himpunan bilangan asli = { 1,2,... }
- Z = Himpunan bilangan bulat = { ...,-2,-1,0,1,2,... }
- Q = Himpunan bilangan rasional
- R = Himpunan bilangan riil
- C = Himpunan bilangan kompleks


## Penyajian Himpunan 
### Enumerasi
Jika sebuah himpunan terbatas dan tidak terlalu besar, kita bisa menyajikan himpunan dengan cara mengenumerasi, artinya menuliskan semua elemen himpunan yang bersangkutan di antara {}. Biasanya suatu himpunan diberi nama dengan menggunakan huruf kapital maupun dengan menggunakan simbol-simbol lainnya.

#### Contoh 1.1
Himpunan A yang berisi empat anggota 1,2,3 dan 4 dapat ditulus sebagai *A = {1,2,3,4}*. Perhatikan bahwa himpunan ditentukan oleh anggota-anggotanya dan bukuan pada urutan anggota-anggotanya. Urutan anggota didalam himpunan tidak mempunyai arti apa-apa. Jadi, kita bisa saja menuliskan *A* sebagai *A = {2,4,1,3}* atau *A = {4,3,2,1}*. Karena itu, beberapa literatur menambahkan definisi himpunan sebgai kumpulan objek tak-terurut (unordered collection)
#### Contoh 1.2
Sebutkan kumpulan buku didalam perpustakaan yang dimana buku berjudul *x* ada 2 buku, sedangkan buku berjudul y dan z masing-masing ada 1 buku. Kita bisa menuliskan himpunan tersebut seperti {x1,x2,y,z). x1 dan x2 adalah objek yang berbeda merepesentasikan judul buku *x* yang memiliki 2 buku.
#### Contoh 1.3
```
R = { a,b,{a,b,c},{a,c} }
C = { a,{a},{{a}} }
K = { {} }
```
*C* adalah himpunan yang terdiri dari 3 elemen, yaitu a, {a}, dan {{a}}. Contoh 1.3 memperlihatkan bahwa suatu himpunan dapat merupakan angggota himpunan lain. *K* hanya berisi satu elemen, yaitu {} disebeut himpunan kosong atau dilambangkan dengan ∅.

#### Contoh 1.4
x ∈ A untuk menyatakan x merupakan anggota himpunan A. <br>
x ∉ untuk menyatakan x bukan merupakan anggota himpunan A.
```
Misalkan A = { 1,2,3,4 }, R = { a,b,{a,b,c}, {a,c} }, dan K = {{}}, maka
3 ∈ A
5 ∉ A
{a,b,c} ∈ R

{a} ∉ R
a ∈ R
{} ∈ K
```

### Notasi
Cara lain menyajikan himpunan adalah dengan notasi pembentuk himpunan (set builder). Dengan cara penyajian ini, himpunan dinyatakan dengan menulis syarat yang harus dipenuhi oleh anggotanya.
```
Notasi : {x | syarat yang harus dipenuhi oleh x}
```
Aturan
- Bagian di kiri tanda "|" melambangkan elemen himpunan
- Tanda "|" dibaca *dimana* atau *sedemikian sehingga*.
- Bagian di kanan tanda "|" menunjukan syarat keanggotaan himpunan.
- Setiap tanda "," di dalam syarat keanggotaan dibaca sebagai *dan*

#### Contoh 1.5
1. A adalah himpunan bilangan bulat positif yang kecil dari 5, dinyatakan sebagai
```
A = {x | x adalah himpunan bilangan bulat positif lebih kecil dari 5}

atau dalam notasi yang lebih ringkas : 
A = {x | x ∈ p, x < 5}

hasilnya A = {1,2,3,4}
```

2. B adalah himpunan bilangan genap positif yang lebih kecil atau sama dengan 8, dinyatakan sebagai
```
B = {x | x adalah himpunan bilangan genap positif lebih kecil atau sama dari 8}

atau dalam notasi yang lebih ringkas : 
B = {x | x/2 ∈ p, 2≤ x ≤8}

hasilnya B = {2,4,6,8}
```

3. M adalah himpunan mahawasiswa yang mengambil kuliah matematika Diskrit.
```
M = { x | x adalah mahasiswa yang mengambil kuliah matematika Diskrit }
```

### Diagram Venn
Menyajikan himpunan secara grafis. Himpunan semesta (*U*) digambarkan sebagai segi empat, sedangkan himpunan lainya digambarkan sebagai lingkaran di dalam segi empat tersebut. Anggota-anggota suatu himpunan berada di dalam lingkaran, sedangkan anggota himpunan lain di dalam lingkaran yang lain juga. Ada kemungkinan dua himpunan mempunyai anggota yang sama, dan hal ini digambarkan dengan lingkaran yang saling beririsan. Anggota *U* yang tidak termasuk di dalam himpunan manapun digambarkan di luar lingkaran.

#### Contoh 1.6
```
Misalkan U = { 1,2,3,...,7,8 }, A = { 1,2,3,5 }, B = { 2,5,6,8 }.
```
![image](https://user-images.githubusercontent.com/67460437/142157768-39fe33fa-fdcb-4937-b911-05b58230d712.png)

Perhatikan bahwa A dab B mempunyai anggota bersama, yaitu 2 dan 5. Anggota U yang lain, yaitu 4 dan 7 tidak termasuk di dalam himpunan A maupun B.



## Refrensi
- "Buku Matematika Diskrit Revisi 7" Rinaldi Munir

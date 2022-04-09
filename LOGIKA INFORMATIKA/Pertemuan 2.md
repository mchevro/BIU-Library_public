# Daftar Isi 
- [Himpunan](#himpunan)
  * [Kardinalitas](#kardinalitas)
    + [Contoh 2.1](#contoh-21)
  * [Himpunan Bagian (Subset)](#himpunan-bagian-subset)
    + [Contoh 2.2](#contoh-22)
    + [Contoh 2.3](#contoh-23)
    + [Contoh 2.4](#contoh-24)
  * [Himpunan Yang Sama](#himpunan-yang-sama)
    + [Contoh 2.5](#contoh-25)
    + [Penting!](#penting)
  * [Himpunan Ekivalen](#himpunan-ekivalen)
    + [Contoh 2.6](#contoh-26)
  * [Himpunan Disjoint](#himpunan-disjoint)
    + [Contoh 2.7](#contoh-27)
- [Operasi Terhadap Himpunan](#operasi-terhadap-himpunan)
  * [Irisan (Intersection)](#irisan-intersection)
    + [Contoh 2.8](#contoh-28)
  * [Gabungan (Union)](#gabungan-union)
    + [Contoh 2.9](#contoh-29)
  * [Komplemen (Complement)](#komplemen-complement)
    + [Contoh 2.10](#contoh-210)
  * [Selisih (Difference)](#selisih-difference)
    + [Contoh 2.11](#contoh-211)
  * [Beda Setangkup (Symmetric Difference)](#beda-setangkup-symmetric-difference)
    + [Contoh 2.12](#contoh-212)
- [Refrensi](#refrensi)

<small><i><a href='http://ecotrust-canada.github.io/markdown-toc/'>Table of contents generated with markdown-toc</a></i></small>

# Himpunan 
### Kardinalitas
Sebuah himpunan dikatakan berhingga (*finite set*) jika terdapat n elemen berbeda (*distinct*) yang dalam hal ini n adalah bilangan bulat tak-negatif. 
Sebaliknya himpunan tersebut dinamakan tak-berhingga (*infinite set*).
```
Misalkan A merupakan himpunan berhingga, maka jumlah elemen berbeda di dalam A disebut kardinal dari himpunan A.
Notasi : n(A) atau |A|
```

#### Contoh 2.1
```
A = { x | x merupakan bilangan prima yang lebih kecil dari 20}, maka |A|=8, dengan
elemen-elemen A adalah 2,3,5,7,11,13,17,19
```
```
B = { kucing, a, amir, 10, paku} maka |B| = 5, dengan
elemen-elemen B (yang berbeda) adalah kucing, a, amir, 10, dan paku.
```

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

### Himpunan Bagian (Subset)
Sebuah himpunan dapat merupakan bagian dari himpunan lain. Anggota yang dikandung di dalam himpunan tersebut juga terkandung di dalam himpunan yang lain.
```
Himpunan A dikatakan himpunan bagian (subset) dari himpunan B jika dan hanya jika setiap elemen A merupakan elemen dari B.
Dalam hal ini, B dikatakan superset dari A.

Notasi : A ⊆ B
```
![image](https://user-images.githubusercontent.com/67460437/142229645-52b25d33-4080-46d3-827e-0217699ee36e.png)

#### Contoh 2.2
```
1. {1,2,3} ⊆ {1,2,3,4,5}

2. {1,2,3} ⊆ {1,2,3}

3. N ⊆ Z ⊆ R ⊆ C

4. Jika A { {x,y} } | x + y < 4, x ≥ 0, y ≥ 0} dan B = { {x,y} | 2x + y < 4, x ≥ 0 dan y ≥ 0}, maka
B ⊆ A
```

#### Contoh 2.3
```
A = { p,q,r } bukan himpunan bagian dari B = { m,p,q,t,u } karena r ∈ A tetapi r ∉ B.
```

#### Contoh 2.4
```
Misalkan X = { 4,5,6 } dan Z = { 4,5,6,7,8 }. Tentukan semua kemungkinan himpunan Y sedemikian hingga
X ⊂ Y dan Y ⊂ Z, yaitu X adalah proper subset dari Y dan Y adalah proper subset dari Z.

Penyelesaian :
Y harus mengandung semua elemen X dan sekurang-kurangnya satu elemen dari Z.
dengan demikian, Y = { 4,5,6,7 } atau Y = { 4,5,6,8 }. 
Y tidak boleh memuat 7 dan 8 sekaligus karena Y adalah proper subset dari Z.
```
![image](https://user-images.githubusercontent.com/67460437/142232294-734c8f4e-c801-43da-b90a-7d0df6bbe07b.png)

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

### Himpunan Yang Sama
Himpunan A dikatakan sama dengan himpunan B jika dan hanya jika keduanya mempunyai elemen yang sama. Dengan kata lain, A sama dengan B jika A adalah himpunan bagian dari B dan B adalah himpunan bagian dari A. Jika tidak demikian, maka kita katakan A tidak sama dengan B.
```
Notasi : A = B ↔ A ⊆ B dan B ⊆ A
```
#### Contoh 2.5
```
1. Jika A = { 0,1 } dan B = { x | x (x-1) = 0 }, maka A = B
2. Jika A = { 3,5,8,5 } dan B = { 5,3,8 }, maka A = B
3. Jika A = { 3,5,8,5 } dan B = { 3,8 }, maka A ≠ B
```

#### Penting!
Tiga hal yang perlu dicatat dalam memeriksa kesamaan dua buah himpunan :
1. Urutan elemen di dalam himpunan tidak penting. <br>
Jadi, {1,2,3} = {3,2,1} = {1,3,2}

2. Pengulangan elemen tidak mempengaruhi kesamaan dua buah himpunan. <br>
Jadi, {1,1,1,1} = {1,1} = {1} dan {1,2,3} = {1,2,1,3,2,1}

3. Urutan tiga buah himpunan A,B, dan C berlaku aksioma berikut <br>
(a). A = A, B = B, dan C = C <br>
(b). Jika A = B, maka B = A <br>
(c). Jika A = B dan B = C, maka A = C

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

### Himpunan Ekivalen
Dua buah himpunan dapat mempunyai kardinal yang sama meskipun anggota kedua himpunan tersebut tidak sama. Kita katakan kedua himpunan tersebut ekivalen.
```
Himpunan A dikatakan ekivalen dengan himpunan B jika dan hanya jika kardinal dari kedua himpunan tersebut sama.

Notasi : A ~ B ↔ |A| = |B|
```
#### Contoh 2.6
Jika A = { 1,3,5,7 } dan B = { a,b,c,d }, maka A ~ B sebab |A| = |B| = 4

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

### Himpunan Disjoint
Dua buah himpunan mungkin saja tidak memiliki anggota yang sama satu buahpun. Kedua himpunan tersebut dikatakan saling lepas (Disjoint).
```
Dua himpunan A dan B dikatakan saling lepas jika keduanya tidak memiliki elemen yang sama.

Notasi  : A // B
```
![image](https://user-images.githubusercontent.com/67460437/142442223-dec4dcef-7610-4bd6-a35c-19e844fb2c10.png)


#### Contoh 2.7
Jika A = { x | x ∈ P, x < 8 } dan B = { 10, 20, 30,... }, maka A // B

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

## Operasi Terhadap Himpunan
Terhadapat dua buah himpunan atau lebih, kita dapat melakukan operasi untuk menghasilkan himpunan lain. Jenis operasi yang lazim digunakan terhadap himpunan adalah operasi irisan (intersection), gabungan (union), komplemen, selisih (difference), perkalian kertesian (cartesian product), dan beda-setangkup (symmetric difference).

### Irisan (Intersection)
```
Irisan (intersection) dari himpunan A dan B adalah sebuah himpunan yang setiap elemenya merupakan elemen dari himpunan A dan himpunan B.

Notasi : A ∩ B = { x | x ∈ A dan x ∈ B }
```
![image](https://user-images.githubusercontent.com/67460437/142564792-6333a1f7-8fd2-4984-a3a7-a5a29f3d8095.png)

#### Contoh 2.8
Jika dua himpunan saling lepas, maka irisannya adalah himpunan kosong, karena tidak ada elemen yang sama yang terdapat di dalam kedua himpunan tersebut.
```
1. Jika A = { 2,4,6,8,10 } dan B = { 4,10,14,18 }, maka A ∩ B = {4,10}

2. Jika A = { (x,y) | x + y = 7, x,y ∈ R } dan B = { (x,y) | x - y = 3, x,y ∈ R }, maka 
A ∩ B = {5,2} yang merupakan titik potong garis x + y = 7 dan x - y = 3.

3. Jika A = { 3,5,9 } dan B = { -2,6 }, maka A ∩ B = ∅, artinya A // B
```

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

### Gabungan (Union)
```
Gabungan (Union) dari himpunan A dan b adalah himpunan yang setiap anggotanya merupakan anggota himpunan A atau himpunan B.

Notasi : A ∪ B = { x | x ∈ A atau x ∈ B }
```
![image](https://user-images.githubusercontent.com/67460437/142629103-b4153065-9b9f-444f-9523-c4c113505c21.png)


#### Contoh 2.9
```
1. Jika A = { 2,5,8 } dan B = { 7,5,22 }, maka 
A ∪ B = { 2,5,7,8,22 }

2. A ∪ ∅ = A
```
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

### Komplemen (Complement)
```
Komplemen dari suatu himpunan A terhadap suatu himpunan semesta U adalah 
suatu himpunan yang elemenya merupakan elemen U yang bukan elemen A.

Notasi : A' = { x | x ∈ U dan x ∉ A |
```
![image](https://user-images.githubusercontent.com/67460437/142627369-fb9a4ead-accc-49dc-aca5-0a0ce6967ee1.png)

#### Contoh 2.10
```
Misalkan U = { 1,2,3,...,9 },
1. Jika A = { 1,3,7,9 }, maka A' = { 2,4,5,6,8 } 

2. Jika A = { x | x/2 ∈ P, x < 9 }, maka A' = { 1,3,5,7 }
```
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

### Selisih (Difference)
```
Selisih dari dua himpunan A dan B adalah suatu himpunan yang elemenya merupakan elemen dari A tetapi bukan elemen dari B.
Selisih antara A dan B dapat juga dikatakan sebagai komplemen himpunan B relatif terhadap himpunan A.

Notasi : A - B = { x | x ∈ A dan x ∉ B } = A ∩ B'
```
![image](https://user-images.githubusercontent.com/67460437/142630216-19aeb176-6c08-4f59-8b09-880fce6f7d97.png)

#### Contoh 2.11
```
1. Jika A = { 1,2,3,...,10} dan B = { 2,4,6,8,10 }, maka A - B = { 1,3,5,7,9 } dan B - A = ∅

2. { 1,3,5 } - { 1,2,3} = {5}, tetapi { 1,2,3 } - { 1,3,5 } = {2}  
```

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

### Beda Setangkup (Symmetric Difference)
```
Beda Setangkup dari himpunan A dan B adalah suatu himpunan yang elemennya ada pada himpunan A atau B, 
tetapi tidak pada keduanya.

Notasi : A ⊕ B = (A ∪ B) - (A ∩ B) = (A-B) ∪ (B-A)
```
![image](https://user-images.githubusercontent.com/67460437/142631901-56c520af-8abf-4256-9b0e-3de7d1ec025e.png)

#### Contoh 2.12
```
1. Jika A = { 2,4,6 } dan B = { 2,3,5 }, maka A ⊕ B = { 3,4,5,6 }

2. A = himpunan segitiga sama kaki, B = himpunan segitiga siku-siku
A ⊕ B = himpunan segitiga sama kaki yang tidak siku-siku dan segitiga siku-siku yang tidak sama kaki
```


## Refrensi
- "Buku Matematika Diskrit Revisi 7" Rinaldi Munir

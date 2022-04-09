# Kalkulus Proposisi
Proposisi merupakan sebuah koleksi dari statemen-statemen deklaratif yang memiliki nilai kebenaran *Benar atau True* atau *Salah atau False*. Sebuah proposisi bisa terdiri atas sebuah statemen (proposisi tunggal) atau beberapa statemen dengan konektor/penghubung (proposisi majemuk). 

Variable-variable proposisi dan penghubung-penghubung (koneksi-koneksi). Proposisi (atau variable proposisi) dinyatakan dengan huruf besar (A, B, dan seterusnya).  Konektor/penghubung berperan untuk menghubungkan variable-variable proposisi. Tujuan dari logika proposisi adalah menganalisis nilai kebenaran proposisi baik secara individu/tunggal ataupun majemuk.

#### Contoh 9.1
Beberapa proposisi dan nilai kebenaranya :
```
1. Jakarta adalah ibu kota Negara indonesia {benar}.

2. Presiden RI ketujuh adalah Megawati {Salah}.

3. 4 adalah bilangan genap {benar}.

4. 12 + 8 = 8 - 2 {salah}.
```

#### Contoh 9.2
Kalimat berikut adalah kalimat non-deklaratif (bukan proposisi/statemen) :
```
1. X adalah kurang dari 6.

2. Jam berapa sekarang?.

3. Silahkan tinggalkan tempat ini sekarang!
```

#### Contoh 9.3
Beberapa bentuk kalimat yang non-deklaratif : 
```
1. Kalimat dengan aksklamasi (!).

2. Kalimat permintaan.

3. Kalimat bertanya (?).
```

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

## Penghubung Proposisi
Dalam logika proposisi, terdapat lima macam konektor (penghubung) seperti berikut:
| Ekspersi |    Perangkai   |         Operator         |
|:--------:|:--------------:|:------------------------:|
|     ¬    |       NOT      |          Negasi          |
|     ^    |       AND      |         Konjungsi        |
|     ∨    |       OR       |         Disjungsi        |
|     →    |     IF THEN    |         Impilkasi        |
|     ↔    | IF AND ONLY IF | Bi-Implikasi/Ekuivalensi |

#### Contoh 9.4 (OR)
Operasi OR (atau) pada dua proposisi A dan B disebut *disjunction* ditulis A ∨ B, bernilai **false** bila kedua proposisi A dan B bernilai false. 
|   A   |   B   | A ∨ B |
|:-----:|:-----:|:-----:|
|  True |  True |  True |
|  True | False |  True |
| False |  True |  True |
| False | False | False |

#### Contoh 9.5 (AND)
Operasi AND (dan) pada dua proposisi A dan B disebut *conjunction* dan ditulis A ^ B, hanya bernilai **true** bila kedua proposisi A dan B bernilai benar.
|   A   |   B   | A ^ B |
|:-----:|:-----:|:-----:|
|  True |  True |  True |
|  True | False | False |
| False |  True | False |
| False | False | False |

#### Contoh 9.6 (Implikasi)
Andaikai P dan Q adalah proposisi, maka proposisi kondisional (implikasi) jika P, maka Q disimbolkan P → Q, dibaca : "Jika P, maka Q" atau P berlaku Q, Q jika P. P adalah syarat cukup untuk Q. A → B hanya bernilai **salah** bila proposisi A bernilai benar dan B bernilai salah.
|   A   |   B   | A → B |
|:-----:|:-----:|:-----:|
|  True |  True |  True |
|  True | False | False |
| False |  True |  True |
| False | False |  True |

#### Contoh 9.7 (Bi-Implikasi)
Jika P dan Q adalah proposisi, maka proposisi bi-kondisional (bi-impilkasi) jika P dan hanya jika Q, disimbolkan dengan P ↔ Q. A ↔ B hanya bernilai benar bila proposisi A dan B bernilai **sama**.

|   A   |   B   | A ↔ B |
|:-----:|:-----:|:-----:|
|  True |  True |  True |
|  True | False | False |
| False |  True | False |
| False | False |  True |


#### Contoh 9.8 (Negasi)
Jika P adalah sebuah proposisi, maka negasi P atau bukanlah P ditulis dengan ¬P.
|   P   |   ¬P  |
|:-----:|:-----:|
|  True | False |
| False |  True |

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

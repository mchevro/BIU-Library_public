## Hukum Aljabar Boolean

### Fungsi Hukum Aljabar Boolean
Untuk melakukan penyederhanaan Ekspresi Boolean yang kompleks sehingga dapat mengurangi jumlah Gerbang Logika yang diperlukan
dengan metode **Hukum Aljabar Boolean**

### Tabel Hukum Aljabar Boolean
| -                                            | -                                                                              |
|----------------------------------------------|--------------------------------------------------------------------------------|
| `1. HK. Identitas`<br>A + 0 = A<br>A . 1 = A   | `6. HK. Penyerapan`<br>A + AB = A<br>A(A + B) = A                                |
| `2. HK. Idempoten`<br>A + A = A<br>A . A = A   | `7. HK. Komutatif`<br>A + B = B + A<br>A . B = B . A                             |
| `3. HK. Komplemen`<br>A + A' = 1<br>A . A' = 0 | `8. HK. Asosiatif`<br>A + (B + C) = (A + B) + C<br>A . (B . C) = (A . B) . C     |
| `4. HK. Dominansi`<br>A . 0 = 0<br>A + 1 = 1   | `9. HK. Distributif`<br>A + (B . C) = (A + B) . (A + C)<br>A . (B + C) = AB + AC |
| `5. HK. Involusi`<br>A'' = A                   | `10. HK. De Morgan`<br>(A + B)' = A' . B'<br>(A . B)' = A' + B'                  |
|                                              | `11. HK. 0/1`<br>0' = 1<br>1' = 0                                                |

### Contoh Soal
1. A + A'B = A + B <br>
Jawab : A + A'B = (A + AB) + A'B - HK. Penyerapan <br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;= A + (AB+A'B) - HK. Asosiatif <br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;= A + B (A+A') - HK. Distributif <br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;= A + B . 1 &emsp;- HK. Komplemen <br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;= A + B &emsp;&emsp;&emsp;- HK. Identitas


### Pembuktian Jawaban Dengan Tabel Kebenaran
#### Jawab 1 :
| A | B | A' | A'B | A + A'B | A + B |
|:-:|:-:|:--:|:---:|:-------:|:-----:|
| 0 | 0 |  1 |  0  |    0    |   0   |
| 0 | 1 |  1 |  1  |    1    |   1   |
| 1 | 0 |  0 |  0  |    1    |   1   |
| 1 | 1 |  0 |  0  |    1    |   1   |


### Refrence
https://teknikelektronika.com/pengertian-aljabar-boolean-hukum-aljabar-boolean/
https://drive.google.com/file/d/1nsOofrgU87QPJEAmCREHL2hph0VyROH7/view

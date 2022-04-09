/**
 * @file app.cpp
 * @author Mchevro (mchevro@gmail.com)
 * @brief Simple Tools Hitung Otomatis Matkul Statistika
 * @version 0.3
 * @date 2022-01-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
class AngkaIndeks{
    private :
        int totalData;
        string yearCertain, yearBase;
        float arrayPriceCertain[100], arrayQuantityCertain[100], arrayPriceBase[100], arrayQuantityBase[100];
        float totalArrayPriceCertain = 0, totalArrayQuantityCertain=0, totalArrayPriceBase = 0, totalArrayQuantityBase=0; 
        float resultIndeksAgregatifTertimbang = 0;
    public :

    void rawData(){
        cout << "[INPUT] Jumlah Data \t: "; cin >> totalData;
        cout << "[INPUT] Tahun Tertentu \t: ";cin >> yearCertain;
        cout << "[INPUT] Tahun Dasar \t: ";cin >> yearBase;
    }

    void inputData(){
        cout << endl;
        cout << "-----------" << endl;
        cout << setiosflags(ios::left) << setw(5) << "No";
        cout << setiosflags(ios::left) << setw(15) << "Harga";
        cout << endl;
        cout << setiosflags(ios::left) << setw(5) << "";
        cout << setiosflags(ios::left) << setw(15) << yearCertain;
        cout << endl;
        cout << "-----------" << endl;
        for(int i = 0; i<totalData; i++){
            cout << setiosflags(ios::left) << setw(5) << i+1;
            cout << setiosflags(ios::left) << setw(15); cin >> arrayPriceCertain[i];
        }

        cout << endl;

        cout << "-----------" << endl;
        cout << setiosflags(ios::left) << setw(5) << "No";
        cout << setiosflags(ios::left) << setw(15) << "Kuantitas";
        cout << endl;
        cout << setiosflags(ios::left) << setw(5) << "";
        cout << setiosflags(ios::left) << setw(15) << yearCertain;
        cout << endl;
        cout << "-----------" << endl;
        for(int i = 0; i<totalData; i++){
            cout << setiosflags(ios::left) << setw(5) << i+1;
            cout << setiosflags(ios::left) << setw(15); cin >> arrayQuantityCertain[i];
        }

        cout << endl;
        cout << "-----------" << endl;
        cout << setiosflags(ios::left) << setw(5) << "No";
        cout << setiosflags(ios::left) << setw(15) << "Harga";
        cout << endl;
        cout << setiosflags(ios::left) << setw(5) << "";
        cout << setiosflags(ios::left) << setw(15) << yearBase;
        cout << endl;
        cout << "-----------" << endl;
        for(int i = 0; i<totalData; i++){
            cout << setiosflags(ios::left) << setw(5) << i+1;
            cout << setiosflags(ios::left) << setw(15); cin >> arrayPriceBase[i];
        }

        cout << endl;
        cout << "-----------" << endl;
        cout << setiosflags(ios::left) << setw(5) << "No";
        cout << setiosflags(ios::left) << setw(15) << "Kuantitas";
        cout << endl;
        cout << setiosflags(ios::left) << setw(5) << "";
        cout << setiosflags(ios::left) << setw(15) << yearBase;
        cout << endl;
        cout << "-----------" << endl;
        for(int i = 0; i<totalData; i++){
            cout << setiosflags(ios::left) << setw(5) << i+1;
            cout << setiosflags(ios::left) << setw(15); cin >> arrayQuantityBase[i];
        }
        cout << endl;
    }

    float indeksAgregatifTertimbang(){
        for(int i=0; i<totalData; i++){
            totalArrayPriceCertain += arrayPriceCertain[i];
            totalArrayQuantityCertain += arrayQuantityCertain[i];
            totalArrayPriceBase += arrayPriceBase[i];
            totalArrayQuantityBase += arrayQuantityBase[i];
        }
        resultIndeksAgregatifTertimbang = ((totalArrayPriceCertain * totalArrayQuantityBase) / (totalArrayPriceBase * totalArrayQuantityBase)) * 100;
        return resultIndeksAgregatifTertimbang;
    }
    
    void showResutlAll(){
        cout << "-----------------------------------------------------------" << endl;
        cout << setiosflags(ios::left) << setw(8) << "No";
        cout << setiosflags(ios::left) << "Tahun " << setw(20)  << yearCertain;
        cout << setiosflags(ios::left) << "Tahun " << setw(15) <<   yearBase;
        cout << endl;
        cout << setiosflags(ios::left) << setw(5) << "";
        cout << setiosflags(ios::left) << setw(10) << "Harga";
        cout << setiosflags(ios::left) << setw(15) << "Kuantitas";
        cout << setiosflags(ios::left) << setw(10) << "Harga";
        cout << setiosflags(ios::left) << setw(15) << "Kuantitas";
        cout << endl;
        cout << "-----------------------------------------------------------" << endl;
        for(int i=0; i<totalData; i++){
            cout << setiosflags(ios::left) << setw(5) << i+1;
            cout << setiosflags(ios::left) << setw(10) << arrayPriceCertain[i];
            cout << setiosflags(ios::left) << setw(15) << arrayQuantityCertain[i];
            cout << setiosflags(ios::left) << setw(10) << arrayPriceBase[i];
            cout << setiosflags(ios::left) << setw(15) << arrayQuantityBase[i];
            cout << endl;
        }
        cout << "-----------------------------------------------------------" << endl;
        cout << setiosflags(ios::left) << setw(5) << "[SUM]";
        cout << setiosflags(ios::left) << setw(10) << totalArrayPriceCertain;
        cout << setiosflags(ios::left) << setw(15) << totalArrayQuantityCertain;
        cout << setiosflags(ios::left) << setw(10) << totalArrayPriceBase;
        cout << setiosflags(ios::left) << setw(15) << totalArrayQuantityBase;
        cout << endl;
        cout << "===========================================================" << endl;
        cout << "[RESULT] Indeks Tertimbang \t: " << resultIndeksAgregatifTertimbang << "%";
        cout << endl;
    }
};

class DataTunggal{
    private :
        int totalData;
        float arrayData[100];
        float arrayTotalXSubtractMean2, arrayTotalXSubtractMean3;
        float resultMean = 0;
        float standarDeviasi = 0, standarDeviasi3 = 0;
        float resultMomen=0;

    public  :
    float inputData(int getTotalData){
        totalData = getTotalData;
        cout << "------------------------" << endl;
        cout << setiosflags(ios::left) << setw(10) << "No";
        cout << setiosflags(ios::left) << "Data";
        cout << endl;
        cout << "------------------------" << endl;
        for(int i=0; i<totalData; i++){
            cout << setiosflags(ios::left) << setw(10) << i+1;
            cin >> arrayData[i];
        }
        return 0;
    }

    float searchMean(){
        for(int i=0; i<totalData; i++){
            resultMean += arrayData[i];
        }
        resultMean /= totalData;
        return resultMean;
    }

    float inputStandarDeviasi(){
        cout << "[INPUT] Standar Deviasi : "; cin >> standarDeviasi;
        standarDeviasi3 = pow(standarDeviasi, 3);
        return standarDeviasi;
    }

    float searchStandarDeviasi(){
        for(int i=0; i<totalData; i++){
            arrayTotalXSubtractMean2 += pow((arrayData[i] - resultMean), 2);
        }
        standarDeviasi = sqrt((arrayTotalXSubtractMean2 / (totalData - 1)));
        standarDeviasi3 = pow(standarDeviasi, 3);
        return standarDeviasi;
    }


    float searchMomen(){
        for(int i=0; i<totalData; i++){
            arrayTotalXSubtractMean3 += pow((arrayData[i] - resultMean), 3);
        }
        resultMomen = arrayTotalXSubtractMean3 / (totalData * pow(standarDeviasi, 3));
        return resultMomen;
    }

    void showResulAll(){
        cout << "------------------------------------------" << endl;
        cout << "[RESULT] Mean \t\t\t: " << resultMean << endl;
        cout << "[RESULT] Standar Deviasi \t: " << standarDeviasi << endl;
        cout << "[RESULT] Standar Deviasi ^ 3 \t: " << standarDeviasi3 << endl;
        cout << "[RESULT] Koefisien Momen \t: " << resultMomen << endl;
    }

};

class DataKelompok{
    private :
        int totalData; //Total Jumlah Data
        int resultSearchClass; //Variable untuk hasil dari mencari kelas
        float resultSearchIntervalClass; //Variable untuk hasil dari Range Interval Kelas
        float arrayFrekuensiInterval[100]; //Frekuensi Interval setiap kelas
        float arrayInterval[100][2]; //Variable Array interval kelas
        float arrayFrekuensiKomulatifP[100]; //Variable Array Frekueensi Komulatif >
        float arrayFrekuensiKomulatifN[100]; //Variable Array Frekueensi Komulatif <
        float resultFrekuensiKomulatifP, resultFrekuensiKomulatifN;
        float arrayFrekuensiRelatifP[100]; //Variable Array Frekeuensi Relatif >
        float arrayFrekuensiRelatifN[100]; //Variable Array Frekeuensi Relatif <
        float arrayLowerClassLimit[100]; //Variable Array Lower Class Limit
        float arrayUpperClassLimit[100]; //Variable Array Upper Class Limit
        float arrayLowerClassBoundary[100]; //Variable Array Lower Class Boundary
        float arrayUpperClassBoundary[100]; //Variable Array Upper Class Boundary
        float arrayClassMedian[100][2]; //Variable Array Class Median
        float resultArrayClassMedian[100]; //Variable Result Array Class Median
        float resultArrayFIxCM[100]; //Variable Result Array Frekuensi Interval * Class Median
        float totalResultArrayFIxCM = 0, totalResultarrayFrekuensiInterval = 0, resultMean = 0 ; //Variable Untuk Mencari Nilai Mean
        float resultNTKP = 0, resultNTKT = 0, resultNilaiJarak; // Variable Untuk Mencari Nilai Jarak
        float arrayMutlak[100], arrayFIxMutlak[100], resultArrayFIxMutlak=0, resultSimpanganRata = 0; //Variable Untuk Mencari Nilai Mutlak
        float arrayMutlakPow[100], resultArrayMutlakPow = 0, resultStandarDeviasi = 0; //Variable Untuk Mencari Nilai Standar Deviasi
        float resultKoefisien = 0; //Variable Untuk Mencari Nilai Koefisien
    public :
        //VERSION 0.1

        //Func Mencari Jumlah Kelas
        int searchClass(short getTotalData);
        //Func Mencari Range Nilai Setiap Kelas
        float searchIntervalClass(short getMax, short getMin);
        //Func Mencari Batas Range Interval Kelas
        void searchLengthLimitClass(int getStartNum);
        //Func Input Jumlah Frekuensi Interval. Harus Dicari Secara Manual Atau Menggunakan Excel
        void inputFrekuensiInterval();
        //Func Mencari Frekuensi Komulatif >
        float searchFrekuensiKomulatifP();
        //Func Mencari Frekuensi Komulatif <
        float searchFrekuensiKomulatifN();
        //Func Mencari Frekuensi Relatif >
        float searchFrekuensiRelatifP();
        //Func Mencari Frekuensi Relatif >
        float searchFrekuensiRelatifN();
        //Func Mencari Lower Class Limit
        float searchLowerClassLimit();
        //Func Mencari Upper Class Limit
        float searchUpperClassLimit();
        //Func Mencari Lower Class Boundary
        float searchLowerClassBoundary();
        //Func Mencari Upper Class Boundary
        float searchUpperClassBoundary();
        //Tampilkan Tabel Semua Hasil
        void showResulatAll();

        //VERSION 0.2

        //Cari Nilai Median Antar Kelas
        float searchClassMedian();
        //Hitung Frekuensi Interval * Nilai Median Antar Kelas
        float searchFIxCM();
        //Hitung Mean
        float searchMean();

        //VERSION 0.3

        //Mencari Nilai Jarak
        float searchNilaiJarak();
        //Mencari Simpangan Rata-Rata
        float searchSimpanganRata();
        //Mencari Standar Deviasi
        float searchStandarDeviasi();
        //Mencari Koefisien
        float searchKoefisien();

};
int main(){
    AngkaIndeks runAngkaIndeks;
    DataTunggal runTunggal;
    DataKelompok run;
    short totalData = 0, min = 0, max = 0, startNum = 0;
    char choose, opsi1, opsi2;
    do{
        cout << R"(
  ____ _____  _  _____ ___ ____ _____ ___ _  __    _      __  __    ____            
 / ___|_   _|/ \|_   _|_ _/ ___|_   _|_ _| |/ /   / \     \ \/ /   / ___| _     _   
 \___ \ | | / _ \ | |  | |\___ \ | |  | || ' /   / _ \     \  /   | |   _| |_ _| |_ 
  ___) || |/ ___ \| |  | | ___) || |  | || . \  / ___ \    /  \   | |__|_   _|_   _|
 |____/ |_/_/   \_\_| |___|____/ |_| |___|_|\_\/_/   \_\  /_/\_\   \____||_|   |_|  
                                                                                    VERSION 0.3
        )" << endl;
        cout << "[1] DATA TUNGGAL" << endl;
        cout << "[2] DATA BERKELOMPOK" << endl;
        cout << "[3] ANGKA INDEKS" << endl;
        cout << "[INPUT] Opsi \t: "; cin >> opsi1;
    
        switch (opsi1)
        {
        case '1':
            cout << "[INPUT] Jumlah Data : "; cin >> totalData;
            runTunggal.inputData(totalData);
            runTunggal.searchMean();
            cout << endl;
            cout << "---------------------------" << endl;
            cout << "[1] [INPUT] Standar Deviasi" << endl;
            cout << "[2] [SEARCH] Standar Deviasi" << endl;
            cout << "---------------------------" << endl;
            cout << "[INPUT] Opsi \t: "; cin >> opsi2;
            switch (opsi2)
            {
            case '1':
                runTunggal.inputStandarDeviasi();
                break;

            case '2':
                runTunggal.searchStandarDeviasi();
                break;
            
            default:
                break;
            }
            runTunggal.searchMomen();
            runTunggal.showResulAll();
            break;
            
        case '2':
            cout << "[INPUT] Jumlah Data : "; cin >> totalData;
            cout << "[RESULT] Jumlah Kelas : " <<  run.searchClass(totalData) << endl << endl;
            cout << "[INPUT] Nilai Max : "; cin >> max;
            cout << "[RESULT] Nilai Min : "; cin >> min;
            cout << "[RESULT] Range Interval : " << run.searchIntervalClass(max, min) << endl << endl;
            run.searchLengthLimitClass(min);
            cout << endl;
            run.inputFrekuensiInterval();
            run.searchFrekuensiKomulatifP();
            run.searchFrekuensiKomulatifN();
            run.searchFrekuensiRelatifP();
            run.searchFrekuensiRelatifN();
            run.searchLowerClassLimit();
            run.searchUpperClassLimit();
            run.searchLowerClassBoundary();
            run.searchUpperClassBoundary();
            run.searchClassMedian();
            run.searchFIxCM();
            run.searchMean();
            run.searchNilaiJarak();
            run.searchSimpanganRata();
            run.searchStandarDeviasi();
            run.searchKoefisien();
            run.showResulatAll();
            break;
        
        case '3':
            runAngkaIndeks.rawData();
            runAngkaIndeks.inputData();
            runAngkaIndeks.indeksAgregatifTertimbang();
            runAngkaIndeks.showResutlAll();
            break;
        default:
            break;
        }
        cout << endl << "Input Lagi [Y/T]? : ";
        cin >> choose;
        if(choose == 'Y' || choose == 'y'){
            system("cls");
            continue;
        }else{
            break;
        }
    }while(true);
    return 0;
}

//Func Mencari Jumlah Kelas
int DataKelompok :: searchClass(short getTotalData){
    totalData = getTotalData;
    resultSearchClass = 1 + 3.322 * log10(getTotalData);
    return resultSearchClass;
}

//Func Mencari Range Nilai Setiap Kelas
float DataKelompok :: searchIntervalClass(short getMax, short getMin){
    resultSearchIntervalClass = (getMax - getMin)/resultSearchClass;
    return resultSearchIntervalClass;
}

//Func Mencari Batas Range Interval Kelas
void DataKelompok :: searchLengthLimitClass(int getStartNum){
    cout << "-------------------------" << endl;
    cout << setiosflags(ios::left) << setw(10) << "Kelas";
    cout << setiosflags(ios::left) << setw(15) << "Distribusi" << endl;
    cout << setiosflags(ios::left) << setw(10) << "";
    cout << setiosflags(ios::left) << setw(25) << "Frekuensi" << endl;
    cout << "-------------------------" << endl;
    //interval[6][2] = {{50,55}, {56,61}, {62,67}, {68,72}, {73,78}, {79,84}};
    for(int i=0; i<resultSearchClass; i++){
        cout << setiosflags(ios::left) << " " << setw(10) << i+1 << " ";
        for(int j=0; j < 2; j++){
            if(j==1){
                getStartNum = getStartNum + ceil(resultSearchIntervalClass);
            }else if(j==0 && !i==0){
                getStartNum = getStartNum + 1;
            }
            arrayInterval[i][j] = getStartNum;
            cout << round(arrayInterval[i][j]) << " ";
        }
        cout << endl;
    }
    cout << "-------------------------" << endl << endl;
}

//Func Input Jumlah Frekuensi Interval. Harus Dicari Secara Manual Atau Menggunakan Excel
void DataKelompok :: inputFrekuensiInterval(){
    cout << "-------------------------" << endl;
    cout << setiosflags(ios::left) << setw(10) << "Kelas";
    cout << setiosflags(ios::left) << setw(15) << "Frekuensi" << endl;
    cout << setiosflags(ios::left) << setw(10) << "";
    cout << setiosflags(ios::left) << setw(25) << "Interval" << endl;
    cout << "-------------------------" << endl;

    for(int i=0; i<round(resultSearchClass); i++){
        cout << setiosflags(ios::left) << " "  << setw(10) << i+1;
        cin >> arrayFrekuensiInterval[i];
    }
    cout << "-------------------------" << endl;
}

//Func Mencari Frekuensi Komulatif >
float DataKelompok :: searchFrekuensiKomulatifP(){
    for(int i=0; i<resultSearchClass; i++){
        if(i==0){
            resultFrekuensiKomulatifP = arrayFrekuensiInterval[i];
            arrayFrekuensiKomulatifP[i] = resultFrekuensiKomulatifP; // Result resultFrekuensiKomulatifP ditampung di arrayFrekuensiKomulatifP
            continue;
        }
        resultFrekuensiKomulatifP+=arrayFrekuensiInterval[i];
        arrayFrekuensiKomulatifP[i] = resultFrekuensiKomulatifP; // Result resultFrekuensiKomulatifP ditampung di arrayFrekuensiKomulatifP
    }
    return 0;
}

//Func Mencari Frekuensi Komulatif <
float DataKelompok :: searchFrekuensiKomulatifN(){
    for(int i=resultSearchClass-1; i>=0; i--){
        if(i==resultSearchClass-1){
            resultFrekuensiKomulatifN = arrayFrekuensiInterval[i];
            arrayFrekuensiKomulatifN[i] = resultFrekuensiKomulatifN;
            continue;
        }
        resultFrekuensiKomulatifN+=arrayFrekuensiInterval[i];
        arrayFrekuensiKomulatifN[i] = resultFrekuensiKomulatifN;
    }
    return 0;
}

//Func Mencari Frekuensi Relatif >
float DataKelompok :: searchFrekuensiRelatifP(){
    for(int i=0; i<resultSearchClass; i++){
        arrayFrekuensiRelatifP[i] = (float(arrayFrekuensiKomulatifP[i])/float(totalData))*100;
    }
    return 0;
}

//Func Mencari Frekuensi Relatif >
float DataKelompok :: searchFrekuensiRelatifN(){
    for(int i=0; i<resultSearchClass; i++){
        arrayFrekuensiRelatifN[i] = (float(arrayFrekuensiKomulatifN[i])/float(totalData))*100;
    }
    return 0;
}

//Func Mencari Lower Class Limit
float DataKelompok :: searchLowerClassLimit(){
    for(int i=0; i<resultSearchClass; i++){
        for(int j=0; j<1; j++){
            arrayLowerClassLimit[i] = arrayInterval[i][j];
        }
    }
    return 0;
}

//Func Mencari Upper Class Limit
float DataKelompok :: searchUpperClassLimit(){
    for(int i=0; i<resultSearchClass; i++){
        for(int j=1; j<2; j++){
            arrayUpperClassLimit[i] = arrayInterval[i][j];
        }
    }
    return 0;
}

//Func Mencari Lower Class Boundary
float DataKelompok :: searchLowerClassBoundary(){
    for(int i=0; i<resultSearchClass; i++){
        for(int j=0; j<1; j++){
            arrayLowerClassBoundary[i] = arrayLowerClassLimit[i] - 0.5;
        }
    }
    return 0;
}

//Func Mencari Upper Class Boundary
float DataKelompok :: searchUpperClassBoundary(){
    for(int i=0; i<resultSearchClass; i++){
        for(int j=0; j<1; j++){
            arrayUpperClassBoundary[i] = arrayUpperClassLimit[i] + 0.5;
        }
    }
    return 0;
}

//Cari Nilai Median Antar Kelas
float DataKelompok :: searchClassMedian(){
    for(int i=0; i<resultSearchClass; i++){
        for(int j=0; j<2; j++){
            if(j%2){
                arrayClassMedian[i][j] = arrayUpperClassLimit[i];
                continue;
            }
            arrayClassMedian[i][j] = arrayLowerClassLimit[i];
        }
    }

    for(int i=0; i<resultSearchClass; i++){
        int tempArrayClassMedian=0;
        for(int j=0; j<2; j++){
            tempArrayClassMedian += arrayClassMedian[i][j];
        }
        resultArrayClassMedian[i] = tempArrayClassMedian/2;
    }
    return 0;
}

//Hitung Frekuensi Interval * Nilai Median Antar Kelas
float DataKelompok :: searchFIxCM(){
    for(int i=0; i<resultSearchClass; i++){
        resultArrayFIxCM[i] = arrayFrekuensiInterval[i] * resultArrayClassMedian[i];
    }
    return 0;
}

//Hitung Mean
float DataKelompok :: searchMean(){
    for(int i=0; i<resultSearchClass; i++){
        totalResultArrayFIxCM+=resultArrayFIxCM[i];
        totalResultarrayFrekuensiInterval+=arrayFrekuensiInterval[i];

    }
    resultMean = totalResultArrayFIxCM / totalResultarrayFrekuensiInterval;
    return 0;
};

//Mencari Nilai Jarak
float DataKelompok :: searchNilaiJarak(){
    resultNTKP = (arrayLowerClassLimit[0] + arrayUpperClassLimit[0]) / 2;
    resultNTKT = (arrayLowerClassLimit[resultSearchClass-1] + arrayUpperClassLimit[resultSearchClass-1]) / 2;
    resultNilaiJarak = resultNTKT - resultNTKP;
    return 0;
}

float DataKelompok :: searchSimpanganRata(){
    for(int i=0; i<resultSearchClass; i++){
        arrayMutlak[i] = abs(resultArrayClassMedian[i] - resultMean);
        arrayFIxMutlak[i] = arrayFrekuensiInterval[i]  * arrayMutlak[i];
        resultArrayFIxMutlak += arrayFIxMutlak[i];
    }
    resultSimpanganRata = resultArrayFIxMutlak / totalData;
    return 0;
}

float DataKelompok :: searchStandarDeviasi(){
    for(int i=0; i<resultSearchClass; i++){
        arrayMutlakPow[i] = pow(arrayMutlak[i],2);
        resultArrayMutlakPow += arrayMutlakPow[i];
    }
    resultStandarDeviasi = sqrt((totalData * resultArrayMutlakPow) / (totalData - 1));
    return 0;
}

float DataKelompok :: searchKoefisien(){
    resultKoefisien = (resultStandarDeviasi/resultMean)*100;
    return 0;
}

//Tampilkan Tabel Semua Hasil
void DataKelompok :: showResulatAll(){
    cout << setiosflags(ios::left) << setw(2) << " " << setw(15) << "Kelas";
    cout << setiosflags(ios::left) << setw(20) << "Interval";
    cout << setiosflags(ios::left) << setw(10) << "FI";
    cout << setiosflags(ios::left) << setw(10) << "FK >";
    cout << setiosflags(ios::left) << setw(10) << "FK <";
    cout << setiosflags(ios::left) << setw(13) << "FR >";
    cout << setiosflags(ios::left) << setw(13) << "FR <";
    cout << setiosflags(ios::left) << setw(10) << "LCL";
    cout << setiosflags(ios::left) << setw(13) << "UCL";
    cout << setiosflags(ios::left) << setw(13) << "LCB";
    cout << setiosflags(ios::left) << setw(10) << "UCB";
    cout << setiosflags(ios::left) << setw(10) << "CM";
    cout << setiosflags(ios::left) << setw(10) << "FI.CM";
    cout << setiosflags(ios::left) << setw(10) << "CM-XBar";
    cout << setiosflags(ios::left) << setw(10) << "Multak";
    cout << setiosflags(ios::left) << setw(15) << "FI.Mutlak";
    cout << setiosflags(ios::left) << setw(10) << "CM-XBar2";
    cout << endl;
    cout << "===========================================================================================================================================================================================================" << endl;
    for(int i=0; i<resultSearchClass;i++){
        cout << setiosflags(ios::left) << setw(2) << " " << setw(15)  << i+1;
        for(int j=0; j<2; j++){
            if(j%2){
                cout << setiosflags(ios::left) << setw(17) << arrayInterval[i][j];
                continue;
            }
            cout << setiosflags(ios::left) << arrayInterval[i][j] << " ";
        }
        cout << setiosflags(ios::left) << setw(10) << arrayFrekuensiInterval[i];
        cout << setiosflags(ios::left) << setw(10) << arrayFrekuensiKomulatifP[i];
        cout << setiosflags(ios::left) << setw(10) << arrayFrekuensiKomulatifN[i];
        cout << setiosflags(ios::left) << setw(13) << arrayFrekuensiRelatifP[i];
        cout << setiosflags(ios::left) << setw(13) << arrayFrekuensiRelatifN[i];
        cout << setiosflags(ios::left) << setw(10) << arrayLowerClassLimit[i];
        cout << setiosflags(ios::left) << setw(13) << arrayUpperClassLimit[i];
        cout << setiosflags(ios::left) << setw(13) << arrayLowerClassBoundary[i];
        cout << setiosflags(ios::left) << setw(10) << arrayUpperClassBoundary[i];
        cout << setiosflags(ios::left) << setw(10) << resultArrayClassMedian[i];
        cout << setiosflags(ios::left) << setw(10) << resultArrayFIxCM[i];
        cout << setiosflags(ios::left) << setw(10) << resultArrayClassMedian[i] - resultMean;
        cout << setiosflags(ios::left) << setw(10) << arrayMutlak[i];
        cout << setiosflags(ios::left) << setw(15) << arrayFIxMutlak[i];
        cout << setiosflags(ios::left) << setw(10) << arrayMutlakPow[i];
        cout << endl;
    }
    cout << "===========================================================================================================================================================================================================" << endl;
    cout << "[RESULT] Jumlah Kelas \t\t\t: " << resultSearchClass << endl;
    cout << "[RESULT] Range Interval \t\t: " << resultSearchIntervalClass << endl;
    cout << "[RESULT] Total Frekuensi Interval \t: " << totalResultarrayFrekuensiInterval << endl;
    cout << "[RESULT] Total FI.CM \t\t\t: " << totalResultArrayFIxCM << endl;
    cout << "[RESULT] Mean (XBar) \t\t\t: " << resultMean << endl;
    cout << "[RESULT] Nilai Jarak \t\t\t: " << resultNilaiJarak << endl;
    cout << "[RESULT] Total FI.Mutlak \t\t: " << resultArrayFIxMutlak << endl;
    cout << "[RESULT] Simpangan Rata \t\t: " << resultSimpanganRata << endl;
    cout << "[RESULT] Standar Devisasi \t\t: " << resultStandarDeviasi << endl;
    cout << "[RESULT] Koefisien \t\t\t: " << resultKoefisien << endl;
    cout << endl;
}

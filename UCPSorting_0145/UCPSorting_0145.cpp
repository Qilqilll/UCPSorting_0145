// Jawaban
// 1.)
// 1. Bubble Sort membandingkan dua elemen berturut-turut dalam array.
// 2. Jika elemen pertama lebih besar atau lebih kecil dari elemen kedua, keduanya ditukar.
// 3. Proses ini diulang untuk setiap pasangan elemen dalam array hingga seluruh array diperiksa.
// 4. Algoritma memulai iterasi berikutnya dari elemen pertama setelah satu iterasi selesai.
// 5. Algoritma selesai ketika tidak ada pertukaran yang dilakukan pada satu iterasi, menunjukkan bahwa array sudah terurut.


//2.)
// 1. Algoritma Shell Sort menentukan jarak awal antara elemen-elemen yang akan dibandingkan.
// 2. Kemudian, algoritma membandingkan dan jika perlu menukar elemen yang terpisah dengan jarak tersebut.
// 3. Proses ini diulangi dengan mengurangi jarak secara berulang hingga mencapai gap minimum(biasanya 1).
// 4. Algoritma mengulangi proses pembandingan dan pertukaran untuk setiap nilai gap yang berkurang.
// 5. Algoritma selesai ketika seluruh elemen telah dibandingkan dan ditukar dengan benar untuk setiap nilai gap, termasuk ketika gap mencapai nilai minimum(1).

// 3.)
// selectionsort Bekerja dengan cara mencari elemen minimum/maksimum dan menukarnya dengan elemen pertama.
// perbandingan dan penukaran dilakukan pada saat iterasi untuk menentukan elemen minimum/maksimum dan saat penukaran

#include <iostream>
using namespace std;

void shellSort(int aqil[], int length) {
   
    for (int interval = length / 2; interval > 0; interval /= 2) {
        
        for (int i = interval; i < length; i++) {
            int temp = aqil[i];
            int j;
            
            for (j = i; j >= interval && aqil[j - interval] > temp; j -= interval) {
                aqil[j] = aqil[j - interval];
            }
            aqil[j] = temp;
        }
    }
}

int main() {
    int length;
    cout << "Masukkan jumlah elemen array: " << endl;
    cin >> length;

    int aqil[length];

   
    cout << "Masukkan data untuk array :" << endl;
    for (int i = 0; i < length; ++i) {
        cout << "Data ke-" << i + 1 << ": ";
        cin >> aqil[i];
    }

    
    cout << "Array sebelum diurutkan: ";
    for (int i = 0; i < length; ++i) {
        cout << aqil[i] << " ";
    }
    cout << endl;

    
    shellSort(aqil, length);

    
    cout << "Array setelah diurutkan: ";
    for (int i = 0; i < length; ++i) {
        cout << aqil[i] << " ";
    }
    cout << endl;

    return 0;
}

//find the minimum value in arr 
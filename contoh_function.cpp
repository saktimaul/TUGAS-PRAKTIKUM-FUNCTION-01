#include <iostream>
using namespace std;

void hitungAverage(int jumlah, int banyakData) {
    double rata;
    cout << "Jumlah Angka = " << jumlah << endl;
    cout << "Banyak Data = " << banyakData << endl;
    rata = (double)jumlah / (double)banyakData;
    cout << "Rata-ratanya = " << rata << endl;
}

int main() {
    int input = 0;
    int jumlah = 0;
    int banyakData = 0;

    cout << "Masukkan data" << endl;

    for (int i = 0;i < 3;i++) {
        cin >> input;
        jumlah += input;
        banyakData++;
    }

    hitungAverage(jumlah, banyakData);

    return 0;
}
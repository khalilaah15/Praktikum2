// SOAL : Buat program yang menerima input panjang, lebar, dan tinggi sebuah balok. Program harus menghitung volume dan luas permukaan balok, kemudian menampilkan hasilnya dengan format yang rapi.
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double panjang; 
    double lebar;
    double tinggi;
    double volume;
    double luas;

    cout << "Masukkan Nilai Panjang Balok: ";
    cin >> panjang;
    cout << "Masukkan Nilai Lebar Balok: ";
    cin >> lebar;
    cout << "Masukkan Nilai tinggi Balok: ";
    cin >> tinggi;

    volume = panjang * lebar * tinggi;
    luas = 2 * (panjang * lebar + panjang * tinggi + lebar * tinggi);

    cout << right << setw(20) << "Panjang Balok  |" << setw(20) << "Lebar Balok  |" << setw(20) << "Tinggi Balok  |" << setw(20) << "Volume Balok  |" << setw(20) << "Luas Balok" << endl;
    cout << right << setw(17) << panjang << "  |" << setw(17) << lebar << "  |" << setw(17) << tinggi << "  |" << setw(17) << volume << "  |" << setw(17) << luas  << endl;

    return 0;
}


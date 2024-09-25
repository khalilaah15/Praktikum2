// SOAL : Buat program yang menerima input panjang, lebar, dan tinggi ruangan dalam meter. Program harus menghitung luas permukaan total dinding ruangan, jumlah liter cat yang dibutuhkan (dengan asumsi 1 liter cat dapat mengecat 10 m²), dan total biaya untuk membeli cat berdasarkan harga per liter. Program akan menampilkan hasil dengan format desimal dua digit.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double panjang;
    double lebar;
    double tinggi;
    double luas;
    double jumlahLiterCat;
    double hargaCat;

    cout << "Masukkan Nilai Panjang Balok: ";
    cin >> panjang;
    cout << "Masukkan Nilai Lebar Balok: ";
    cin >> lebar;
    cout << "Masukkan Nilai tinggi Balok: ";
    cin >> tinggi;

    luas = 2 * (panjang * lebar + panjang * tinggi + lebar * tinggi);
    jumlahLiterCat = luas / 10;
    hargaCat = jumlahLiterCat * 5000;

    cout << right << setw(20) << "Panjang Balok  |" << setw(20) << "Lebar Balok  |" << setw(20) << "Tinggi Balok  " << endl;
    cout << right << setw(17) << panjang << "  |" << setw(17) << lebar << "  |" << setw(17) << tinggi << "  " << endl;
    cout << left << setw(25) << "Luas Permukaan dinding" << ": " << luas << endl;
    cout << left << setw(25) << "Jumlah Liter Cat" << ": " << jumlahLiterCat << endl;
    cout << left << setw(25) << "Total Biaya" << ": Rp." << fixed
         << setprecision(2) << hargaCat << endl;

    return 0;
}
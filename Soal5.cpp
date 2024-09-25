// SOAL : Buat program yang menerima input jumlah uang dalam Rupiah dan kurs konversi ke Dollar. Program harus menghitung jumlah dalam Dollar dan menampilkan hasilnya dengan dua digit desimal.
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double jumlahRupiah; 
    double jumlahDolar;

    cout << "Masukkan Nominal Rupiah: ";
    cin >> jumlahRupiah;

    jumlahDolar = jumlahRupiah / 15000;

    cout << fixed << setprecision(2);
    cout << right << setw(25) << "Nominal Rupiah  |" << setw(25) << "Nominal Dolar" << endl;
    cout << right << setw(22) << jumlahRupiah << "  |" << setw(22) << jumlahDolar << endl;

    return 0;
}
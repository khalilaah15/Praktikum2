// SOAL : Buat program yang menerima input jarak tempuh (dalam km), konsumsi bahan bakar per km, dan harga bahan bakar per liter. Program harus menghitung total biaya bahan bakar untuk perjalanan dan menampilkannya dengan format mata uang.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double jarakTempuh;
    double konsumsiBahanBakar;
    double hargaBahanBakar;
    double kebutuhanBahanBakar;
    double totalBiaya;

    cout << "Masukkan Jarak Tempuh (km): ";
    cin >> jarakTempuh;
    cout << "Masukkan Konsumsi Bahan Bakar per/km: ";
    cin >> konsumsiBahanBakar;
    cout << "Masukkan Harga Bahan Bakar per/liter: ";
    cin >> hargaBahanBakar;

    kebutuhanBahanBakar = jarakTempuh * konsumsiBahanBakar;
    totalBiaya = kebutuhanBahanBakar * hargaBahanBakar;

    cout << left;
    cout << setw(20) << "Total biaya kebutuhan bahan bakar" << ": " << fixed
         << setprecision(2) << "Rp."<< totalBiaya<< endl;

    return 0;
}

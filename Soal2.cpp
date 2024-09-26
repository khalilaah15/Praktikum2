//SOAL : Buat program yang menerima input nama karyawan, jumlah jam kerja, dan tarif perjam. Program harus menghitung gaji total setiap karyawan dan menampilkan output dengan format tabel yang rapi menggunakan manipulators.
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string fullName;
    double jamKerja; 
    double tarif;
    double gajiTotal;

    cout << "Masukkan Nama Lengkap Karyawan: ";
    getline(cin, fullName);
    cout << "Masukkan Durasi Jam Kerja: ";
    cin >> jamKerja;
    cout << "Masukkan Durasi Tarif perjam: ";
    cin >> tarif;

    gajiTotal = jamKerja * tarif;

    cout << right << setw(25) << "Nama Karyawan  |" << setw(25) << "Durasi Jam Kerja  |" << setw(25) << "Gaji Karyawan" << endl;
    cout << right << setw(22) << fullName << "  |" << setw(22) << jamKerja << "  |" << setw(20) << gajiTotal << endl;

    return 0;
}

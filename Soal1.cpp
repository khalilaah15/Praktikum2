//SOAL : Ganti main program tersebut sehingga bisa menerima input dari pengguna (gunakan cin) dan menampilkan hasil sesuai format yang sama.
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
    string fullName;
    int age;
    float height;
    double averageScore;
    bool isPassed = true;

    cout << "Masukkan Nama Lengkap :";
    cin.ignore();
    getline(cin, fullName);
    cout << "Masukkan Umur :";
    cin >> age;
    cout << "Masukkan Tinggi Badan :";
    cin >> height;
    cout << "Masukkan Nilai Rata-Rata :";
    cin >> averageScore;

    cout << left;
    cout << setw(20) << "Nama Lengkap" << ": " << fullName << endl;
    cout << setw(20) << "Usia" << ": " << age << " tahun " << endl;
    cout
        << setw(20) << "Tinggi Badan" << ": " << fixed
        << setprecision(1) << height << " cm" << endl;
    cout << setw(20) << "Nilai Rata-Rata" << ": " << fixed << setprecision(2) << averageScore << endl;
    cout << setw(20) << "Status Kelulusan" << ": " << (isPassed ? "Lulus" : "Tidak Lulus") << endl;
    return 0;
}
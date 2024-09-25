// Soal : Buat program yang menampilkan tabel konversi dari meter ke sentimeter, millimeter, dan kilometer untuk nilai dari 1 hingga 10 meter. Gunakan manipulators untuk menyusun tabel dengan rapi.
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;
int main()
{

    float meter;
    float sentimeter;
    float milimeter;
    double kilometer;

    cout << "Masukkan nilai Meter :";
    cin >> meter;

    sentimeter = meter * 100;
    milimeter = sentimeter * 10;
    kilometer = meter / 1000;

    cout << right << setw(15) << "Meter" << setw(15) << "Sentimeter" << setw(15) << "Milimeter" << setw(15) << "Kilometer" << endl;
    cout << setw(15) << meter << setw(15) << sentimeter << setw(15) << milimeter << setw(15) << kilometer << endl;

    return 0;
}
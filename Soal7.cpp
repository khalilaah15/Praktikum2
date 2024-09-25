// SOAL : Buat program yang menerima input suhu harian selama 5 hari berturut-turut dan menghitung rata-rata suhu. Program harus menampilkan setiap input suhu dan rata-rata akhir dengan presisi satu digit desimal.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double suhuHari1;
    double suhuHari2;
    double suhuHari3;
    double suhuHari4;
    double suhuHari5;
    double rataSuhu;

    cout << "Masukkan Nilai Suhu Hari Pertama: ";
    cin >> suhuHari1;
    cout << "Masukkan Nilai Suhu Hari Kedua: ";
    cin >> suhuHari2;
    cout << "Masukkan Nilai Suhu Hari Ketiga: ";
    cin >> suhuHari3;
    cout << "Masukkan Nilai Suhu Hari Keempat: ";
    cin >> suhuHari4;
    cout << "Masukkan Nilai Suhu Hari Kelima: ";
    cin >> suhuHari5;

    rataSuhu = (suhuHari1 + suhuHari2 + suhuHari3 + suhuHari4 + suhuHari5) / 5;

    cout << right << setw(15) << "Suhu Hari Pertama  |" << setw(15) << "Suhu Hari Kedua  |" << setw(15) << "Suhu Hari Ketiga  |" << setw(15) << "Suhu Hari Keempat  |" << setw(15) << "Suhu Hari Kelima" << endl;
    cout << right << setw(17) << suhuHari1 << "  |" << setw(15) << suhuHari2 << "  |" << setw(16) << suhuHari3 << "  |" << setw(17) << suhuHari4 << "  |" << setw(15) << suhuHari5 << endl;
    cout << setw(20) << "Rata-rata suhu ruangan" << ": " << fixed
         << setprecision(1) << rataSuhu << endl;

    return 0;
}
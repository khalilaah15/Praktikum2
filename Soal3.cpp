// SOAL : Buat program yang menerima input harga barang dan persentase diskon. Program harus menghitung harga setelah diskon dan menampilkan hasilnya dalam format dengan dua digit di belakang koma.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string namaBarang;
    double hargaBarang; 
    double hargaDiskon;
    double hargaSetelahDiskon;

    cout << "Masukkan Nama Barang: ";
    getline(cin, namaBarang);
    cout << "Masukkan Harga Barang: ";
    cin >> hargaBarang;

    hargaDiskon = hargaBarang * 0.10;
    hargaSetelahDiskon = hargaBarang - hargaDiskon;

    cout << fixed << setprecision(2);
    cout << right << setw(25) << "Nama Produk  |" << setw(25) << "Harga Barang  |" << setw(25) << "Gaji Diskon  |" << setw(25) << "Harga Jual" << endl;
    cout << right << setw(22) << namaBarang << "  |" << setw(22) << hargaBarang << "  |" << setw(22) << hargaDiskon << "  |" << setw(22) << hargaSetelahDiskon << endl;

    return 0;
}


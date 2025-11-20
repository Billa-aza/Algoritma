#include <iostream>
using namespace std;

// Struct Alamat
struct Alamat {
    string kota;
    string provinsi;
};

struct Mahasiswa {
    string nama;
    string nim;
    Alamat alamat;
};

int main() {
    Mahasiswa mhs;

    cout << "Masukkan nama mahasiswa: ";
    getline(cin, mhs.nama);
    cout << "Masukkan NIM mahasiswa: ";
    getline(cin, mhs.nim);

    cout << "Masukkan kota: ";
    getline(cin, mhs.alamat.kota);
    cout << "Masukkan provinsi: ";
    getline(cin, mhs.alamat.provinsi);

    cout << "\nData Mahasiswa:\n";
    cout << "Nama    : " << mhs.nama << endl;
    cout << "NIM     : " << mhs.nim << endl;
    cout << "Kota    : " << mhs.alamat.kota << endl;
    cout << "Provinsi: " << mhs.alamat.provinsi << endl;

    return 0;
}

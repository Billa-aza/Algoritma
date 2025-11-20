#include <iostream>
#include <iomanip>
using namespace std;

struct Mahasiswa {
    string nama;
    float nilai_akhir;
};

int main() {
    Mahasiswa mhs[5];
    float totalNilai = 0.0;

    // Input data mahasiswa
    for (int i = 0; i < 5; i++) {
        cout << "Masukkan nama mahasiswa ke-" << i + 1 << ": ";
        getline(cin, mhs[i].nama);
        cout << "Masukkan nilai akhir mahasiswa ke-" << i + 1 << ": ";
        cin >> mhs[i].nilai_akhir;
        cin.ignore(); 
    }

    for (int i = 0; i < 5; i++) {
        totalNilai += mhs[i].nilai_akhir;
    }

    float rataRata = totalNilai / 5;

    cout << fixed << setprecision(2);
    cout << "\nNilai rata-rata kelas adalah: " << rataRata << endl;

    return 0;
}

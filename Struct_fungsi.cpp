#include <iostream>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    float nilai_akhir;
};


void tampilData(Mahasiswa mhs) {
    cout << "Nama        : " << mhs.nama << endl;
    cout << "NIM         : " << mhs.nim << endl;
    cout << "Nilai Akhir : " << mhs.nilai_akhir << endl;
}

int main() {
    Mahasiswa mhs;
    char lanjut;
    do{
    cout << "Masukkan nama mahasiswa: ";
    getline(cin, mhs.nama);
    cout << "Masukkan NIM mahasiswa: ";
    getline(cin, mhs.nim);
    cout << "Masukkan nilai akhir mahasiswa: ";
    cin >> mhs.nilai_akhir;

    cout << "\nData mahasiswa yang dinput:\n";
    tampilData(mhs);

    cout <<"===================================" <<endl;
    cout <<"ingin memasukan data mahasiswa lagi? (y/n): ";
    cin >> lanjut;
    
    cin.ignore();
    } while (lanjut == 'y' || lanjut == 'N');
    
    cout << "program selesai. Terima kasih" <<endl;

    return 0;
}

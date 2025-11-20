#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    float ipk;
};

int main() {
    Mahasiswa mhs1;
    Mahasiswa mhs2;

    cout <<"======================================================="<<endl;
    mhs1.nama = "Ahmad Ferdiyansah";
    mhs1.nim = "20250801065";
    mhs1.ipk = 4.00;

    cout << "Nama :" << mhs1.nama <<endl;
    cout << "NIM :" << mhs1.nim <<endl;
    cout << "Ipk :" << mhs1.ipk <<endl;

    cout <<"======================================================"<<endl;
    mhs2.nama = "Ahmad Ferdiyansah";
    mhs2.nim = "20250801065";
    mhs2.ipk = 3.85;

    cout <<"Nama :" << mhs2.nama <<endl;
    cout <<"NIM :" << mhs2.nim << endl;
    cout <<"Ipk :" << mhs2.ipk <<endl;

    return 0;
}
#include <iostream>
using namespace std;

int maxSize;     
int topIndex = -1; 
int *stackArr;     

bool isEmpty() {
    return topIndex == -1;
}

bool isFull() {
    return topIndex == maxSize - 1;
}

void push(int data) {
    if (isFull()) {
        cout << "Stack penuh! Tidak bisa menambah data.\n";
    } else {
        topIndex++;
        stackArr[topIndex] = data;
        cout << "Data " << data << " berhasil ditambahkan ke stack.\n";
    }
}

void pop() {
    if (isEmpty()) {
        cout << "Stack kosong! Tidak ada data yang bisa dihapus.\n";
    } else {
        cout << "Data " << stackArr[topIndex] << " berhasil dihapus.\n";
        topIndex--;
    }
}

void peek() {
    if (isEmpty()) {
        cout << "Stack kosong! Tidak ada elemen teratas.\n";
    } else {
        cout << "Elemen teratas: " << stackArr[topIndex] << endl;
    }
}

void size() {
    cout << "Jumlah elemen saat ini: " << topIndex + 1 << endl;
}

int main() {
    cout << "=== PROGRAM STACK MENGGUNAKAN ARRAY ===\n";
    cout << "Masukkan kapasitas maksimal stack: ";
    cin >> maxSize;

    stackArr = new int[maxSize]; // alokasi array dinamis

    int pilihan, data;

    do {
        cout << "\n=== MENU STACK ===\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. IsEmpty\n";
        cout << "5. Size\n";
        cout << "6. Exit\n";
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan data: ";
                cin >> data;
                push(data);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                if (isEmpty())
                    cout << "Stack kosong.\n";
                else
                    cout << "Stack tidak kosong.\n";
                break;
            case 5:
                size();
                break;
            case 6:
                cout << "Keluar dari program...\n";
                break;
            default:
                cout << "Pilihan tidak valid!\n";
        }

    } while (pilihan != 6);

    delete[] stackArr; // membebaskan memori
    return 0;
}

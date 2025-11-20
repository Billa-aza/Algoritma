#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    stack<char> S;
    string kalimat;

    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    for (char c : kalimat) {
        S.push(c);
    }

   
    cout << "Kalimat terbalik: ";
    while (!S.empty()) {
        cout << S.top();
        S.pop();
    }

    cout << endl;
    return 0;
}

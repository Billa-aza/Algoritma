#include <iostream>
#include <stack>
#include <string>
using namespace std;


bool isMatching(char buka, char tutup) {
    return (buka == '(' && tutup == ')') ||
           (buka == '{' && tutup == '}') ||
           (buka == '[' && tutup == ']');
}

bool cekValiditas(string ekspresi) {
    stack<char> S;

    for (char c : ekspresi) {
        if (c == '(' || c == '{' || c == '[') {
            S.push(c);
        }
        
        else if (c == ')' || c == '}' || c == ']') {
            if (S.empty()) return false;      
            
            char top = S.top();
            S.pop();
            
            if (!isMatching(top, c)) return false;  
        }
    }

    
    return S.empty();
}

int main() {
    string ekspresi;

    cout << "Masukkan ekspresi: ";
    getline(cin, ekspresi);

    if (cekValiditas(ekspresi))
        cout << "Valid\n";
    else
        cout << "Tidak Valid\n";

    return 0;
}

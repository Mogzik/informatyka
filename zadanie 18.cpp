#include <iostream>
using namespace std;

int main() {
    double a, b, result;
    
    cout << "Program wykonujacy dzielenie." << endl;
    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
    
    if (b == 0) {
        cout << "Blad! Dzielenie przez 0." << endl;
    } else {
        result = a / b;
        cout << "Wynik dzielenia a/b = " << result << endl;
    }
    
    return 0;
}

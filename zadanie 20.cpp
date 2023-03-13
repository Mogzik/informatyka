#include <iostream>
using namespace std;

int main() {
    float bok, pole;
    cout << "Podaj bok kwadratu: ";
    cin >> bok;
    if (bok > 0) {
        pole = bok * bok;
        cout << "Pole kwadratu wynosi: " << pole << endl;
    } else {
        cout << "Bok musi byc wiekszy od zera" << endl;
    }
    return 0;
}

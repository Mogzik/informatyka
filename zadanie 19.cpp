#include <iostream>
using namespace std;

int main() {
    int liczba;
    cout << "Podaj liczbe: ";
    cin >> liczba;

    if (liczba > 0) {
        cout << "Liczba jest wieksza od zera" << endl;
    } else {
        if (liczba < 0) {
            cout << "Liczba jest mniejsza od zera" << endl;
        } else {
            cout << "Liczba jest rowna zero" << endl;
        }
    }

    return 0;
}

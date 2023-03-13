#include <iostream>

using namespace std;

int main() {
    int N, wyn = 0, d = 2;
    cout << "Podaj liczbe calkowita wieksza od 0: ";
    cin >> N;

    while (d <= N/2) {
        if (N % d == 0) {
            wyn++;
        }
        d++;
    }

    cout << "Liczba dzielnikow liczby " << N << " wynosi: " << wyn << endl;
    return 0;
}

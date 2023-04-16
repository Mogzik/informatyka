#include <iostream>
using namespace std;

int main() {
    char repeat;
    do {
        float side, area;
        cout << "Podaj bok kwadratu w centymetrach: ";
        cin >> side;
        if (side > 0) {
            area = side * side;
            cout << "Pole kwadratu = " << area << " cm^2" << endl;
        } else {
            cout << "Bok musi byc wiekszy od zera" << endl;
        }
        cout << "Jesli powtorzyc program wcisnij t(tak),\nw przeciwnym wypadku wcisnij dowolny klawisz literowy:\n";
        cin >> repeat;
    } while (repeat == 't' || repeat == 'T');
    return 0;
}

#include <iostream>
using namespace std;

int main() {
char again;
double x, y;
do {
cout << "Podaj x: ";
cin >> x;
if (x <= -1) {
y = 0;
} else if (x > -1 && x < 0) {
y = -x;
} else if (x >= 0 && x < 1) {
y = x;
} else if (x >= 1) {
y = 2 * x - 1;
}
cout << "f(" << x << ") = " << y << endl;
cout << "Czy chcesz powtorzyc program? (J/N): ";
cin >> again;
} while (again == 'J' || again == 'j');

return 0;
}

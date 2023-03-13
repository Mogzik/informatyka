#include <iostream>

using namespace std;

int main()
{
int m, n, r;
cout << "Podaj liczbe n: ";
cin >> n;
cout << "Podaj liczbe m: ";
cin >> m;

if (m > n)
{
    int temp = m;
    m = n;
    n = temp;
}

while (m > 0)
{
    r = n % m;
    n = m;
    m = r;
}

cout << "NWD to: " << n << endl;

return 0;
}

#include <iostream>

using namespace std;

int main()
{
int m, n, r;
cout << "Podaj pierwsza liczbe n: ";
cin >> n;
cout << "Podaj druga liczbe mniejsza lub rowna pierwszej m: ";
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

cout << "NWD to: " <<r<< endl;

return 0;
}




#include <iostream>

using namespace std;

int main()
{
int m, n, nwd;
cout << "Podaj pierwsza liczbe n: ";
cin >> n;
cout << "Podaj druga liczbe mniejsza lub rowna pierwszej m: ";
cin >> m;
cout<<"nwd("<<n<<","<<m<<") = "<<nwd<<(n,m);
cin>> nwd;

if (m > n)
{
    int temp = m;
    m = n;
    n = temp;
}

while (m > 0)
{
    nwd = n % m;
    n = m;
    m = nwd;
}

return 0;
}

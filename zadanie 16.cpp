#include <iostream>

using namespace std;


int nwd(int m, int n)
{


while (n!=m)
if(n>m)
n-=m;
else
m-=n;
return n;
}

int main()
{
	int n,m;
cout << "Podaj pierwsza liczbe n: ";
cin >> n;
cout << "Podaj druga liczbe mniejsza lub rowna pierwszej m: ";
cin >> m;
cout<<"nwd("<<m<<","<<n<<") = "<<nwd(n,m);
return 0;
}

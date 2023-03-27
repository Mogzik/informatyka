#include <iostream>
#include <string>

using namespace std;

int main()
{
    string kod;
    char pierwsza, druga;
    
    cout << "Podaj kod dwu-literowy: ";
    cin >> kod;
    
    pierwsza = tolower(kod[0]);
    druga = tolower(kod[1]);
    
    if (pierwsza == 'j' && druga == 'k') {
        cout << "DZIEN DOBRY" << endl;
    } else {
        cout << "ZEGNAJ" << endl;
    }
   
    
    return 0;
}

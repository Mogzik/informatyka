#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char *[])
{
    system("chcp 1250");
    system("cls");

    int liczba;

    for(;;)
    {
        do
        {

            cout << "DZIEŃ DOBRY" << endl;
            cout << "Będe powtarzal program, az do wczytania liczb z przedziału <-3, 2)" << endl;
            cout << "Podaj liczbę x: ";
            cin >> liczba;
            cout << endl;

        } while (liczba < -3 || liczba > 2);

        cout<<"Jezeli chcesz powtorzyc program wcisnij klawisz t\nw przeciwnym wypadku wcisnij dowolny klawisz literowy"<<endl;

        getchar();

        if (getchar() != 't')
        {
            exit(0);
        }
        system("cls");
        
    }
}

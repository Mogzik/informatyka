#include <iostream>
using namespace std;

int main() {
  int liczba;
  cout << "Bede sprawdzal czy liczba nalezy do przedzialu <-5,6)." << endl;
  cout << "Podaj liczbe: ";
  cin >> liczba;
  if (liczba >= -5 && liczba < 6) {
    cout << "Liczba nalezy do przedzialu <-5,6)." << endl;
  } else {
    cout << "Liczba nie nalezy do przedzialu <-5,6)." << endl;
  }
  return 0;
}

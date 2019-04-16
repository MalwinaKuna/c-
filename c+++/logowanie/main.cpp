#include <iostream>

using namespace std;
string login, haslo;
int main()
{
    cout << "Podaj login: ";
    cin >> login;
    cout << "Podaj haslo: ";
    cin >> haslo;

    if((login=="Admin")&&(haslo=="pass"))
    {
    cout<<"Pomyslne logowanie";
    }
    else
    {
    cout<<"Niepoprawny login lub haslo.";
    }

    return 0;
}

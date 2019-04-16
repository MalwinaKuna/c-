#include <iostream>

using namespace std;
string login, haslo;
int main()
{
    cout << "Podaj login: ";
    cin >> login;
    cout << "Podaj haslo: ";
    cin >> haslo;

    if((login=="Mis")&&(haslo=="kuna"))
    {
    cout<<"Pomyslne logowanie, poprosze o batonika :)";
    }
    else
    {
    cout<<"Niepoprawny login lub haslo, zadam palety batonikow 8)";
    }

    return 0;
}

#include <iostream>

using namespace std;

string PIN;

int main()
{
    cout << "Witaj w naszym banku!" << endl;
    cout << "Podaj numer PIN:";
    cin >> PIN;

    if(PIN=="2393")
    {
        cout<<"Poprawny PIN, masz buzi od Kunki :* ";

    }
    else
        {
            cout<<"Niepoprawny PIN, nalezy sie milion funtow cypryjskich na konto supermalenkiej Kunki!";
        }

    return 0;
}

#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;
string imie; int liczba;
int main()
{
   for(int i=6; i>=0; i--)
   {
       Sleep(1000);
       system("cls");
       cout << i<<endl;

    }
    system("cls");
     cout <<"JEBUT!"<<endl;

     cout<<"Podaj imie: ";
     cin >>imie;
     cout<<"Podaj dodatnia liczbe calkowita: ";
     cin>>liczba;

     for(int i=1; i<=liczba; i++)
     {
     cout<<i<<". "<<imie<<endl;
     }

    return 0;
}

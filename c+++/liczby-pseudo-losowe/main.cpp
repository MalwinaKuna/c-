#include <iostream>
#include <cstdlib>
#include <time.h>
#include <stdio.h>

using namespace std;
int liczba, strzal, ile_prob=0;

int main()
{
    cout << "Witaj! Pomyslalam sobie liczbe z zakresu od 1 do 100" << endl;
    srand(time(NULL));
    liczba = rand()%100+1;
    cout<<liczba<<endl;

    while(strzal!=liczba)
    {
        ile_prob++;

         cout<<"Sprobuj odgadnac ta liczbe: ";
      cin>>strzal;

        if(strzal==liczba)
        {
            cout<<"UDALO SIE za "<<ile_prob<<" razem."<<endl;
        }

        else if(strzal<liczba)
        {
            cout<<"Liczba jest za mala, to Twoj "<<ile_prob<<" raz.";
        }
        else if (strzal>liczba)
        {
         cout<<"Liczba jest za duza, to Twoj "<<ile_prob<<" strzal."<<endl;
        }


    }


 getchar();getchar(); //dla pewnosci 2 razy

    return 0;
}

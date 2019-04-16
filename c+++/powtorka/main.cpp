#include <iostream>
#include <stdio.h>
#include <time.h>
#include <cstdlib>
#include <windows.h>




using namespace std;
int liczba, strzal, ilosc_prob=0;
int main()
{
srand(time(NULL));
liczba= rand()%200+1;
cout<<liczba<<endl;

cout<<"Pomyslalam pewna liczbe w przedziale od 1 do 200"<<endl;


while(strzal!=liczba)
    {
        ilosc_prob++;
        cout<<"Sprobuj odgadnac te liczbe: ";
        cin>>strzal;

            if(strzal==liczba)
            {
                cout<<"Udalo sie za "<<ilosc_prob<<" razem"<<endl;
            }
            else if(strzal>liczba)
            {
                cout<<"Liczba jest za duza, to Twoja "<<ilosc_prob<<" proba"<<endl;
            }
            else if(strzal<liczba)
            {
                cout<<"Liczba jest za mala, to Twoja "<<ilosc_prob<<" proba"<<endl;
            }

    }




getchar();getchar();

    return 0;
}

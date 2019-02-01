#include <iostream>
#include <time.h>





using namespace std;

int strzal, liczba; int ile_prob=0;
int main()
{

  cout<<"Pomyslalam liczbe w zakresie od 200 do 700."<<endl;
  srand(time(NULL));
  liczba=rand()%500+200;

   while(strzal!=liczba)
{

ile_prob++;
cout<<liczba<<endl;
cout<<"SProbuj zgadnac jaka to liczba: ";
cin>>strzal;
        if(strzal==liczba)
        {
          cout<<"Udalo sie za "<<ile_prob<<" razem, gratulacje!";
        }

        else if(strzal>liczba)
        {
        cout<<"Nie udalo sie, liczba jest za duza. Jest to twoja "<<ile_prob<<" proba.";
        }

        else if(strzal<liczba)
        {
        cout<<"Nie udalo sie, twoja liczba jest za mala! jest to twoja "<<ile_prob<<" proba";
        }



}

  getchar();getchar();
    return 0;

}

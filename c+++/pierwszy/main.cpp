#include<iostream>
#include<time.h>


#include<string>
#include<windows.h>

using namespace std;

int main()
{




   srand(time(NULL));

   int strzal=0;
   int prawidlowaliczba =rand()%100+1;
   int liczba=0;
   int Game=0;
   int proba=0;
   int wybor;






   cout <<"                          ZGADNIJ MOJA LICZBE."<<endl;
   cout <<"Wybierz rodzaj gry."<<endl;
   cout <<"___________________"<<endl;
   cout <<"1.Latwy(Liczba prob=20)"<<endl;
   cout <<"2.Sredni(liczba prob od 14 do 19)"<<endl;
   cout <<"3.Trudny(liczba prob od 10 do 13)"<<endl;
   cout <<"4.Bardzo trudny(liczba prob od 6 do 9)"<<endl;
   cout <<"5.Jeszcze Trudniejszy!! liczba prob od 3 do 5"<<endl;
   cout <<"6.Dowolna liczba prob"<<endl;
   cout <<"7.Wyjscie"<<endl;
   cin >>wybor;
   system("cls");
   switch(wybor)
   {


   case 1:

    {

       Game++;
       liczba=20;
 }
       break;
       case 2:

    {
    Game++;
    liczba=rand()%5+14;

}
       break;
       case 3:

     {
        Game++;
       liczba=rand()%3+10;

}
       break;
       case 4:
       {
    Game++;

       liczba=rand()%3+6;

}

       break;
       case 5:
       {
        Game++;



           liczba= rand()%2+3;

       }










           break;

    case 6:
    {
        cout <<"Wybierz liczbe prob od 1 do 101."<<endl;
        cin  >>liczba;
        if (liczba>0 && liczba <102 )
        {

        Game++;
        system("cls");
           }




}
break;
    case 7:
        {
            Game++;
            exit(0);
        }
        break;
       default:

      {


       exit(0);
}
}






   while(( Game==1 && strzal!=prawidlowaliczba ))
   {


       cout <<"Zgadnij jaka liczbe wylosowalem od 1 do 101."<<endl;
       cin >> strzal;
       if(strzal==prawidlowaliczba )
       {






       if(proba<2)
      {


        if(wybor==5)
        {


            cout <<"UDALO CI SIE!:D"<<endl;
            Sleep(4000);

            exit(0);
   }





       else if(wybor<5)
            {




              cout <<"WYGRYWASZ ZA PIERWSZYM RAZEM!!:D"<<endl;
         Sleep(2000);
         exit(0);
}
}


           else if(proba>=2 && proba<=5)
           {




         cout <<"Ale masz szczescie!  Wygrywasz po "<<proba<<" probie"<<endl;
         Sleep(2000);
         exit(0);
}


   else if(proba>5 or proba<=13)
   {



       cout <<"Gratuluje Wygranej po "<<proba<<" probie."<<endl;
         Sleep(2000);
         exit(0);

}
         else if(proba>14)
         {



             cout <<"EHHHHHHHH.  Wygrywasz dopiero po "<<proba<<" probie."<<endl;
             Sleep(1000);
             exit(0);
}
}








        if((strzal-5>=prawidlowaliczba && strzal-30<=prawidlowaliczba) && strzal<102 && strzal>0 )
       {






       if(liczba>4)
       {




           cout <<"Za duzo(pozostalo ci "<< liczba <<" prob)"<<endl;
}
     else if(liczba==2 or liczba==3 or liczba==4)
       {




       cout <<"Za duzo(pozostaly ci "<<liczba <<" proby)"<<endl;
}
 else  if(liczba==1)

   {


       cout <<"Za duzo(pozostala ci ostatnia proba)"<<endl;
}
}

          else     if ((strzal-30>=prawidlowaliczba&& strzal-50<=prawidlowaliczba)   && strzal<102 && strzal>0 )
       {




       if(liczba>4)
       {






           cout <<"Zdecydowanie za duzo(pozostalo ci "<<liczba<<" prob)"<<endl;
}

  else if(liczba==2 or liczba==3 or liczba==4)
   {




       cout <<"Zdecydowanie za duzo(pozostaly ci "<<liczba<<" proby)"<<endl;
}
  else if(liczba==1)
   {




       cout <<"Zdecydowanie za duzo(pozostala ci ostatnia proba)"<<endl;
}
}










       else if((strzal+30<prawidlowaliczba&& strzal+50>=prawidlowaliczba)   && strzal<102 && strzal>0 )
       {




       if(liczba>4)
       {






           cout <<"Zdecydowanie za malo(pozostalo ci "<<liczba<<" prob)"<<endl;
}

  else if(liczba==2 or liczba==3 or liczba==4)
   {




       cout <<"Zdecydowanie za malo(pozostaly ci "<<liczba<<" proby)"<<endl;
}
  else if(liczba==1)
   {





       cout <<"Zdecydowanie za malo(pozostala ci ostatnia proba)"<<endl;
   }
}


    if(((strzal+50<prawidlowaliczba  ) or  (strzal-50>prawidlowaliczba ))  && (strzal<102 && strzal>0))
       {





     if(liczba>4)
       {






           cout <<"MOCNO PRZESADZILES!(pozostalo ci "<<liczba<<" prob)"<<endl;
}

  else if(liczba==2 or liczba==3 or liczba==4)
   {




       cout <<"MOCNO  PRZESADZILES!(pozostaly ci "<<liczba<<" proby)"<<endl;
}
  else if(liczba==1)
   {




       cout <<"MOCNO PRZESADZILES!(pozostala ci ostatnia proba)"<<endl;
}
}
   if((strzal+5<prawidlowaliczba && strzal+30>=prawidlowaliczba)   && strzal<102 && strzal>0 )
       {




       if(liczba>4)
       {






           cout <<"Za malo(pozostalo ci "<<liczba<<" prob)"<<endl;
}

  else if(liczba==2 or liczba==3 or liczba==4)
   {




       cout <<"Za malo(pozostaly ci "<<liczba<<" proby)"<<endl;
}
  else if(liczba==1)
   {




       cout <<"Za malo(pozostala ci ostatnia proba)"<<endl;
}
}

    if(((strzal+5>=prawidlowaliczba && strzal<prawidlowaliczba   ) or (strzal-5<prawidlowaliczba && strzal>prawidlowaliczba ))   && strzal<102 && strzal>0 )
       {




       if(liczba>4)

       {





           cout <<"BARDZO BLISKO!!!(pozostalo ci "<<liczba<<" prob)"<<endl;
}

  else if(liczba==2 or liczba==3 or liczba==4)

   {



       cout <<"BARDZO BLISKO!!!(pozostaly ci "<<liczba<<" proby)"<<endl;
}
  else if(liczba==1)
   {




       cout <<"BARDZO BLISKO!!!(pozostala ci ostatnia proba)"<<endl;
}
}















         if(strzal>101 or strzal<1)
        {





            exit(0);
}









       proba++;
       liczba--;







       if(liczba+1==0 && liczba!=prawidlowaliczba)

   {

   Sleep(1000);
   cout <<"Przegrales  ):"<<endl;
   Sleep(1000);
   cout <<"Sprobuj jeszcze raz :)"<<endl;
   Sleep(1000);
   exit(0);
}







   }

return 0;
}﻿

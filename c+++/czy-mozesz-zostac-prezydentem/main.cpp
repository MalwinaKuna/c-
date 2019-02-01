#include <iostream>
#include <time.h>
using namespace std;
int wiek, lat, nadwyzka;
int main()
{
    cout<<"Czesc, napisz ile masz lat: ";
    cin>>wiek;

   if((wiek>18)&&(wiek<35))
    {

    int lat= 35-wiek;
cout<<"Jestes pelnoletnie ale nie mozesz zostac prezydentem. Bedzie to mozliwe dopiero za "<<lat<<" lat.";



    }
    else if(wiek<18)
    {
    int lat=35-wiek;
    cout<<"Jestes niepelnoletni i tym bardziej nie mozesz zostac prezydentem. Bedzie to mozliwe dopiero za "<<lat<<" lat."<<endl;
    }

    else if(wiek>35)
    {
    int lat=wiek-35;
    cout<<"Jestes pelnoletni i od "<<lat<<" lat mozesz byc prezydentem ;-)";}


getchar();getchar();


     return 0;

}

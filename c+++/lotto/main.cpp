#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <unistd.h>

using namespace std;
int liczba;
int main()
{
   //#include <thread> //nie potrzeba//
//#include <chrono> //nie potrzeba//
cout<<"Za chwile zwolni sie blokada losowania"<<endl;
usleep(1000000);

srand(time(NULL));
for(int i=1; i<=6; i++)
    {
        liczba = rand()%49+1;
        usleep(1000000); //na windowie to będzie Sleep(1000);//
        cout<<liczba<<endl;
        //fflush(stdout);//
    }
getchar();getchar();
    return 0;

}

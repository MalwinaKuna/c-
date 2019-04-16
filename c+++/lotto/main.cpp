#include <iostream>
#include <windows.h> //funkcja Sleep
#include <time.h> //funkcja Sleep
#include <stdio.h> //funkcja Sleep

using namespace std;
int liczba;
int main()
{
    cout<<"Witaj w losowaniu! Za 3 sekundy nastapi zwolnienie blokady";
    Sleep(3000);
    cout<<endl;

    srand(time(NULL)); //LICZBA PSEUDOLOSOWA
    for(int i=1; i<=6; i++)
    {
        liczba = rand()%49+1;
        Sleep(1000);
        cout<<liczba<<" "<<"\a"; // \ bo cos specjalnego i a bo alarm
    }
    getchar();getchar();
    return 0;
}

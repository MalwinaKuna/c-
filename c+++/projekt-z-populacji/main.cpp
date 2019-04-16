#include <iostream>

using namespace std;
int populacja=1, godzin=0;

int main()
{
    do
    {
        godzin++;
        populacja=populacja*2;
        cout<<"Liczebnosc bakterii wyniesie "<<populacja;
        cout<<" w "<<godzin<<" godzin."<<endl;
    }
      while(populacja<=1000000000);


    return 0;
}

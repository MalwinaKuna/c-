#include <iostream>

using namespace std;
int populacja=1, godzin=0;
int main()
{
do
{
godzin++;
populacja= populacja *2;
cout<<"Potrzeba " <<godzin<< " godzin aby populacja doszla do 100.";
}
while(populacja<100);

    return 0;
}

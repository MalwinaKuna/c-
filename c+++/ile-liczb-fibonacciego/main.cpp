#include <iostream>

using namespace std;
long double fib[100000]; int n;
int main()
{
    cout << "Ile liczb F... mam wyznaczyc: ";
    cin>>n;
    fib[0]=1;
    fib[1]=1;

    for(int i=1; i<n; i++)
    {
         fib[i] = fib [i-1] + fib[i-1];
    }

    for(int i=1; i<n; i++)
    {
         cout<<endl<<"liczba nr"<<i<<": "<<fib[i];
    }


    return 0;
}

#include <iostream>



using namespace std;
//A
int getA(int rok){
if(rok <=1582){
    return 15;
    }
if(rok<= 1699){
    return 22;
    }
if(rok<= 1899){
    return 23;
    }
if(rok<= 2199){
    return 24;}
if(rok<= 2299){
    return 25;}
if(rok<= 2399){
    return 26;}
if(rok<= 2499){
    return 25;}
return 0;
}

//B
int getB(int rok){
if(rok <=1582){
    return 6;
    }
if(rok<= 1699){
    return 2;
    }
if(rok<= 1799){
    return 3;
    }
if(rok<= 1899){
    return 4;
    }
if(rok<= 2099){
    return 5;
    }
if(rok<= 2199){
    return 6;
    }
if(rok<= 2299){
    return 0;
    }
if(rok<= 2499){
    return 1;
    }
return 0;
}

int wielkanoc(int rok){
    int a,b,c,d,e;

    a= rok % 19;
    b= rok % 4;
    c= rok % 7;
    d= (a*19 + getA(rok)) % 30;
    e= (2*b+4*c+6*d+ getB(rok)) % 7;

    if((d== 29 && e== 6)||(d== 28 && e==6)){
        d-=7;
    }
    return d+e;
}

int main()
{
    int rok, data;

    cout << "Podaj rok w zakresie 33-2499" << endl;
    cin>> rok;

    if((rok<33)||(rok > 2499)){
        cout<<"Podany rok nie jest w wymaganym zakresie"<<endl;
    }
    data= 22+ wielkanoc(rok);
    if(data>31){
        cout<<"Wielkanoc przypada "<<data%31<< " kwietnia"<<endl;
    }
    else{
        cout<<"Wielkanoc przypada "<<data<< " marca"<<endl;
    }

    return 0;
}

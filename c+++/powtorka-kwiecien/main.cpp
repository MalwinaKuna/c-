#include <iostream>

using namespace std;

int main()
{
    /*string PIN;
    cout<<"Witaj w banku kuny!"<<endl;
    cout << "Aby wyplacic gotowke wpisz poprawny PIN:) ";
    cin>>PIN;

    if(PIN == "6666"){
            cout<<"Poprawne pin."<<endl;
            cout<<"Wybierz z menu co chcesz dalej zrobic: "<<endl;

    }
    else{
        cout<<"Niepoprawne haslo, zostaly 1 proby"<<endl;
        cin>> PIN;
        if(PIN== "6666"){
            cout<<"Poprawne haslo"<<endl;
            cout<<"Wybierz z menu co chcesz dalej zrobic: ";
        }
        else{
                cout<<"Konto zostalo zablokowane";
    }}*/

   /* string login;
    string pass;
     cout<<"login: ";
     cin>>login;
     cout<<"Podaj haslo: ";
     cin>>pass;
     cout<<""<<endl;

     if((login=="Kuna")&&(pass=="1234")){
        cout<<"Logowanie przebieglo pomyslnie."<<endl;
     }
     if((login!="Kuna")||(pass!="1234")){
        cout<<"Niepoprawny login lub haslo. Sprobuj ponownie:"<<endl;
            cout<< "Login: ";
            cin>> login;
            cout<<"Haslo: ";
            cin>> pass;
            if((login=="Kuna")&&(pass=="1234")){
            cout<<"Logowanie przebieglo pomyslnie."<<endl;}
            else{
                cout<<"Konto zostalo zablokowane"<<endl;
            }
     }*/

     int wiek;
     int zaIle;
     int odIlu;
    while(true){ cout<<"Napisz ile masz lat: " ;
     cin>> wiek;
     zaIle= 35-wiek;
     odIlu= wiek-35;
     if(wiek<18){
        cout<<"Jestes niepelnoletni a prezydentem mo¿esz zostaa za: ";
        cout<< zaIle;
        cout<< " lat."<<endl;
        }
    else if((wiek>18)&&(wiek<35)){
        cout<<"Jesteœ pelnoletni ale nie mozesz zostac prezydentem. Bedzie to mozliwe za ";
        cout<< zaIle;
        cout<< " lat."<<endl;
    }
    else{
        cout<<"Jestes pelnoletni i mozesz zostac prezydentem od ";
        cout<<odIlu;
        cout<<" lat."<<endl;
    }
    }
    return 0;
}

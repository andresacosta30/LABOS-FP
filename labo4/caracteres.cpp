#include <iostream>
#include <string>
using namespace std;
int main()
{
     string a;
    cout <<"ingresa tu palabra: "<<endl;
    cin >> a;
    cout << a.length();
       if(a.length()%2==0){
        cout<<" es par ";
    }
    else 
    {
        cout<<" es impar ";
    }
    if (a.length()<10)
    {
        cout <<"y Tiene menos de 10 Caracteres";
    }
    if (a.length()>10)
    {
        cout <<"y Tiene mas  de 10 Caracteres";
    }    
   return 0;
}
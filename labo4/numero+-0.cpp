#include <iostream>
using namespace std;
int main ()
{
int num;
cout <<"ingrese su numero: "<<endl;
cin >>  num;
if (num>0)
{
cout <<"es positivo";
}
if (num<0)
{
cout << "Es negativo";
}
if (num==0)
{
    cout <<" Es cero";
}
return 0;
}
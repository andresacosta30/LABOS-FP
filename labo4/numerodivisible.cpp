#include <iostream>
using namespace std;
int main()
{
int num1,num2,num3;
cout << "ingrese numero 1: ";
cin >> num1;
cout << "ingrese numero 2: ";
cin >> num2;
if (num1<num2)
{
    cout <<"No es divisible";
}
else if (num2>0)
{
    cout <<"Si es divisible : ";
    int div = num1/num2;
    cout <<div;
}
return 0;
}

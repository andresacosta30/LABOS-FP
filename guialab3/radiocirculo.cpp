#include <iostream>
using namespace std;
int main(){
    float num,pi=3.14,p,a;
    cout << "inserta radio: ";
    cin >> num;
    a =pi*(num*num);
    p= 2*pi*num;
    cout << "area: "<<a<<endl;
    cout << "perimetro: "<<p<<endl;
    return 0;
}
#include <string>
#include <iostream>
using namespace std;
 
int main()
{
    string p;
    cout << "Introduce una palabra: ";
    cin >>  p;
    int ultimapos =p.length();
    cout << p.length() << endl;
    if (p[0] == p.at(ultimapos-1)){
        cout << "la letra inical y la final Son iguales" << endl;
    }else{
        cout << "la letra inical y la final Son distintas" << endl;}
    return 0;
}

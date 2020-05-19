#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Ingresa un numero: "<<endl;
    cin>>a;
    if(a%2==0){
        cout<<a<<" es par";
    }else{
        cout<<a<<" es impar";
    }
   return 0;
}
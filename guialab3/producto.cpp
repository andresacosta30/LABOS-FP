#include <iostream>
using namespace std;
int main(){
 string producto;
 float precio;
 int cantidad;
 float gasto;
 cout <<"Que prodcuto llevaras: "<<endl;
 cin>>producto;
 cout <<"Cual es el precio del producto: "<<endl;
 cin>>precio;
 cout <<"Cantidad del producto que eligio: "<<endl;
 cin>>cantidad;
 gasto= precio*cantidad;
 cout <<"tu total a gastar es de:$"<<gasto<<endl;
 return 0;
}
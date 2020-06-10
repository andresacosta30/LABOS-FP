#include <iostream>
using namespace std;
int main(){
 int n,i,num,mcd,r;
 do{
  cout<<"Ingrese la cantidad de numeros"<<endl;
  cin>>n;
 }while(n<=0);
 for(int i=0;i<n;i++){
  do{
   cout<<"Ingrese numero "<<i+1<<" : "<<endl;
   cin>>num;
  }while(num<0);
  if(i==0){
   mcd=num;
  }
  do{
   r=mcd%num;
   mcd=num;
   num=r;
  }while(r!=0);
 }
 cout<<"El MCD es :"<<mcd;
 return 0;
}

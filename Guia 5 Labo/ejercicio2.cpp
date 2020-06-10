#include <iostream>
using namespace std;
int main()
{
    int hora,minutos,segundos;
    cout <<"Hora: "<<endl;
    cin >>hora;
    cout <<"Minutos: "<<endl;
    cin >>minutos;
    cout <<"Segundos: "<<endl;
    cin >>segundos;
   if(hora < 24 && minutos < 60 && segundos < 60){
          if(segundos < 59 && segundos >= 0){
          cout<<hora<<"h "<<minutos<<"m "<<(segundos+1)<<"s";
          }else{
          if(segundos==59){
                  if(minutos==59){
                      if(hora==23){
                          cout<<"00h 00m 00s";
                      }else{
                          cout<<(hora+1)<<"h 00m 00s";
                      }
                  }else{
                      cout<<hora<<"h "<<(minutos+1)<<"m 00s";
                  }
              }
          }
      }else{
          cout<<"Fuera de Rango";
      }

      return 0;
}


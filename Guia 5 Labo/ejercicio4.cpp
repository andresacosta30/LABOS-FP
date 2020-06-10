#include <iostream>
using namespace std;
bool es_bisiesto(int anyo)
{
return ((anyo % 4) == 0 && (anyo % 100) !=0) || ((anyo % 400) == 0);
}
int dias_mes(int mes, int anyo)
{
  int dias = 31;
  if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
  {
    dias = 30;
  }
  else if (mes == 2)
  {
    if (es_bisiesto(anyo))
    {
      dias =29;
    } 
    else
    {
      dias = 28;
    }
  }
  return dias;
}
int main()
{
  int dia, mes, anyo;
  cout << "ingresa el dia: "<< endl;
  cin >> dia;
  cout << "ingresa el mes: " <<endl;
  cin >> mes;
  cout << "ingresa el a"<<(char)164<<"o: "<<endl;
  cin >> anyo;
  dia++;
  if (dia > dias_mes(mes, anyo))
  {
    dia = 1;
    mes++;
    if (mes > 12)
    {
      mes = 1;
      anyo++;
    }
  }
  cout <<"el dia siguiente es: " << dia << "/" << mes << "/" << anyo << endl;
}
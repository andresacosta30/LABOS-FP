#include <iostream>
using namespace std;
int main()
{
    int a[100], b[100], c[100], num, i, r;
        cout<<"Tama"<<char(164)<<"o de los arreglos : "<<endl;//aqui pondras la cantidad de numeros que llevaran los arreglos
        cin >> num;
        for ( i = 0; i < num; i++)
        {
            cout <<"Ingrese el valor para A: "<<endl;//aqui pondras el valor de cada arreglo dependiendo del tamano que se puso arriba
            //ejemplo, tamano : 5, entonces tu arreglos seran de 5 numeros y tenes que poner el valor de esos numeros 
            cin >> a[i];
        }
        for ( i = 0; i < num; i++)
        {
            cout <<"Ingrese el valor para B: "<<endl;//lo mismo de la A solo que para B 
            cin >> b[i];
        }
        for ( i = 0; i < num; i++)
        {
            c[i] = a[i] + b[i];
            cout << "La suma de "<< a[i]<< " y "<< b[i]<< " es: "<<c[i]<<endl;
        }
}
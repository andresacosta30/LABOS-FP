#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"ingresa la cantidad de numeros: "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"ingresa numeros: ";
        cin>>arr[i];

    }
    sort(arr,arr+n);
    int m=arr[n-1];
    m++;
    int a[m];


    for(int i=0;i<m;i++)
    {
        a[i]=0;
    }

    for(int i=0;i<n;i++)
    {

     a[arr[i]]++;
    }
   cout<<endl;
        for(int i=0;i<m;i++)
        {
            if(a[i]>0)
                cout<<i<<" se repite: "<<a[i]<<" veces"<<endl;


        }


}
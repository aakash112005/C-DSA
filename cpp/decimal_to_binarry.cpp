#include<iostream>
using namespace std;
int main()
{
    int dec,bin[10],i;
    cout<<"enter the decimal number  : ";
    cin>>dec;
    i=0;
    for(i=0;dec>0;i++)
    {
      bin[i]=dec%2;
      dec=dec/2;
      
    }
    cout<<"binary number = ";
    for(i=i-1;i>=0;i--)
    {
        cout<<bin[i]<<" ";
    }
}
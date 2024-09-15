#include<iostream>
using namespace std;
int main()
{
    int n,dec=0,i,a=1,rem;
    cout<<"enter the binary number :";
    cin>>n;
    while(n!=0)
    {
       rem=n%10;
       dec=dec+a*rem;
       n=n/10;
       a=a*2;
    }
    cout<<"decimal number = ";
cout<<dec;
}
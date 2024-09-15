#include<iostream>
using namespace std;
void fib(int a)
{
    int n1=0,n2=1,n3;
    for(int i=0;i<=a;i++)
    {
        cout<<n1;
        n3=n1+n2;
        n1=n2;
        n2=n3;
    }
}
int main()
{
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    fib(n);
    int v= INT32_MAX;
    cout<<endl<<v;
}
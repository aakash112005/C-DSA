#include<iostream>
using namespace std;
int fac(int a)
{
    int fact =1;
    for(int i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int ncre(int n1,int r1)
{
    int num=fac(n1);
    int den=fac(r1)*fac(n1-r1);
    int ans=num/den;
    return ans;
}
int main()
{
    int n,r;
    cout<<"enter the value of n : ";
    cin>>n;
    cout<<"enter the value of r : ";
    cin>>r;
    cout<<"ncr = "<<ncre(n,r);
}

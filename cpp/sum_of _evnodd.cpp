#include<iostream>
using namespace std;
int main()
{
    int n,i,sum1=0,sum2=0;
    cout<<"enter the number : ";
    cin>>n;
    while(i<=n)
    {
        if(n%2==0)
        {
            sum1+=i;
        }
        else{
            sum2+=i;
        }
    }
    cout<<endl<<"sum of even number  = "<<sum1<<endl<<"sum of odd numbers = "<<sum2;
}
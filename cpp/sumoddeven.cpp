#include<iostream>
using namespace std;
int main()
{
    int n,i,sum1=0,sum2=0;
    cout<<"enter the number : ";
    cin>>n;
    i=1;
    while(i<=n)
    {
        if(i%2==0)
        {
            sum1+=i;
        }
        else{
            sum2+=i;
        }
        i++;
    }
    cout<<endl<<"sum of even number  = "<<sum1<<endl<<"sum of odd numbers = "<<sum2;
}
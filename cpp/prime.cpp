#include<iostream>
using namespace std;
int main()
{
    int i,n,c=0;
    cout<<"enter the number : ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
           c++;
        }
        
    }
    cout<<c;
    cout<<"result";
    if(c==2)
    {
        cout<<endl<<n<<" is a prime number";
    }
    else {
         cout<<endl<<n<<" is not a prime number";
    }
}
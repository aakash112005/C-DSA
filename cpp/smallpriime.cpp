#include<iostream>
using namespace std;
int main()
{
    int n,j,i,e,c=0,k,c1=0;
    cout<<"enter the number : ";
    cin>>n;
    for(k=1;k<=n;k++)
    {
      if(n%k==0)
      {
        c1=c1+1;
      }
    }
    if(c1==2)
    {
      //cout<<n<<" is also prime number "<<endl;
      n=n-1;
    }
    if(n==2)
    {
      cout<<"2  ";
    }
    else
    {
    for(i=n;i>0;i--)
    {
      c=0;
      for(j=1;j<=i;j++)
      {
        if(i%j==0)
        {
            c=c+1;
          
        }
      }
      //cout<<c<<" = "<<i<<endl;
     if(c==2)
     {
      cout<<"smallest prime number less than the enterted number is :- "<<i;
      //cout<<"hello"<<endl;
      break;
     }
     
     }
    }
}

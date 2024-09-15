#include<iostream>
using namespace std;
int main()
{
    int n,j,i,e,c=0;
    cout<<"enter the number : ";
    cin>>n;
    if(n==3)
    {
      cout<<2;
    }
    else if(n==2)
    {
      cout<<"2 is smallest prime number ";
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
      cout<<i;
      //cout<<"hello"<<endl;
      break;
     }
     
     }
    }
}

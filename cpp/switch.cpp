#include<iostream>
using namespace std;
int main()
{
    int n;
cout<<"enter the value of of n : ";
cin>>n;

    int c1,a,b,c,d,a1,b1,c2,d1;
    cout<<endl<<"enter the rs : ";
    cin>>c1;
    cout<<endl<<" result "<<endl;
    switch(c1)
    {
        case 100:
        {
            a=n/100;
            a1=100*a;
            cout<<"100 = "<<a<<endl;
            n=n-a1;
        }
        case 50:
        {
            b=n/50;
            b1=50*b;
            cout<<"50 = "<<b<<endl;
            n=n-b1;
        }
        case 20:
        {
            c=n/20;
            c2=20*c;
            cout<<"20 = "<<c<<endl;
            n=n-c2;
        }
        case 1:
        {
            d=n/1;
            d1=1*d;
            cout<<"1 = "<<d<<endl;
            n=n-d1;
        }break;
       
        default:
        {
            cout<<"no need";
        }
    }
}
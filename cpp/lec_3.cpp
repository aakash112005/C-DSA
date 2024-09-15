#include<iostream>
using namespace std;
int main()
{
int a,b;
// for taking input from user 
cout<<"enter the number a : ";
cin>>a;
cout<<"enter the number b : ";
cin>>b;
// cin function does not read space and tab
cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
// using if
/*
if(a>b)
{
    cout<<"yes";
}
else{
    cout<<"no";
}
*/
// nested if else
/*
if(a>0)
{
    cout<<"a is positive";
}
else{
    if(a<0)
    {
        cout<<"a is negative";
            }
            else{
                cout<<"a is zero";
            }
}
*/
// else if ladder
/*
if(a>0)
{
    cout<<"a is positive";
}
else if(a<0)
{
    cout<<"a is negative";
}
else
{
    cout<<"a is zero";
}
*/

//while loops
int i=0;
/*
while(i<=a)
{
    cout<<i<<"\t";
    i++;
}
*/
// sum 
int sum=0;
/*
while(i<=a)
{
    sum+=i;
    i++;
}
cout<<"sum = "<<sum;
*/
// prime number
// sum of even and odd upto n
// celcius into farnehite 

}
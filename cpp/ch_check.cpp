#include<iostream>
using namespace std;
int main()
{
    char c,i;
    cout<<"enter character : ";
    cin>>c;
    if(c>=65&&c<=90)
    {
        cout<<"upper case";
    }
    else if(c>=97&&c<=122)
    {
        cout<<"lower case";
    }
    else if(c>=48&&c<=57)
    {
        cout<<"number ";
    }
    else{
        cout<<"symbole";
    }
    // ASCII VALUE INTO CHARCTER
    char a=45;
    cout<<endl<<a;
    // CHARCTER INTO ASCII VALUE
    int b='9';
    cout<<endl<<b;
}
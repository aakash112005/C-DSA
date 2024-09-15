#include<iostream>
using namespace std;
char tolower(char ch)
{
if(ch>='a'&&ch<='z')
{
    return ch;
}
else{
    int temp=ch-'A'+'a';
    return temp;
}
}
bool checkp(char s[])
{
    int st=0;
    int e=4-1;
    while(st<e)
    {
        if(tolower(s[st])!=tolower(s[e]))
        {
            return 0;
        }
        else{
            st++;
            e--;
        }
    }
    return 1;
}

int main()
{
    char s[4];
    cout<<"enter : "<<endl;
    for(int i=0;i<4;i++)
    {
        cin>>s[i];
    }
     puts(s);
     cout<<endl<<"palindrome"<<checkp(s);
}


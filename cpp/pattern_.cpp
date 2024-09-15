#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    i=1;
    
    while(i<=n)
    {
        
        j=1;
        while(j<=n)
        {
            char c='A'+i+j-2;
            cout<<c;
        
            j++;
        }
        cout<<endl;
        i++;
    }
}
#include<iostream>
using namespace std;
void uniqueocc(int a[],int n)
{
    int b[n],c,s;
    for(int i=0;i<n;i++)
    {
        c=0;
        for(int j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c=c+1;
            }
        }
       
       
       b[i]=c;
    }
    s=b[0];
    for(int i=0;i<n;i++)
    {
       if(s==b[i+1])
       {
        cout<<"hello";
       }
    }
    
}

int main()
{
    int n;
    cout<<"enter the size of arry : ";
    cin>>n;
    int arr[n];
    cout<<"enter the element  : "<<endl;
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}

uniqueocc(arr,n);

}
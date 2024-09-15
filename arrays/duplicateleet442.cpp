#include<iostream>
using namespace std;
void uniqueocc(int a[],int n)
{
    int b[n],c,s;
    b[0]=0;
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
            if(c==2)
            {
                cout<<endl<<a[i]<<endl;
                b[i]=a[i];
            }
    }
        for(int i=0;i<n;i++)
    {
        cout<<endl<<b[i];
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
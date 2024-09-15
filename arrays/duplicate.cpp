#include<iostream>
using namespace std;
void unique(int a[],int n)
{
    int i,j,c=0;
    /*
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c=c+1;
            }
        }
       // cout<<a[i]<<" "<<c<<endl;
        if(c==2)
        {
            cout<<endl<<a[i];
            break;
        }
    }
    */
    // 2nd methd
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=ans^a[i];
    }
    for(int i=1;i<n;i++)
    {
        ans=ans^i;
    }
    cout<<ans;
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

unique(arr,n);

}
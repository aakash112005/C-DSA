#include<iostream>
using namespace std;
void intersction(int a[],int b[],int n,int m)
{
    int c;
for(int i=0;i<n;i++)
{
    c=a[i];
    for(int j=0;j<m;j++)
    {
        // if both array are shorted in non - decreasing order 
        // if(c<b[j])
        // break;
        if(c==b[j])
        {
          cout<<b[i]<<" ";
          b[j]=INT_FAST16_MIN;
        }
    }
}

}
int main()
{
    int n,m;
    cout<<"enter the size of 1 array : ";
    cin>>n;
    cout<<endl<<"enter the size of 2 array : ";
    cin>>m;
    int arr[n];
    int brr[m];
    cout<<"enter the elements of 1 array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<endl<<"enter the elements of second array : ";
       for(int i=0;i<n;i++)
    {
        cin>>brr[i];
    }
    intersction(arr,brr,n,m);
   

}
#include<iostream>
using namespace std;
void swapal(int a[],int n)
{
int i,j,s;
for(i=0;i<n;i++)
{
if(i+1<n)
{
    // in bulid swap function
   // swap(a[i],a[i+1]);
   s=a[i];
   a[i]=a[i+1];
   a[i+1]=s;
    i++;
}
}
for(int i=0;i<n;i++)
{
    cout<<a[i];
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

swapal(arr,n);

}



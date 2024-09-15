#include<iostream>
using namespace std;
 /*int firstooc(int arr[],int n,int k)
{
    int s,mid,e,ans=-1;
    s=0;e=n-1;
    mid=s+(e-s)/2;
    while(s<=e)
    {
        if(arr[mid]==k)
        {
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]<k)
        {
            s=mid+1;
        }
        else if(arr[mid]>k)
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int lastooc(int arr[],int n,int k)
{
    int s,mid,e,ans=-1;
    s=0;e=n-1;
    mid=s+(e-s)/2;
    while(s<=e)
    {
        if(arr[mid]==k)
        {
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]<k)
        {
            s=mid+1;
        }
        else if(arr[mid]>k)
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
*/
 int firstocc(int arr[],int n,int k)
{
int mid,strat,end,ans=-1;
strat=0;
end=n-1;
mid=strat+(end-strat)/2;
while(strat<=end)
{
    if(arr[mid]==k)
    {
        ans=mid;
       end=mid-1;
    }
    else if(arr[mid]<k)
    {
        strat=mid+1;
    }
    else if(arr[mid]>k){
        end=mid-1;
    }
    mid=strat+(end-strat)/2;
}//value not find
return ans;
}

  int lastocc(int arr[],int n,int k)
{
int mid,strat,end,ans;
strat=0;
end=n-1;
mid=strat+(end-strat)/2;
while(strat<=end)
{
    if(arr[mid]==k)
    {
        ans=mid;
       strat=mid+1;
    }
   else if(arr[mid]<k)
    {
        strat=mid+1;
    }
    else if(arr[mid]>k){
        end=mid-1;
    }
    mid=strat+(end-strat)/2;
}//value not find
return ans;
}
int main()
{
    int n,a,b,k;

 cout<<"enter the size of array : ";
 cin>>n;
 cout<<"enter the key element : ";
 cin>>k;
 int arr[n];
 cout<<"enter the element of array : "<<endl;
 for(int i=0;i<n;i++)
 {
    cin>>arr[i];
 }
 a=firstocc(arr,n,k);
 b=lastocc(arr,n,k);
 cout<<a<<endl<<b;
}
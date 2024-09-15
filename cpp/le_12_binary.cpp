// codition of binary search is element in monotronic function
// in line 11 and 26 there is mistake if both start and end have large value and then sum of its exceeds int_max so nwe write strat+(end-start)/2
//rather than (start+end)/2
#include<iostream>
using namespace std;

int bin(int ar[],int n,int k)
{
int mid,strat,end;
strat=0;
end=n-1;
mid=strat+(end-strat)/2;
while(strat<=end)
{
    if(ar[mid]==k)
    {
        return mid;
    }
    if(ar[mid]<k)
    {
        strat=mid+1;
    }
    else{
        end=mid-1;
    }
    mid=strat+(end-strat)/2;
}
return -1;
}
int main()
{
int n1,a[n1],key;
cout<<"enter the size of array";
cin>>n1;
cout<<endl<<"enter the elements of array"<<endl;
for(int i=0;i<n1;i++)
{
cin>>a[i];
}
cout<<endl<<"enter the key element";
cin>>key;
int d=bin(a,n1,key);
cout<<key<<" present at "<<d<<endl;

}
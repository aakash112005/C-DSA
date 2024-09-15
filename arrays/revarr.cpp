
#include<iostream>
using namespace std;
void rev(int ar[],int n1)
{ 
   int r,i,j;
     
     
     for(i=n1-1,j=0;j<=i;j++,i--)
    {
        // in build swap function
       //swap(ar[j],ar[i]);
       r=ar[j];
       ar[j]=ar[i];
       ar[i]=r;
       
     
    }
}
int main()
{ 
int n,arr[10];
cout<<"enter the size of arry : ";
cin>>n;
cout<<"enter the element  : "<<endl;
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}

rev(arr,n);
for(int i=0;i<n;i++)
{
    cout<<arr[i];
}
}

// swap alter nate
// unique elements in arry
// duplictae inarry
//interscetion of two arry
// pair sum
// triplate sum
// short 0 and 1


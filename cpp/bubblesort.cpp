#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bool swapped;
    for(int i=1;i<n;i++)
    {
        bool swapped=false;
        for(int j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped=true;
            }

        }
    }
    if(swapped==false)
    {
        cout<<"array already sorted";
    }
     for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}
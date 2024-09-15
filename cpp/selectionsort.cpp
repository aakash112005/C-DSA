#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"enter the elemnts of array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
        int min;
    for(int i=0;i<n;i++)
    {
        min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[min]>arr[j])
            {
                min=j;
            }
        }
        swap(arr[i],arr[min]);
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}
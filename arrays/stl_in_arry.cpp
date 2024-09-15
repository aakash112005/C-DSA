#include<iostream>
#include<array>
using namespace std;
int main()
{
    int bascic[4]={1,2,3,4};

    array<int,4>a;
    cout<<"enter the elemnts of array"<<endl;
    for(int i=0;i<4;i++)
    {
     cin>>a[i];
    }
    int size=a.size();
    cout<<size<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<endl;
    }

    cout<<"element at second index"<<a.at(2)<<endl;

    cout<<"empty or not "<<a.empty()<<endl;

    cout<<"first element "<<a.front()<<endl;
    cout<<"last element "<<a.back()<<endl;

        
    

}






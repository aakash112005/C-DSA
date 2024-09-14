#include<iostream>
using namespace std;
int main()
{
    int row,col;
    cin>>row;
    cout<<endl;
     col=1;
     int**arr=new int*[row];
     for(int i=0;i<row;i++)
     {
        arr[i]=new int[col];
        col++;
     }
     //taking input
     int num=1;
     int m=1;
     for(int i=0;i<row;i++)
     {
        for(int j=0;j<m;j++)
        {
            arr[row][col]=num;
            cout<<endl;
            m--;
        }
     }
      m=1;
     //forprinting
     for(int i=0;i<row;i++)
     {
        for(int j=0;j<m;j++)
        {
            cout<<arr[row][col]<<" ";
            cout<<endl;
            m--;
        }
     }
//relase memory
for(int i=0;i<row;i++)
{
    delete []arr[i];
}
delete []arr;


     
}

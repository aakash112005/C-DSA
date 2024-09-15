// vector are those in which when elements are entered more than its size than vector doube its size internally
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>a(5,1); // here 5 is size and all are initialised by 1 bydefault
    vector<int> last(a);// all elements of a is copied to last vector
    cout<<"print a"<<endl;

    for(int i:last)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    vector<int>v;
    cout<<"capacity <--"<<v.capacity()<<endl;

    v.push_back(1);
  cout<<"capacity <--"<<v.capacity()<<endl;


   v.push_back(2);
  cout<<"capacity <--"<<v.capacity()<<endl; 

   v.push_back(3);
  cout<<"capacity <--"<<v.capacity()<<endl;

  cout<<"size <--"<<v.size()<<endl;

  //size=no of elments present
  //capacity = how many space for elements


  cout<<"element at second index"<<v.at(2)<<endl;

    cout<<"empty or not "<<v.empty()<<endl;

    cout<<"first element "<<v.front()<<endl;
    cout<<"last element "<<v.back()<<endl;


cout<<"before pop back"<<endl;
for(int i:v)
{
cout<<i<<" ";
}
v.pop_back();//remove the last element

cout<<"afte pop back"<<endl;
for(int i:v)
{
cout<<i<<" ";
}

cout<<"before clear "<<v.size()<<endl;
v.clear();
cout<<"after clear"<<v.size()<<endl;

}
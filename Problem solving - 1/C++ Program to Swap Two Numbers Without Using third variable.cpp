#include<iostream>
using namespace std;

int main()
{
    int x,y;
    cout<<"Enter the First value : ";
    cin>>x;
    cout<<"Enter the Second value : ";
    cin>>y;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\tX = "<<x<<"\n\tY = "<<y<<endl;

    //swap

    x += y;
    y = x-y;
    x = x-y;

    cout<<endl;
    cout<<"\tX = "<<x<<"\n\tY = "<<y<<endl;

}

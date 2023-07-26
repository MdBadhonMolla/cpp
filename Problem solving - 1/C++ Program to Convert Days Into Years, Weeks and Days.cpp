#include<iostream>
using namespace std;

int main()
{
    int inpute;

    cout<<"Enter total day : ";
    cin>>inpute;

    int y,w,d;

    y = inpute/365;
    w = (inpute%365)/7;
    d = (inpute%365)%7;

    cout<<"\n\n\t"<<y<<" Year\t"<<w<<" Week\t"<<d<<" days\n\n\n";
}

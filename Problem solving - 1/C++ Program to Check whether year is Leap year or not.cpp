#include<iostream>
using namespace std;

int main()
{
    int input;
    cout<<"Enter a Year : ";
    cin>>input;

    if(input%4==0)
    {
        cout<<"\n\n\t[ "<<input<<" ]  year is a leap year.\n\n\n";
    }
    else
        cout<<"\n\n\t[ "<<input<<" ]  year is a not leap year.\n\n\n";
}

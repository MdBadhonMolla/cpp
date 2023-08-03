#include<iostream>
using namespace std;

int main()
{
    char inpute;

    cout<<"Enter Anything : ";
    cin>>inpute;

    if(int(inpute) >=65 && int(inpute) <=90)
    {
        cout<<"\n\n\t[ "<<inpute<<" ]  is a uppercase character.\n\n\n";
    }
    else if(int(inpute) >=97 && int(inpute) <=122)
    {
        cout<<"\n\n\t[ "<<inpute<<" ]  is a lowercase character.\n\n\n";
    }
    else
    {
        cout<<"\n\n\t[ "<<inpute<<" ]  is a special character.\n\n\n";
    }
}

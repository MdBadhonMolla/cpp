#include<iostream>
using namespace std;

int main()
{

    int n;
    cout<<"Enter a number : ";
    cin>>n;
    if(n%2 != 0 && n%3 != 0 && n%5 != 0)
        cout<<"\n\n\t[ "<<n<<" ] - is a prime number.\n\n\n";

    //else if(n == 2 || n == 3)
        //cout<<"\n\n\t[ "<<n<<" ] - is a prime number.\n\n\n";

    else
        cout<<"\n\n\t[ "<<n<<" ] - is a not prime number\n\n\n";
}

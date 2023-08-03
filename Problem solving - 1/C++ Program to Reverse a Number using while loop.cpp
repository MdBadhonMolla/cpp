#include<iostream>
using namespace std;

int main()
{
    int temp,rev=0,r,input;

    cout<<"enter the number : ";
    cin>>input;

    temp = input;

    while(temp>0)
    {
        r= temp%10;
        rev = rev*10+r;
        temp=temp/10;

    }
     cout<<"\nReverse of a Number [ "<<input<<" ] is :: [ "<<rev<<" ] \n";
}

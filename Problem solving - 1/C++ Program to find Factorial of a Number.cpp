#include<iostream>
using namespace std;

int main()
{
    int input, temp = 1;
    cout<<"Enter a number : ";
    cin>>input;

    for(int i = 1; i <= input; i++)
    {
        temp *= i;
    }

    cout<<" number : "<<temp;
}

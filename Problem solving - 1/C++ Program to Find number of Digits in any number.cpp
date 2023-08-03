#include<iostream>
using namespace std;

int main()
{
    int input;
    cout<<"Enter the number : ";
    cin>>input;
    int i=0;
    int temp = input;

    while(temp>0){
        temp = temp/10;
        i++;
    }
    cout<<"The number  [ "<<input<<" ] & The Digits : "<<i<<endl;
}

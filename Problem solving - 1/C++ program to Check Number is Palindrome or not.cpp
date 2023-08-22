#include<iostream>
using namespace std;

int main()
{
    int input, temp, a=0,b=0;
    cout<<"Enter the number : ";
    cin>>input;

    temp=input;
    while(temp>0)
    {
        a=temp%10;
        b= b*10 + a;
        temp = temp/10;

    }
    cout<<"\n\tRevarce the number : "<<b<<endl;

    if(b==input)

        cout<<"\n\tThe number is Palindrome\n\n.";
    else
        cout<<"\n\tThe number is not Palindrome.\n\n";

}

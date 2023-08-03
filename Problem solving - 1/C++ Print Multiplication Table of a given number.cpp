#include<iostream>
using namespace std;

int main()
{
    int input, i;
    cout<<"Enter the number : ";
    cin>>input;
    cout<<"\n\n";

    for(i=1; i<=10; i++)
    {
        cout<<"\t\t"<<input<<" * "<<i<<" = "<<input*i<<endl;
    }

}

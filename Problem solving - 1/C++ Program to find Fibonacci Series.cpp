#include<iostream>
using namespace std;

int main()
{
    int n, a=0, b=1, ans=0;
    cout<<"Enter haw many number need : ";
    cin>>n;

    int temp=0;
    cout<<"Fibonacci series : ";
    cout<<a<<", "<<b<<", ";
    while(temp<=n){
        ans = a+b;
        a=b;
        b=ans;
        cout<<ans<<", ";
        temp++;
    }
}

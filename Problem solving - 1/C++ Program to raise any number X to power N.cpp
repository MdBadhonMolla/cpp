#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int x,y;

    cout<<"Enter the number : ";cin>>x;
    cout<<"Enter the power : ";cin>>y;


    int ans = pow(x,y);
    cout<<"\nAns the "<<x<<"^"<<y<<" : "<<ans;
    cout<<endl;
    cout<<endl;
    cout<<endl;
}

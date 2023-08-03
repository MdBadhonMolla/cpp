#include<iostream>
#include<math.h>
#define CUBE(x) pow(x,3)
using namespace std;



int main()
{
    int n,cube;

    cout<<"Enter any positive number : ";
    cin>>n;

    cube=CUBE(n);

    cout<<"\nThe Cube of Entered Number "<<n<<" is : [ "<<cube<<" ]\n";

    return 0;
}

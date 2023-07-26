#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    float a,b,c;

    cout<<"Enter a Amount : ";
    cin>>a;
    cout<<"Enter the interest(%) : ";
    cin>>b;
    cout<<"Haw many Year : ";
    cin>>c;

    float ans = a*pow((1+(b/100)),c);

    cout<<"\n\n\tInterest Amount = "<<ans<<endl;

}

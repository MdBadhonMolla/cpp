#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int input,n,i,j=0,b=0;
    cout<<"Enter the number : ";
    cin>>input;

    int temp = input;
    int temp1 = input;
    int cnt = 0;
    while(temp>0)
    {
        temp = temp/10;
        cnt++;
    }
    cout<<"\n\nTotal digit : "<<cnt;
    for(i=1; i<=cnt; i++)
    {
        j = temp1%10;
        b = b + pow(j,cnt);
        temp1 = temp1/10;
        cout<<"\n\tDigit sqr and plus next : "<<j;
        cout<<"\n\tDigit sqr and plus next : "<<b;
    }
    if(b==input)

        cout<<"\n\n\t[ "<<input<<" ] is a Armstrong.\n\n\n";

    else

        cout<<"\n\n\t[ "<<input<<" ] is a not Armstrong.\n\n\n";
}

#include<iostream>
using namespace std;

int main()
{
   int a,b,c;
   cout<<"Enter the 1st number : ";
   cin>>a;
   cout<<"Enter the 2nd number : ";
   cin>>b;
   cout<<"Enter the 3rd number : ";
   cin>>c;

   if(a>b && a>c)
   {
       cout<<"\n\tThe largest number : "<<a;
   }
   else if(b>a && b>c)
   {
       cout<<"\n\tThe largest number : "<<b;
   }
   else

       cout<<"\n\tThe largest number : "<<c;

}

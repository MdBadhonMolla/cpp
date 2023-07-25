#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the first value : ";cin>>a;
    cout<<endl;
    cout<<endl;
    cout<<"\n\tPrass (1) convert = inches - yard";
    cout<<"\n\tPrass (2) convert = inches - feet";
    cout<<"\n\tPrass (3) convert = yard - inches";
    cout<<"\n\tPrass (4) convert = yard - feet";
    cout<<"\n\tPrass (5) convert = feet - inches";
    cout<<"\n\tPrass (6) convert = feet - yard";
    cout<<endl;cout<<endl;
    cout<<"Prass Key : ";cin>>b;
cout<<endl;cout<<endl;
    switch(b){

    case 1:
        a = a*0.0277778;
        cout<<a<<" yard";
        cout<<endl;cout<<endl;
        break;
    case 2:
        a = a*0.0833333;
        cout<<a<<" feet";
        cout<<endl;cout<<endl;
        break;
    case 3:
        a = a*36;
        cout<<a<<" inches";
        cout<<endl;cout<<endl;
        break;
    case 4:
        a = a*3;
        cout<<a<<" feet";
        cout<<endl;cout<<endl;
        break;
    case 5:
        a = a*12;
        cout<<a<<" inches";
        cout<<endl;cout<<endl;
        break;
    case 6:
        a = a*0.333333;
        cout<<a<<" yard";
        cout<<endl;cout<<endl;
        break;

    }


}

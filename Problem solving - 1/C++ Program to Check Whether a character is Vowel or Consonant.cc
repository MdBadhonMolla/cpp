#include<iostream>
using namespace std;

int main()
{
    char input;
    cout<<"Entar a Creacter : ";
    cin>>input;

    int vowel = (input == 'a' || input == 'A' || input == 'e' || input == 'E' || input == 'i' || input == 'I' || input == 'o' || input == 'O' || input == 'u' || input == 'U');

    if(vowel)
    {
        cout<<"[ "<<input<<" ] - is a Vowel";
    }
    else
        cout<<"[ "<<input<<" ] - is a Consonant";
}

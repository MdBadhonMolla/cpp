//ambiguty


#include<iostream>
using namespace std;

class scholarship{
public:
    float waiver = 500;

    void print_account()            // confiuse
    {
        cout<<"I am form scholarship class"<<endl;
    }
};

class account{
public:

    float semester_fee = 2000;

    void print_account()            // confiuse
    {
        cout<<"I am form account class"<<endl;
    }
};

class student: public account, public scholarship{
public:     //1- baby 2 Fathers

    float student_fee = 1000;
};



int main()
{
    student Badhon;

    cout<<Badhon.semester_fee<<endl;
    cout<<"\n"<<Badhon.student_fee<<endl;
    cout<<"\n"<<Badhon.waiver<<endl;
    cout<<endl;
    Badhon.scholarship::print_account();  //ambiguty

}

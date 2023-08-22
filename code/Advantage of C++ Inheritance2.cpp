//

#include<iostream>
using namespace std;
class scholarship{
public:     //Father no-1
    float waiver = 500;
};

class account: public scholarship{
public:     //Father no-2

    float semester_fee = 2000;

    void print_account()
    {
        cout<<"I am form account class"<<endl;
    }
};

class student: public account{
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
    Badhon.print_account();

}

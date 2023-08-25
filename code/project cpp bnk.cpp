#include <iostream>
using namespace std;

class balanceInfo {
    int currentBalance = 50;
    int password = 21481514;
public:
//*************************Encapsulation
    int inBalance( int a )
    {
        currentBalance = currentBalance + a;
    }
    int outBalance( int c )
    {
        currentBalance = currentBalance - c;
    }
    int setPassword( int b )
    {
        password = b;
    }
//---------------------------------------------------------------------
    int getBalance()
    {
        return currentBalance;
    }
    int getPassword()
    {
        return password;
    }
};
//-------------------------------------------------------------------
class fatherInfo {
public:
    string fatherName;
    string fDateOfBarth;
    string fNumber;
//**************************C++ Class constructor with out peramitar
    fatherInfo(){
        fatherName = "Please set name";
        fDateOfBarth = "Please set date of barth";
        fNumber = "Please set phone number";
    }

};
//******************************C++ Class inharence
class myInfo : public fatherInfo, public balanceInfo{
public:
    string myName;
    string myDateOfBarth;

    myInfo(){
        myName = "Please set name";
        myDateOfBarth = "Please set date of barth";
    }

//**************************C++ Class Methods
    int setInfo(string a, string b, string c, string d, string e){
        myName = a;
        myDateOfBarth =b;
        fatherName = c;
        fDateOfBarth = d;
        fNumber = e;
    }


    void printInfo(){
        cout<<"Name : "<<myName<<endl;
        cout<<"Name : "<<myDateOfBarth<<endl;
        cout<<"Name : "<<fatherName<<endl;
        cout<<"Name : "<<fDateOfBarth<<endl;
        cout<<"Name : "<<fNumber<<endl;
    }

};

    int manue(){
        cout<<"_____________Bank Information_____________\n"<<endl;
    cout<<"1. User Info.\n2. Check Balance.\n3. Set User Information.\n4. Show PIN.\n5. Set PIN.\n6. Balance In.\n7. Balance Out.\n0. Exit.\n\n";
    int input;
    cout<<"Enter the key = ";cin>>input;
    return input;
    }


int main() {


    cout<<"_____________Bank Information_____________\n"<<endl;
    cout<<"1. User Info.\n2. Check Balance.\n3. Set User Information.\n4. Show PIN.\n5. Set PIN.\n6. Balance In.\n7. Balance Out.\n0. Exit.\n\n";
    int input;
    cout<<"Enter the key = ";cin>>input;

//*************************C++ Class Object Creat
    myInfo p1;


//.........................................variable...........................................................
string tName, tDate, tFathern, tFatherd, tPhone;
int ab,ba;
int pass, add, out;
//.........................................variable..........................................................

    while(input != 0){



        system("CLS");
        switch(input){
            case 1 :
                cout<<"\n\n";
                p1.printInfo();
                cout<<"\n\n__________________________________________________________________________________\n\n";
                input = manue();
            break;

            case 2 :
                cout<<"\n\n";
                cout<<"\tEnter Pin : ";cin>>ab;
                pass = p1.getPassword();
                if(ab == pass){
                cout<<"\n\tCurent Balance : "<<p1.getBalance();
                }
                else{
                    cout<<"\tReset the PIN";
                }
                cout<<"\n\n__________________________________________________________________________________\n\n";
                input = manue();
            break;

            case 3 :
                cout<<"\n\t  Fill The From\n\t-----------------\n\n";

                cout<<"\tName : ";cin>>tName;
                cout<<"\tDate of Barth : ";cin>>tDate;
                cout<<"\tFather Name : ";cin>>tFathern;
                cout<<"\tFather Date of Barth : ";cin>>tFatherd;
                cout<<"\tPhone Number : ";cin>>tPhone;

                p1.setInfo(tName, tDate, tFathern, tFatherd, tPhone);
                cout<<"\n\n__________________________________________________________________________________\n\n";
                input = manue();
            break;

            case 4 :
                cout<<"\n\n\n";

                cout<<"\tEnter Pin : ";cin>>ab;
                pass = p1.getPassword();
                if(ab == pass){

                   cout<<"\tPIN : "<<p1.getPassword();
                }
                else{
                    cout<<"\tReset the PIN";
                }

                cout<<"\n\n__________________________________________________________________________________\n\n";
                input = manue();
            break;

            case 5 :
                cout<<"\n\t  Set The PIN\n\t-----------------\n\n";

                cout<<"\tEnter Pin : ";cin>>ab;
                cout<<"\tConfirm Pin : ";cin>>ba;
                if(ab==ba){
                   p1.setPassword(ba);
                   cout<<"\tPIN changed Successed.";
                }
                else{
                    cout<<"Pin Isn't Match try again";
                }

                cout<<"\n\n__________________________________________________________________________________\n\n";
                input = manue();
            break;

            case 6 :
                cout<<"\n\n";
                cout<<"\tEnter Pin : ";cin>>ab;
                pass = p1.getPassword();
                if(ab == pass){
                cout<<"\n\tAdd Amount : ";cin>>add;
                p1.inBalance(add);
                cout<<"\tCurent Balance : "<<p1.getBalance();
                }
                else{
                    cout<<"\tReset the PIN";
                }
                cout<<"\n\n__________________________________________________________________________________\n\n";
                input = manue();
            break;

            case 7 :
                cout<<"\n\n";
                cout<<"\tEnter Pin : ";cin>>ab;
                pass = p1.getPassword();
                if(ab == pass){
                cout<<"\n\tPay Amount : ";cin>>out;
                p1.outBalance(out);
                cout<<"\tCurent Balance : "<<p1.getBalance();
                }
                else{
                    cout<<"\tReset the PIN";
                }
                cout<<"\n\n__________________________________________________________________________________\n\n";
                input = manue();
            break;
        };



    }
    system("CLS");
    cout<<"\n\n\n\tThanks\n\n\n\n";

    return 0;
}

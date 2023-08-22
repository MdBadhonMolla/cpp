#include<iostream>
using namespace std;

class node{
public:
    string subb;
    int data;
    node* next;

};

main(){

    string a,b;
    int i;
    cout<<"Are you create a Node space(y/...): ";
    cin>>a;
    system("CLS");

    node* head = NULL;
    node* temp = NULL;

    while(a=="y"){

    if(head==NULL)
    {

        head = new node();

        cout<<"Subject name : ";
        cin>>b;
        head->subb = b;

        cout<<b<<" subject number : ";
        cin>>i;
        head->data = i;
        head->next = NULL;
        temp = head;
    }
    else
    {
        node* newnode=NULL;
        newnode = new node();

        cout<<"Subject name : ";
        cin>>b;
        newnode->subb = b;

        cout<<b<<" subject number : ";
        cin>>i;
        newnode->data = i;
        temp->next = newnode;
        newnode->next = NULL;
        temp = newnode;
    }
    system("CLS");

    cout<<"Are you create a Node space(y/n): ";
    cin>>a;

    system("CLS");
    }
    //*****************************************************print nodes


    cout<<"   subject-mark"<<endl;
    cout<<"__________________"<<endl;

    node* damo = NULL;
    damo = head;
    while(damo->next != NULL)
    {
        cout<<"   "<<damo->subb<<"-"<<damo->data<<endl;
        damo = damo->next;
    }
    cout<<"   "<<damo->subb<<"-"<<damo->data<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;


    /***************************************************************__Revarce_the_linked_list__*****************************************************************/
    node* rev = nullptr;
    node* rev1 = nullptr;
    node* rev2 = nullptr;
    rev1 = head;
    cout<<"*****Do you want to Revarce the linked list(y/n): ";
    cin>>b;
    if(b == "y")
    {
        while(rev1 != NULL)
        {
            rev2 = rev1->next;
            rev1->next = rev;
            rev = rev1;
            rev1 = rev2;
        }
        head = rev;

        damo = head;
        while(damo->next != NULL)
        {
            cout<<"   "<<damo->subb<<"-"<<damo->data<<endl;
            damo = damo->next;
        }
        cout<<"   "<<damo->subb<<"-"<<damo->data<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
    }


}

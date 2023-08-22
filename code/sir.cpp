#include <iostream>

using namespace std;

//Creating class for singly linked list
class node
{
public:
    int data;
    node* next;
};


int main()
{

    int n;
    scanf("%d", &n);

    node* start = NULL;
    node* temp = NULL;

    //creating nodes and inserting nodes' data
    for(int i=0; i<n; i++)
    {
        if(start == NULL)
        {
            start = new node();

            int x;
            scanf("%d", &x);

            start->data = x;
            start->next = NULL;
            temp = start;
        }

        else
        {
            node* newnode = NULL;
            newnode = new node();

            int x;
            scanf("%d", &x);

            newnode->data = x;
            newnode->next = NULL;
            temp->next = newnode;
            temp = temp->next;

        }
    }



    //printing list's elements
    temp = start;
    while(temp->next != NULL)
    {
        printf("%d ", temp->data);
        temp=temp->next;
    }
    printf("%d ", temp->data);


    //reversing linked list
    node* temp1=NULL;
    node* temp2 = NULL;
    node* temp3 = NULL;

    temp2 = start;

    while(temp2 != NULL)
    {

        temp3 = temp2->next;
        temp2->next = temp1;
        temp1 = temp2;
        temp2 = temp3;
    }

    start = temp1;



    //printing reversed list
    printf("\n-----------------------\nReversed List: ");
    temp = start;
    while(temp->next != NULL)
    {
        printf("%d ", temp->data);
        temp=temp->next;
    }
    printf("%d ", temp->data);



    //printing even numbers from the reversed list
    printf("\n-----------------------\nEven Numbers: ");
    temp = start;
    while(temp->next != NULL)
    {
        if(temp->data % 2 == 0)
        {
            printf("%d ", temp->data);
        }
        temp=temp->next;
    }
    if(temp->data % 2 == 0)
    {
        printf("%d ", temp->data);
    }



    return 0;
}

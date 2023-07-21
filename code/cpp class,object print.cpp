#include <bits/stdc++.h>
using namespace std;

class OnlineTicket {
    public:
    int price;
    string ownerName;
    string address;
    int ticketId;


void printOwnerDetails(string Name, string add) {
    cout << "Name: " << Name << ", Address: " << add<< endl;
}


void printTicketDetails(int Id, int tk) {
   cout<<"Ticket Id: "<<Id <<", Ticket Price: " << tk<<endl;
}

};

int main()
{
    OnlineTicket ticket1;
	OnlineTicket ticket2;
	OnlineTicket ticket3;

		ticket1.printOwnerDetails("David", "Dhaka");
        ticket1.printTicketDetails(2353, 450);

		ticket2.printOwnerDetails("Alice", "New York");
        ticket2.printTicketDetails(3353, 456);

		ticket3.printOwnerDetails("Bob", "London");
        ticket3.printTicketDetails(2393, 450);
}



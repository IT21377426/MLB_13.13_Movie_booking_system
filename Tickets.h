#include<iostream>
#include "Booking.h"

#define SIZE 10

using namespace std;

class Ticket{
	private:
		int TicketID;
		string TicketType;
		string TicketCategory;
		int SeatNo;
		Booking *book[SIZE];

	public:
		Ticket();
		Ticket(int b1, int b2);
		void setTicketDeatils(int pid, string ptype, string pcategory, int ps_no);
		int getTicketID();
		string getTicketType();
		string grtTicketCategory();
		int getSeatNo();
		void printThearterID();
		~Ticket();
};

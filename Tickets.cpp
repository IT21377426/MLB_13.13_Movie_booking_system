#include "Tickets.h"

Ticket::Ticket()
{
	TicketID = 0;
	TicketType = "";
	TicketCategory = "";
	SeatNo = 0;
	book[0] = new Booking(0);
	book[1] = new Booking(0);
}

Ticket::Ticket(int b1, int b2)
{
	book[0] = new Booking(b1);
	book[1] = new Booking(b2);
}

void Ticket::setTicketDeatils(int pid, string ptype, string pcategory, int ps_no)
{
	
}

int Ticket::getTicketID()
{
	
}

string Ticket::getTicketType()
{
	
}

string Ticket::grtTicketCategory()
{
	
}

int Ticket::getSeatNo()
{
	
}

Ticket::~Ticket()
{
	for (int i=0 ;i < SIZE; i++)
    {
      delete book[i];
    }
}


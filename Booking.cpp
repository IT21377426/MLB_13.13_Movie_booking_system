#include "Booking.h"

Booking::Booking()
{

}

Booking::Booking(int BID, int CID, int TID, Customer *pCus) 
{
	BookingID = BID;
	CusID = CID;
	TicketID = TID;
	cus = pCus;
	cus -> makeBooking(this);
}

void Booking::SetBookingID()
{
	
}

void Booking::SetCusID()
{
	
}

void Booking::SetTicketID()
{
	
}

void Booking::CreateBooking()
{
	
}

void Booking::CancelBooking()
{
	
}

Booking::~Booking()
{
	//Destructor
}
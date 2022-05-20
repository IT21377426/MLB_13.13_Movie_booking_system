#include <cstring>
#include "Payment.h"

Payment::Payment()
{

}

Payment::Payment(int pID, char pMethod[], int nTickets, Customer *p_cus)
{
	PaymentID = pID;
	strcpy(PaymentMethod, pMethod);
	NoOfTickets = nTickets;
	cus = p_cus;
	cus -> makePayment(this);
}

void Payment::addBooking(Booking *book1, Booking *book2, Booking *book3)
{
  book[0] = book1;
  book[1] = book2;
  book[2] = book3;	
}

void Payment::GeneratePayID()
{

}

void Payment::ValidatePayDetails()
{

}
void Payment::ConfirmPayment()
{

}
int Payment::TotalPrice()
{

}
Payment::~Payment()
{
	//Destructor
}


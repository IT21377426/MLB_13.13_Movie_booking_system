#ifndef BOOKING
#define BOOKING

#include "Customer.h"

class Booking
{
	private :
		int BookingID;
	  int CusID;
		int TicketID;
		Customer *cus;
		
	public :
		Booking();
		Booking(int BID, int CID, int TID, Customer *pCus); 
		void SetBookingID();
		void SetCusID();
		void SetTicketID();
		void CreateBooking();
		void CancelBooking();
		~Booking(); 			
};

#endif //BOOKING
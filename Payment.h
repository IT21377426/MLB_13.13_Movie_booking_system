#include "Customer.h"
#include "Booking.h"

#define SIZE 10

class Payment{
private:
	int PaymentID;
	char PaymentMethod[20];
	int NoOfTickets;
	Customer *cus;
	Booking *book[SIZE];

public:
	Payment();
	Payment(int pID, char pMethod[], int nTickets, Customer *p_us);
	void addBooking (Booking *book1, Booking *book2, Booking *book3);
	void GeneratePayID();
	void ValidatePayDetails();
	void ConfirmPayment();
	int TotalPrice();
	~Payment();
};

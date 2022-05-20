#include <iostream>
#include "Booking.h"
#include "Employee.h"
#include "Movie.h"
#include "Payment.h"

#define SIZE 10

using namespace std;

class Customer{

	private:
		int Cus_id;
		int Cus_NIC;
		string Cus_name;
		string Cus_email;		
	  Booking *book[SIZE];
		Movie *movie[SIZE];
		Payment *pay[SIZE];
    Employee *emp[SIZE];
		int noOfBooking;
		int noOfMovies;
		int noOfpayments;
		

	public:
		Customer ();
		Customer (int id, int nic, string name, string email,int nB, int nM, int nP);
		void setCustomerDetails(int pid, int pnic, string pname, string pemail);
		void Register ();
		void ViewAvailableMovies (Movie *m);
		void makeBooking(Booking *b);
		void makePayment (Payment *p);
		void BookingTickest ();	
		~Customer ();
};
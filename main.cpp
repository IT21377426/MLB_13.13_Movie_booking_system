#include <iostream>
#include "Booking.h"
#include "Customer.h"
#include "Employee.h"
#include "Movie.h"
#include "Payment.h"
#include "Theatre.h"
#include "Tickets.h"

using namespace std;

int main()
{
	Employee *emp = new Employee(2135,"Nirmal","nirmal@gmail.com");  //employee object
	
	Customer *cus = new Customer(1252,2000263786,"Kamal","kamal@gmail.com",2,1,2); //customer object
	Movie *mov = new Movie(122,"Titanic","Romantic",165,cus); //movie object

	Ticket *tic = new Ticket(102,103); //ticket object
	
	Payment *pay = new Payment(1112,"Credit",2,cus); //payment object
  
	Booking *book = new Booking(523,1252,102,cus); //booking object

	Theatre *thet = new Theatre(102,"Aqua","Nugegoda"); //Theatre object	
  
  delete emp;
  delete cus;
  delete mov;
  delete tic;
  delete pay;
  delete book;
  delete thet;
  
  return 0;
}
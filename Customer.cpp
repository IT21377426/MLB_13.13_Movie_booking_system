#include<iostream>
#include "Customer.h"
using namespace std;

Customer::Customer()
{
	Cus_id = 0;
	Cus_NIC = 0;
	Cus_name = "";
	Cus_email = "";
}

Customer::Customer(int id, int nic, string name, string email,int nB, int nM, int nP)
{
	Cus_id = id;
	Cus_NIC = nic;
	Cus_name = name;
	Cus_email = email;
	noOfBooking = nB;
	noOfMovies = nM;
	noOfpayments = nP;
}

void Customer::setCustomerDetails(int pid, int pnic, string pname, string pemail)
{
	
}

void Customer::Register()
{
	
}

void Customer::ViewAvailableMovies(Movie *m)
{
	if (noOfMovies < SIZE)
  {
    movie[noOfMovies] = m;
    noOfMovies++;
  }
}

void Customer::makeBooking(Booking *b)
{
	if (noOfBooking < SIZE)
  {
    book[noOfBooking] = b;
    noOfBooking++;
  }
}

void Customer::makePayment(Payment *p)
{
	if (noOfpayments < SIZE)
  {
    pay[noOfpayments] = p;
    noOfpayments++;
  }
}


void Customer::BookingTickest()
{
	
}

Customer::~Customer()
{
	//Destructor
}




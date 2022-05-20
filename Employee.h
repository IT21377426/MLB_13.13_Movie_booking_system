#include <iostream>
#include "Customer.h"
#define SIZE 10

using namespace std;

class Employee{
	private:
		int EmpID;
		string EmpName;
		string EmpEmail;
		Customer *cust;
		int noOfEmployees;
	public:
		Employee ();
		Employee (int Eid, string Ename, string E_mail);
		void setEmployeeDetails (int pid, string pname, string pemail);
		void addCustomer(Employee *E);
		void Login ();
		void IssuingTickets ();
		void CollectPayment ();
		~Employee();		
};

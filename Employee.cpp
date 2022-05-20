#include "Employee.h"

Employee::Employee()
{
	EmpID = 0;
	EmpName = "";
	EmpEmail = "";
}

Employee::Employee(int Eid, string Ename, string E_mail)
{
	EmpID = Eid;
	EmpName = Ename;
	EmpEmail = E_mail;
}

void Employee::setEmployeeDetails(int pid, string pname, string pemail)
{

}

void Employee::Login()
{
	
}

void Employee::IssuingTickets()
{
	
}

void Employee::CollectPayment()
{
	
}

Employee::~Employee()
{
	//Destructor
}

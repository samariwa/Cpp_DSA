#include <iostream>
#include <string>
using namespace std;

class Person {
	protected:
		string first_name;
		string last_name;

	public:
		//constructor
		Person(string first_name, string last_name): first_name(first_name), last_name(last_name) {}
		Person() = default; // To allow initialization without setter functions

		// First name setter
		void setFirstName(string first_name)
		{ 
			this->first_name = first_name;
		}

		// Last name setter
		void setLastName(string last_name)
		{
			this->last_name = last_name;
		}

		// class method
		string getName()
		{
			return first_name + " " + last_name;
		}

		// Print all info
		virtual void getFullInfo()
		{
			cout << "Name: " << getName() << endl;
		}
};

class Employee : public Person{
	private:
		string department;
	public:
		Employee(string first_name, string last_name, string department): Person(first_name, last_name), department(department) {}

		// Department setter
		void setDepartment(string department)
		{
			this->department = department;
		}

		// Department getter
		string getDepartment()
		{
			return department;
		}

		// Print all info (method exists in parent class so we will override)
		void getFullInfo() override
		{
			cout << "Name: " << first_name+" "+last_name << endl;
			cout << "Department: " << getDepartment() << endl;
		}
};

int main()
{
	Person p1("Samuel", "Mariwa");
	p1.getFullInfo();

	Employee e1("Suki", "Okinawa", "Sales");
	e1.getFullInfo();

	return 0;
}

#include <iomanip>
#include <string>
#include <iostream>
using namespace std;

class clsPerson {
private:
	int _id;
	string _firstName;
	string _lastName;
	string _email;
	string _phone;
public:
	clsPerson(int id ,string firstName,string lastName,string email,string phone) {
		_id = id;
		 _firstName  =  firstName;
		 _lastName =  lastName;
		 _email =  email;
		 _phone =  phone;
	}
	int getId() {
		return _id;
	}
	string getFirstName() {
		return _firstName;
	}
	string getLastName() {
		return _lastName;
	}
	string getFullName() {
		return _firstName + " " + _lastName;
	}
	string getEmail() {
		return _email;
	}
	string getPhone() {
		return _phone;
	}

	void sendEmail(string subject, string body) {
		cout << "\nsend email success to Email: " << _email
			<< "\n subject: " << subject
			<< "\n body: " << body << endl;
	}
	void sendPhone(string message) {
		cout << "\nsend message success to Phone: " << _phone
			<< "\n message: " << message << endl;
	}
	void PrintPersonInfo() {
		cout << " Info \n";
		cout << "___________________________________\n\n";
		cout << setw(16) << " ID         " << _id << endl;
		cout << setw(16) << " First Name " << _firstName << endl;
		cout << setw(16) << " Last Name  " << _lastName << endl;
		cout << setw(16) << " Full Name  " << getFullName() << endl;
		cout << setw(16) << " Email      " << _email << endl;
		cout << setw(16) << " Phone      " << _phone << endl;
		cout << "___________________________________\n";
	}

};

int main()
{
	clsPerson person1 = clsPerson(11, "A_A", "kamel", "email@mail.com", "009988776");

	person1.PrintPersonInfo();
	person1.sendEmail("subjet","this is email body");
	person1.sendPhone("message for phone");

}

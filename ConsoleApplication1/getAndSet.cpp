#include <iostream>
using namespace std;
class clsPerson
{
private:
    string _FirstName;
    string _LastName;

public:
    // Property Set
    void setFirstName(string FirstName)
    {
        _FirstName = FirstName;
    }
    // Property Get
    string getFirstName()
    {
        return _FirstName;
    }
    // Property Set
    void setLastName(string LastName)
    {
        _LastName = LastName;
    }
    // Property Get
    string getLastName()
    {
        return _LastName;
    }
    string FullName()
    {
        return _FirstName + " " + _LastName;
    }
    __declspec(property(get = getFirstName, put = setFirstName)) string FirstName;
    __declspec(property(get = getLastName, put = setLastName)) string LastName;
};
int main()
{
    clsPerson Person1;
    Person1.setFirstName("Ahmed");
    Person1.setLastName("Kamel");
    cout << "First Name:" << Person1.getFirstName() << endl;
    cout << "Last Name:" << Person1.getLastName() << endl;
    Person1.FirstName = "AA";
    Person1.LastName = "K";
    cout << "First Name:" << Person1.FirstName << endl;
    cout << "Last Name:" << Person1.LastName << endl;
    system("pause>0");
    return 0;
}
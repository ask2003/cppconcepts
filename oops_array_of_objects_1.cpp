/*
Write a program that would print the information (name, year of joining, salary, address) 
of three employees by creating a class named 'Employee'. The output should be as follows:
Name        Year of joining        Address
Robert        1994        64C- WallsStreat
Sam        2000        68D- WallsStreat
John        1999        26B- WallsStreat

*/

#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    string name;
    int year;
    string address;

public:
    Employee(string name1 = "null", int year1 = 2000, string address1 = "null") {
        name = name1;
        year = year1;
        address = address1;
    }

    string getname() const {
        return name;
    }

    int getyear() const {
        return year;
    }

    string getaddress() const {
        return address;
    }

    void setname(const string& name1) {
        name = name1;
    }

    void setyear(int year1) {
        year = year1;
    }

    void setaddress(const string& address1) {
        address = address1;
    }

    bool validname(const string& name) const {
        return !name.empty() && name != "\n";
    }

    bool validaddress(const string& address) const {
        return !address.empty() && address != "\n";
    }

    bool validyear(int year) const {
        return year >= 1990;
    }
};

int main() {
    const int MAX_EMPLOYEES = 100;
    Employee employees[MAX_EMPLOYEES];
    int choice = 1;
    int count = 0;

    do {
        cout << "Enter the Employee name: " << endl;
        string name;
        getline(cin, name);

        while (!employees[count].validname(name)) {
            cout << "Invalid name. Enter again: " << endl;
            getline(cin, name);
        }

        employees[count].setname(name);

        cout << "Enter the year of joining: " << endl;
        int year;
        cin >> year;

        while (!employees[count].validyear(year)) {
            cout << "Invalid year of joining. Enter again: " << endl;
            cin >> year;
        }

        employees[count].setyear(year);

        cin.ignore(); // Consume the newline character left in the buffer

        cout << "Enter the Employee address: " << endl;
        string address;
        getline(cin, address);

        while (!employees[count].validaddress(address)) {
            cout << "Invalid address. Enter again: " << endl;
            getline(cin, address);
        }

        employees[count].setaddress(address);

        cout << "Do you want to continue?" << endl;
        cout << "1. Yes." << endl;
        cout << "2. No." << endl;
        cin >> choice;
        cin.ignore(); // Consume the newline character left in the buffer

        if (choice == 1) {
            count++;
        }
    } while (choice == 1);

    // Display the header
    cout << "NAME \t \t \t YEAR OF JOINING \t \t \t ADDRESS \t \t \t" << endl;

    // Display information for each employee
    for (int i = 0; i <= count; i++) {
        cout << employees[i].getname() << "\t \t \t" << employees[i].getyear() << "\t \t \t"
             << employees[i].getaddress() << endl;
    }

    return 0;
}


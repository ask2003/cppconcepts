/*
Create a class named 'Member' having the following members:
Data members
1 - Name
2 - Age
3 - Phone number
4 - Address
It also has a function named 'printSalary' which prints the salary of the members.
Two classes 'Employee' and 'Manager' inherits the 'Member' class. The 'Employee' and 'Manager' 
classes have data members 'specialization' and 'department' respectively. 
Now, assign name, age, phone number, address and salary to an employee and a manager 
by making an object of both of these classes and print the same.
*/

#include <string>
#include <iostream>

using namespace std;

class Member {
    protected:
    string name;
    int age;
    long long int phone;
    string address;
    
    public:
    virtual int printSalary()=0;
    virtual void setSalary(int salary)=0;
    virtual bool isvalidsalary(int salary)=0;
    
    void setname(string name1){
        name=name1;
    }
    
    void setage(int age1){
        age=age1;
    }
    
    void setphone(long long int phone1){
        phone=phone1;
    }
    
    void setaddress(string address1){
        address=address1;
    }
    
    string getname(){
        return name;
    }
    
    int getage(){
        return age;
    }
    
    long long int getphone(){
        return phone;
    }
    
    string getaddress(){
        return address;
    }
    
    bool isvalidname(string name){
        return (!name.empty()&&name!="\n");
    }
    
    bool isvalidage(int age){
        return (age>=18);
    }
    
    bool isvalidphone(long long int phone){
        return (phone>=7000000000&&phone<=9999999999);
    }
    
    bool isvalidaddress(string address){
        return (!address.empty()&&address!="\n");
    }
};

class Employee:public Member {
    protected:
    string spec;
    int salary;
    
    public:
    Employee(string name1="null",int age1=18,long long int phone1=7561265219,string address1="57, Wall street",string spec1="CSE",int salary1=1500){
        name=name1;
        age=age1;
        phone=phone1;
        address = address1;
        spec=spec1;
        salary=salary1;
    }
    
    void setspec(string spec1){
        spec=spec1;
    }
    
    string getspec(){
        return spec;
    }
    
    void setSalary(int salary1) override {
        salary = salary1;
    }
    
    int printSalary() override {
        return salary;
    }
    
    bool isvalidspec(string spec){
        return (!spec.empty()&&spec!="\n");
    }
    
    bool isvalidsalary(int salary) override {
        return (salary>1500);
    }
};

class manager:public Member{
    protected:
    string dept;
    int salary;
    
    public:
    manager(string name1="null",int age1=18,long long int phone1=7561265219,string address1="57, Wall street",string dept1="IT",int salary1=2500){
        name=name1;
        age=age1;
        phone=phone1;
        address = address1;
        dept=dept1;
        salary=salary1;
    }
    
    void setdept(string dept1){
        dept=dept1;
    }
    
    string getdept(){
        return dept;
    }
    
    void setSalary(int salary1) override {
        salary = salary1;
    }
    
    int printSalary() override {
        return salary;
    }
    
    bool isvaliddept(string dept){
        return (!dept.empty()&&dept!="\n");
    }
    
    bool isvalidsalary(int salary) override {
        return (salary>1500);
    }
};

int main()
{
    cout<<"Enter the member type: "<<endl;
    cout<<"1. Employee"<<endl;
    cout<<"2. Manager"<<endl;
    
    int choice;
    cin>>choice;
    
    while(choice!=1&&choice!=2){
        cout<<"Invalid choice. Enter the choice again: "<<endl;
        cin>>choice;
    }
    cin.ignore();
    
    if(choice==1){
        Employee *m1=new Employee();
        cout<<"Enter the name: "<<endl;
        string name;
        getline(cin,name);
        
        while(!(m1->isvalidname(name))){
            cout<<"Enter valid name: "<<endl;
            getline(cin,name);
        }
        
        m1->setname(name);
        
        cout<<"Enter the age: "<<endl;
        int age;
        cin>>age;
        
        while(!(m1->isvalidage(age))){
            cout<<"Enter valid age: "<<endl;
            cin>>age;
        }
        
        m1->setage(age);
        
        cout<<"Enter the phone number: "<<endl;
        long long int phone;
        cin>>phone;
        
        while(!(m1->isvalidphone(phone))){
            cout<<"Enter valid phone number: "<<endl;
            cin>>phone;
        }
        
        m1->setphone(phone);
        
        cout<<"Enter the address: "<<endl;
        string address;
        getline(cin,address);
        
        while(!(m1->isvalidaddress(address))){
            cout<<"Enter valid address: "<<endl;
            getline(cin,address);
        }
        
        m1->setaddress(address);
        
        cout<<"Enter the salary: "<<endl;
        int salary;
        cin>>salary;
        
        while(!(m1->isvalidsalary(salary))){
            cout<<"Enter valid salary: "<<endl;
            cin>>salary;
        }
        
        m1->setSalary(salary);
        
        cout<<"Enter the Employee specialization: "<<endl;
        string spec;
        getline(cin,spec);
        
        while(!(m1->isvalidspec(spec))){
            cout<<"Enter valid Employee specialization: "<<endl;
            getline(cin,spec);
        }
        
        m1->setspec(spec);
        
        cout<<"\n=======xxxxxxxx=======xxxxxxxx=======xxxxxxxx=======\n";
        cout<<"Name of the Employee: "<<m1->getname()<<endl;
        cout<<"Age of the Employee: "<<m1->getage()<<endl;
        cout<<"Phone number of the Employee: "<<m1->getphone()<<endl;
        cout<<"Address of the Employee: "<<m1->getaddress()<<endl;
        cout<<"Salary of the Employee: "<<m1->printSalary()<<endl;
        cout<<"specialization of the Employee: "<<m1->getspec()<<endl;
        
    }
    else{
        manager *m2=new manager();
        cout<<"Enter the name: "<<endl;
        string name;
        getline(cin,name);
        
        while(!(m2->isvalidname(name))){
            cout<<"Enter valid name: "<<endl;
            getline(cin,name);
        }
        
        m2->setname(name);
        
        cout<<"Enter the age: "<<endl;
        int age;
        cin>>age;
        
        while(!(m2->isvalidage(age))){
            cout<<"Enter valid age: "<<endl;
            cin>>age;
        }
        
        m2->setage(age);
        
        cout<<"Enter the phone number: "<<endl;
        long long int phone;
        cin>>phone;
        
        while(!(m2->isvalidphone(phone))){
            cout<<"Enter valid phone number: "<<endl;
            cin>>phone;
        }
        
        m2->setphone(phone);
        
        cout<<"Enter the address: "<<endl;
        string address;
        getline(cin,address);
        
        while(!(m2->isvalidaddress(address))){
            cout<<"Enter valid address: "<<endl;
            getline(cin,address);
        }
        
        m2->setaddress(address);
        
        cout<<"Enter the salary: "<<endl;
        int salary;
        cin>>salary;
        
        while(!(m2->isvalidsalary(salary))){
            cout<<"Enter valid salary: "<<endl;
            cin>>salary;
        }
        
        m2->setSalary(salary);
        
        cout<<"Enter the Manager Department: "<<endl;
        string dept;
        getline(cin,dept);
        
        while(!(m2->isvaliddept(dept))){
            cout<<"Enter valid Manager Department: "<<endl;
            getline(cin,dept);
        }
        
        m2->setdept(dept);
        
        cout<<"\n=======xxxxxxxx=======xxxxxxxx=======xxxxxxxx=======\n";
        cout<<"Name of the Manager: "<<m2->getname()<<endl;
        cout<<"Age of the Manager: "<<m2->getage()<<endl;
        cout<<"Phone number of the Manager: "<<m2->getphone()<<endl;
        cout<<"Address of the Manager: "<<m2->getaddress()<<endl;
        cout<<"Salary of the Manager: "<<m2->printSalary()<<endl;
        cout<<"Department of the Manager: "<<m2->getdept()<<endl;
        
    }
    
    return 0;
}


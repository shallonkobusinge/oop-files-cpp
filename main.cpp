#include <iostream>
using namespace std;

class AbstractEmployee{
    virtual void askForSalary() = 0;
};

class Employee: AbstractEmployee{
private:
    int age;
protected:
    string firstName;

public:
    Employee(string firstName, int age){
        this->firstName = firstName;
        this->age = age;
    }
    void setFirstName(string firstName){
        this->firstName = firstName;
    }
    string getFirstName(){
        return this->firstName;
    }
    void setAge(int age){
        this->age = age;
    }
    int getAge(){
        return this->age;
    }
    virtual void work(){
        cout << "Employee is working in the office" << endl;
    }

    void print(){
        cout << "First Name: " << this->getFirstName() << endl;
        cout << "Age: " << this->getAge() << endl;
    }
    void askForSalary(){
        if(this->age > 30){
            cout << "Salary: " << this->age * 1000 << endl;
    } else {
        cout << "Salary: " << this->age * 500 << endl;
    }
    }

};

class Developer: public Employee{
private:
    string language;
public:
    Developer(string firstName, int age, string language): Employee(firstName, age){
        this->language = language;
    }
    void fixBug(){
        cout << firstName<<" FIXED THE BUG USING "<<language << endl;
    }
    void work(){
        cout << "Developer is working in the office" << endl;
    }
};

int main() {
    Employee employee = Employee("Shallon", 20);
//    employee.setAge(10);
//    employee.print();
//    employee.askForSalary();
    Developer developer = Developer("Shallon", 20, "Javascript");
    developer.fixBug();
    Employee* employeePtr = &developer;
    employeePtr->work();

    return 0;
}

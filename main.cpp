#include <iostream>
using namespace std;

class AbstractEmployee{
    virtual void askForSalary() = 0;
};

class Employee: AbstractEmployee{
private:
    string firstName;
    int age;
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

int main() {
    Employee employee = Employee("Kobsh", 20);
    employee.setAge(10);
    employee.print();
    employee.askForSalary();

    return 0;
}

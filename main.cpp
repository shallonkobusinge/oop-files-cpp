//#include <iostream>
//using namespace std;
#include "utils/header.h"
#include "services/user-service.cpp"
//
//class AbstractEmployee{
//    virtual void askForSalary() = 0;
//};
//
//class Employee: AbstractEmployee{
//private:
//    int age;
//protected:
//    string firstName;
//
//public:
//    Employee(string firstName, int age){
//        this->firstName = firstName;
//        this->age = age;
//    }
//    void setFirstName(string firstName){
//        this->firstName = firstName;
//    }
//    string getFirstName(){
//        return this->firstName;
//    }
//    void setAge(int age){
//        this->age = age;
//    }
//    int getAge(){
//        return this->age;
//    }
//    virtual void work(){
//        cout << "Employee is working in the office" << endl;
//    }
//
//    void print(){
//        cout << "First Name: " << this->getFirstName() << endl;
//        cout << "Age: " << this->getAge() << endl;
//    }
//    void askForSalary(){
//        if(this->age > 30){
//            cout << "Salary: " << this->age * 1000 << endl;
//    } else {
//        cout << "Salary: " << this->age * 500 << endl;
//    }
//    }
//
//};
//
//class Developer: public Employee{
//private:
//    string language;
//public:
//    Developer(string firstName, int age, string language): Employee(firstName, age){
//        this->language = language;
//    }
//    void fixBug(){
//        cout << firstName<<" FIXED THE BUG USING "<<language << endl;
//    }
//    void work(){
//        cout << "Developer is working in the office" << endl;
//    }
//};

int main() {
//    Employee employee = Employee("Shallon", 20);
//    employee.setAge(10);
//    employee.print();
//    employee.askForSalary();
//    Developer developer = Developer("Shallon", 20, "Javascript");
//    developer.fixBug();
//    Employee* employeePtr = &developer;
//    employeePtr->work();


    UserService userService;
    User user;
    int number;
    cout << "Enter the number of users: ";
    cin >> number;
    for (int i = 0; i < number; i++) {
        cout << "Enter the first name: ";
        cin >> user.firstName;
        cout << "Enter the last name: ";
        cin >> user.lastName;
        cout << "Enter the username: ";
        cin >> user.username;
        cout << "Enter the age: ";
        cin >> user.age;
        userService.addUser(user);
    }
    userService.removeUser("Shallon");
     User user1 = userService.getUser("Shallon");
    cout << "First Name: " << user1.firstName <<" Last Name "<<user1.lastName<<" Age "<<user1.age << endl;
    userService.updateUser(user);

    vector<User> users = userService.getAllUsers();
    for (int i = 0; i < users.size(); i++) {
        cout << users[i].firstName << " " << users[i].lastName << " " << users[i].username << " " << users[i].age << endl;
    }

    Employee employee;


    return 0;
}

//
// Created by kobsh on 01/07/2022.
//
#include "iostream"
#pragma once
using namespace std;

enum EDepartment{
    IT,
    HR,
    ACCOUNTING,
    MARKETING,
    SALES
};

class User{
public:
    string firstName;
    string lastName;
    string username;
    int age;
};

class Employee{
public:
    int userId;
    EDepartment department;
};

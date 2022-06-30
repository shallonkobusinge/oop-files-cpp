//
// Created by kobsh on 01/07/2022.
//
#include "../utils/header.h"

class UserService {
public:
    void addUser(User user){
        ofstream file;
        file.open("users.txt", ios::app);
        file << user.firstName << " " << user.lastName << " " << user.username << " " << user.age << endl;
        file.close();
    };
    void removeUser(string username){
        vector<string> lines;
        ifstream file("users.txt");
        string line;
        while (getline(file, line)) {
            lines.push_back(line);
        }
        file.close();
        ofstream file2;
        file2.open("users.txt");
        for (int i = 0; i < lines.size(); i++) {
            if (lines[i].find(username) == string::npos) {
                file2 << lines[i] << endl;
            }
        }
        file2.close();
    };
    void updateUser(User user){
        removeUser(user.username);
        addUser(user);
    };
    vector<User> getAllUsers(){
        vector<User> users;
        ifstream file("users.txt");
        string line;
        while (getline(file, line)) {
            stringstream ss(line);
            string firstName, lastName, username, age;
            getline(ss, firstName, ' ');
            getline(ss, lastName, ' ');
            getline(ss, username, ' ');
            getline(ss, age, ' ');
            User user;
            user.firstName = firstName;
            user.lastName = lastName;
            user.username = username;
            user.age = stoi(age);
            users.push_back(user);
        }
        file.close();
        return users;
    };
    User getUser(string username){
        vector<User> users = getAllUsers();
        for (int i = 0; i < users.size(); i++) {
            if (users[i].username == username) {
                return users[i];
            }
        }
        return User();
    };
};






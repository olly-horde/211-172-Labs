#pragma once

#include <iostream>

class Person {

private:

    int id;

    std:: string login;

    std:: string password;

public:

    void print_data() {

        std:: cout << "id: " << id << " login: " << login << " password: " << password << '\n';

    }

    Person(int i, std:: string l, std:: string p)

        : id(i), login(l), password(p) {}
        
};

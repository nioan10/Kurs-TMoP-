#pragma once
#include "Header.h"

class Student_Fullname {
public:
    void SetFirstName(string name) {
        Firstname = name;
    }
    void SetSurname(string name) {
        Surname = name;
    }
    void SetPatronim(string name) {
        Ptronymic = name;
    }
    string GetFirstName() {
        return Firstname;
    }
    string GetSurname() {
        return Surname;
    }
    string GetPtronymic() {
        return Ptronymic;
    }
protected:
    string Firstname;
    string Surname;
    string Ptronymic;
};
#include "Header.h"
#include "Student_FN.cpp"
#include "Grades.cpp"

struct MyDate {
    unsigned short D;
    unsigned short M;
    unsigned short Y;
};

class Student_BD {
public:
    void SetBirthDate(MyDate* Date) {
        SetBirthDate(Date->D, Date->M, Date->Y);
    }
    void SetBirthDate(int d, int m, int y) {
        BD = d; BM = m; BY = y;
    }
    MyDate GetBirthDate() {
        MyDate SBirthDate;
        SBirthDate.D = BD;
        SBirthDate.M = BM;
        SBirthDate.Y = BY;
        return SBirthDate;
    }
    string GetBirthDateString() {
        string BirthDateString = to_string(BD) + '.' + to_string(BM) + '.' + to_string(BY);
        return BirthDateString;
    }
protected:
    unsigned short BD;
    unsigned short BM;
    unsigned short BY;
};


struct strStudent {
    string Firstname, Secondname, Patr;
    unsigned short UID = 0;
    string Zach;
    unsigned short BirthD = 1, BirthM = 1, BirthY = 2000;
    string Sex;
    string Department, Faculty, Group;
    unsigned short Y_Entrance = 2012;
    strSemestr strGrades[9];
};

class Student : public Student_Fullname, public Student_BD, public Semestr, public clStudy_Info {
public:
    int UID;
    void SetSTUDUID(string uid) {
        STUDENT_UID = uid;
    }
    void SetSex(string S) {
        sex = S;
    }
    string GetSTUDUID() {
        return STUDENT_UID;
    }
    string GetSex() {
        return sex;
    }
protected:
    string STUDENT_UID;
    string sex;
public:
    Semestr Grades[9];
    Student() {
        UID = 0;
        SetSTUDUID("00А0000");
        SetFirstName("Заглушко");
        SetSurname("Заглушкин");
        SetPatronim("Заглушкович");
        SetBirthDate(1, 1, 2004);
        SetSex("М");
        SetDepartment("ННН");
        SetFaculty("НН-0");
        SetGroup("НННН-00-00");
        SetYearEntrance(2022);

    }
    Student(strStudent* S) {
        UID = S->UID;
        SetSTUDUID(S->Zach);
        SetFirstName(S->Firstname);
        SetSurname(S->Secondname);
        SetPatronim(S->Patr);
        SetBirthDate(S->BirthD, S->BirthM, S->BirthY);
        SetSex(S->Sex);
        SetDepartment(S->Department);
        SetFaculty(S->Faculty);
        SetGroup(S->Group);
        SetYearEntrance(S->Y_Entrance);

    }
};
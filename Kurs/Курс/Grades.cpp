#include "Header.h"

struct strStudy_Info {
    unsigned short Year_entrance = 2017;
    string Faculty;
    string Department;
    string Group;
};

struct str_subject {
    unsigned short SUBJ_ID = 0;
    string Subject_Name;
    unsigned short Subject_mark = 5;
};

class clStudy_Info {
protected:
    unsigned short Y_ENTR;
    string Faculty;
    string Department;
    string Group;
public:
    unsigned short GetYearEntrance() {
        return Y_ENTR;
    }
    string GetFaculty() {
        return Faculty;
    }
    string GetDepartment() {
        return Department;
    }
    string GetGroup() {
        return Group;
    }
    strStudy_Info GetStudyInfo() {
        strStudy_Info ST_INFO;
        ST_INFO.Department = GetDepartment();
        ST_INFO.Faculty = GetFaculty();
        ST_INFO.Group = GetGroup();
        ST_INFO.Year_entrance = GetYearEntrance();
        return ST_INFO;
    }
    void SetYearEntrance(unsigned short Y_ENT) {
        Y_ENTR = Y_ENT;
    }
    void SetFaculty(string F) {
        Faculty = F;
    }
    void SetDepartment(string D) {
        Department = D;
    }
    void SetGroup(string G) {
        Group = G;
    }
    void SetStudyInfo(strStudy_Info* INFO) {
        SetYearEntrance(INFO->Year_entrance);
        SetFaculty(INFO->Faculty);
        SetDepartment(INFO->Department);
        SetGroup(INFO->Group);

    }
};

class subject {
protected:
    unsigned short SUBJ_ID;
public:
    string Subject_Name;
    unsigned short Subject_mark;
    subject() {
        SUBJ_ID = 000; Subject_Name = "Предмет заглушка"; Subject_mark = 5;
    };
    subject(str_subject* SUBJ) {
        SetSubject(SUBJ->SUBJ_ID, SUBJ->Subject_Name, SUBJ->Subject_mark);
    };
    void SetSubject(unsigned short subj_id, string subject_name, unsigned short subject_mark) {
        SUBJ_ID = subj_id; Subject_Name = subject_name; Subject_mark = subject_mark;
    }
    unsigned short GetID() {
        return SUBJ_ID;
    };
};

struct strSemestr {
    unsigned short SUBJ = 10;
    str_subject Sem[10];
};

class Semestr : public subject {
public:
    unsigned short SUBJ_NUM = 10;
    subject Sem[10];
    Semestr() {
        for (int i = 0; i < SUBJ_NUM; i++) {
            Sem[i].Subject_Name = "Заглушка";
            Sem[i].Subject_mark = 5;
        }
    }
};

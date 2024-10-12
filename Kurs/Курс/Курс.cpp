#pragma once
#include "Student_Info.cpp"

int isValidInt(string num) {
    if (num == "" || num.length() > 9)
        return 0;
    num.append("a");

    if (num.find_first_not_of("0123456789") != num.length() - 1)
        return 0;
    return 1;
}

int isValidSex(string num) {
    if (num == "" || num.length() != 1)
        return 0;
    num.append("a");
    if (num.find_first_not_of("МЖ") != num.length() - 1)
        return 0;
    return 1;
}

int isValidSubject(string name) {
    if (name == "" || name.length() > 60)
        return 0;
    name.append("*");
    if (name.find_first_not_of("АБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯабвгдеёжзийклмнопрстуфхцчшщъыьэюя -_") != name.length() - 1)
        return 0;
    return 1;
};

int isValidSurName(string name) {
    if (name == "" || name.length() > 40)
        return 0;
    name.append("*");
    if (name.find_first_not_of("АБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯабвгдеёжзийклмнопрстуфхцчшщъыьэюя-") != name.length() - 1)
        return 0;
    return 1;
}

int isValidNamePatronim(string name) {
    if (name == "" || name.length() > 30)
        return 0;
    name.append("*");
    if (name.find_first_not_of("АБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯабвгдеёжзийклмнопрстуфхцчшщъыьэюя") != name.length() - 1)
        return 0;
    return 1;
}

int isValidMark(string name) {
    if (name == "" || name.length() > 1)
        return 0;
    name.append("*");
    if (name.find_first_not_of("2345") != name.length() - 1)
        return 0;
    return 1;
}

int isValidFaculty(string name) {
    if (name == "" || name.length() > 6)
        return 0;
    name.append("*");
    if (name.find_first_not_of("АБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ") != name.length() - 1)
        return 0;
    return 1;
}

int isValidKaf(string name) {
    if (name == "" || name.length() > 5 || name.length() < 4)
        return 0;
    name.append("*");
    if (name.find_first_not_of("АБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ-1234567890") != name.length() - 1)
        return 0;
    if (name.find('-') != 2)
        return 0;
    if (name.find_first_not_of("АБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ") != 2)
        return 0;
    if (name.find_first_of("1234567890") != 3)
        return 0;
    if (name.find_last_of("АБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ") == 4)
        return 0;
    return 1;
}

int isValidZach(string name) {
    if (name == "" || name.length() != 7)
        return 0;
    name.append("*");
    if (name.find_first_not_of("АБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ1234567890") != name.length() - 1)
        return 0;
    if (name.find_first_not_of("1234567890") != 2 && name.find_first_not_of("1234567890") < name.length()) {
        cout << name.find_first_not_of("1234567890");
        return 0;
    }
    if (name.find_last_of("0123456789") != 6 && name.find_first_not_of("1234567890") < name.length() - 1) {
        cout << name.find_last_of("0123456789");
        return 0;
    }
    return 1;
}

int isValidGroup(string name) {
    if (name == "" || name.length() != 10)
        return 0;
    name.append("*");
    if (name.find_first_not_of("АБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ1234567890-") != name.length() - 1)
        return 0;
    if (name.find('-') != 4)
        return 0;
    if (name.rfind('-') != 7)
        return 0;
    if (name.find_last_of("АБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ") != 3 && name.find_last_of("АБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ") < name.length() - 1)
        return 0;
    if (name.find_first_of("1234567890") != 5)
        return 0;
    if (name.find_last_of("1234567890") != 9 && name.find_last_of("1234567890") < name.length() - 1)
        return 0;
    return 1;
}

int isValidBirth(int BD, int BM, int BY) {
    if ((BY < 1970) || BY > 2023)
        return 0;
    if ((BM < 1) || (BM > 12))
        return 0;
    switch (BM)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12: {
        if ((BD > 31) || (BD < 0))
            return 0;
    }
    case 4: case 6: case 9: case 11: {
        if ((BD > 30) || (BD < 0))
            return 0;
    }
    case 2: {
        if (((BD > 29) || (BD < 0)) && (BY % 4 == 0))
            return 0;
        if (((BD > 28) || (BD < 0)) && ((BY % 4 != 0) || (BY == 2000)))
            return 0;
    }
    }
    return 1;
}

int isValidEntrance(int Year) {
    if (Year < 2019)
        return 0;
    if (Year > 2023)
        return 0;
    return 1;
}

void rus() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
}

int Subjects_Count() {
    char CUR_SUBJ; unsigned short Subject_count, count = 0;
    fstream file;
    file.open("subject_DB.txt", ios::in | ios::app);
    while (!file.eof()) {
        file >> CUR_SUBJ;
        if (CUR_SUBJ == '+') {
            count++;
        }
    }
    Subject_count = count / 2;
    return Subject_count;
}

int Students_Count() {
    char CUR_STD; unsigned short count = 0;
    fstream file;
    file.open("1.txt", ios::in | ios::app);
    while (!file.eof()) {
        file >> CUR_STD;
        if (CUR_STD == '#') {
            count++;
        }
    }
    return count-1;
}

int Menu_Start() {
    int STD_NUM = Students_Count(); int PRG_NUM = Subjects_Count();
    string MENU_TEMP; int MENU_NUM = -1; 
    for (; MENU_NUM != 0;) {
        cout << '|'; cout.width(60); cout.fill('-'); cout << '|' << endl;
        cout << '|'; cout.width(59);  cout.fill(' '); cout << left << " Добро пожаловать в базу данных студентов ВУЗа"; cout << '|' << endl;
        cout << '|'; cout.width(60); cout.fill('-'); cout << right << '|' << endl; 
        cout << '|'; cout.width(59);  cout.fill(' '); cout << left << " Наименование ВУЗа: РТУ МИРЭА"; cout << '|' << endl;
        cout << '|'; cout.width(60); cout.fill('-'); cout << right << '|' << endl;
        cout << '|'; cout.width(28); cout.fill(' '); cout << left << " Кол-во студентов: " << STD_NUM << '|';
        cout.width(28); cout.fill(' '); cout << left << ' ' << '|' << endl;
        cout << '|'; cout.width(27); cout << left << " Кол-во предметов: " << PRG_NUM << '|'; 
        cout.width(28); cout.fill(' '); cout << "  " << left << '|' << endl;
        cout << '|'; cout.width(60); cout.fill('-'); cout << right << '|' << endl;
        cout << '|'; cout.width(59);  cout.fill(' '); cout << left << " Выберите операцию взаимодействия: "; cout << '|' << endl;
        cout << '|'; cout.width(59);  cout.fill(' '); cout << left << " 1 - Войти в базу данных"; cout << '|' << endl;
        cout << '|'; cout.width(59);  cout.fill(' '); cout << left << " 0 - Выйти из базы данных"; cout << '|' << endl;
        cout << '|'; cout.width(60); cout.fill('-'); cout << right << '|' << endl;
        cout << "Введите операцию взаимодействия: "; getline(cin, MENU_TEMP);
        if (isValidInt(MENU_TEMP)) {
            MENU_NUM = stoi(MENU_TEMP);
            switch (MENU_NUM)
            {
            case 1: cout << "Выполняем вход в базу данных студентов"; system("cls"); Menu_Menu(); break;
            case 0: {cout << "Выход из базы данных студентов\n"; return 0;}
            default: cout << "Ошибка ввода\n"; Sleep(1000); system("cls"); break;
            }
        }
        else { cout << "Ошибка ввода\n"; cls; }
    }
}

int Menu_Menu() {
    string MENU_TEMP; int NUM_MENU = -1, I_MENU = 1;
    while (I_MENU == 1) {
        cout << '|'; cout.width(60); cout.fill('-'); cout << '|' << endl;
        cout << '|'; cout.width(59); cout.fill(' '); cout << "База данных студентов ВУЗа" << '|' << endl;
        cout << '|'; cout.width(60); cout.fill('-'); cout << '|' << endl;
        cout << '|'; cout.width(59);  cout.fill(' '); cout << left << " Выберите операцию взаимодействия: "; cout << '|' << endl;
        cout << '|'; cout.width(59);  cout.fill(' '); cout << left << " 1 - Переход к базе предметов"; cout << '|' << endl;
        cout << '|'; cout.width(59);  cout.fill(' '); cout << left << " 2 - Открыть список студентов"; cout << '|' << endl;
        cout << '|'; cout.width(59);  cout.fill(' '); cout << left << " 3 - Выполнение индивидуального задания"; cout << '|' << endl;
        cout << '|'; cout.width(59);  cout.fill(' '); cout << left << " 4 - Назад в меню"; cout << '|' << endl;
        cout << '|'; cout.width(60); cout.fill('-'); cout << right << '|' << endl;
        cout << "Введите операцию взаимодействия: ";  getline(cin, MENU_TEMP);
        if (isValidInt(MENU_TEMP)) {
            NUM_MENU = stoi(MENU_TEMP);
            switch (NUM_MENU)
            {
            case 1: {cout << "Переход к заполнению полей нового предмета"; Sleep(1000); system("cls"); Menu_Subject_List(); break; }
            case 2: {cout << "Переход к списку стуендтов"; Sleep(1000); system("cls"); Menu_Student_List(); break; }
            case 3: {cout << "Переход к выполнению индвидуального задания"; system("cls"); Sleep(1000); IndividualTask(); break; }
            case 4: {cout << "Возврат в меню"; Sleep(500); system("cls"); I_MENU = 0; break; }
            default: {cout << "Ошибка ввода"; Sleep(1000); system("cls"); break; }
            }
        }
        else { cout << "Ошибка ввода"; cls; }
    }
    return 0;
}

int Menu_Subject_List() {
    string MENU_TEMP, temp; int NUM_MENU; string CUR_SUBJ; unsigned short CUR_ID; unsigned short subj_num = Subjects_Count(); int I_MENU = -1;
    while (I_MENU != 0) {
        fstream file;
        file.open("subject_DB.txt", ios::out | ios::in | ios::app);
        cout << '|'; cout.width(80); cout.fill('-'); cout << '|' << endl;
        cout << '|'; cout.width(79); cout.fill(' '); cout << "База данных предметов по программам ВУЗа" << '|' << endl;
        cout << '|'; cout.width(80); cout.fill('-'); cout << '|' << endl;
        cout << '|'; cout.width(15); cout.fill(' '); cout << left << "UID предмета" << '|'; cout.width(63); cout.fill(' '); cout << "Наименование предмета" << '|' << endl;
        cout << '|'; cout.width(80); cout.fill('-'); cout << '|' << endl;
        char temp1 = '-';
        for (int i = 0; i < subj_num; i++) {
            file >> temp1;
            while (temp1 != '+') {
                file.seekp(-1, ios::cur);
                file >> CUR_ID;
                file >> temp1;
            }
            file >> temp1; char SUBJ_temp = ' '; CUR_SUBJ = ' ';
            while (temp1 != '+') {
                file.seekp(-1, ios::cur);
                file >> SUBJ_temp;
                CUR_SUBJ += SUBJ_temp;
                file >> temp1;
            }
            cout << '|'; cout.width(15); cout.fill(' '); cout << left << CUR_ID << '|'; cout.width(63); cout.fill(' '); cout << CUR_SUBJ << '|' << endl;
        }
        file.close();
        cout << '|'; cout.width(80); cout.fill('-'); cout << right << '|' << endl;
        cout << '|'; cout.width(79); cout.fill(' '); cout << "Выберите операцию с базой предметов ВУЗа:" << '|' << endl;
        cout << '|'; cout.width(80); cout.fill('-'); cout << '|' << endl;
        cout << '|'; cout.width(79); cout.fill(' '); cout << "0 - Возврат в предыдущее меню" << '|' << endl;
        cout << '|'; cout.width(79); cout.fill(' '); cout << "1 - Ввести новый предмет в базу данных" << '|' << endl;
        cout << '|'; cout.width(80); cout.fill('-'); cout << '|' << endl;
        cout << "Введите операцию взаимодействия: "; getline(cin, MENU_TEMP);
        if (isValidInt(MENU_TEMP)) {
            NUM_MENU = stoi(MENU_TEMP);
            switch (NUM_MENU)
            {
            case 1: { Menu_New_Subject(); cls; break; };
            case 0: {cout << "Возврат к меню базы данных"; Sleep(500); system("cls"); I_MENU = 0; break; };
            default: {cout << "Ошибка ввода"; Sleep(500); system("cls"); break; };
            }
        }
    }
    return 0;
}

int Menu_Student_List() {
    string MENU_TEMP; int NUM_MENU; string UID; unsigned short UID_I, I_MENU = -1;
    while (I_MENU != 0) {
        fstream file;
        file.open("1.txt", ios_base::in | ios_base::out | ios_base::app);
        cout << '|'; cout.width(80); cout.fill('-'); cout << '|' << endl;
        cout << '|'; cout.width(79); cout.fill(' '); cout << "Список студентов ВУЗа" << '|' << endl;
        cout << '|'; cout.width(80); cout.fill('-'); cout << '|' << endl;
        cout << '|'; cout.width(15); cout.fill(' '); cout << "UID студента" << '|'; cout.width(20); cout.fill(' '); cout << "Группа студента" << '|'; cout.width(42); cout << "ФИ Студента" << '|' << endl;
        cout << '|'; cout.width(80); cout.fill('-'); cout << '|' << endl;
        string STR, STR1, UID_S;
        for (int i = 0; i < Students_Count(); i++) {
            file >> STR;
            STR1 = STR;
            UID_S = STR1;
            UID_S.erase(UID_S.find('+'), UID_S.length());
            if (i < 10) {
                STR.erase(0, 2);
            }
            if (i >= 10) {
                STR.erase(0, 3);
            }
            STR.erase(STR.find(':'), STR.length());
            STR.erase(STR.rfind('.'), STR.length());
            STR1.erase(0, STR1.find(':') + 1);
            STR1.erase(STR1.find(':'), STR1.length()); STR1.erase(0, STR1.rfind('.') + 1);
            cout << '|'; cout.width(15); cout.fill(' '); cout << UID_S; cout << '|'; cout.width(20); cout.fill(' '); cout << STR1;  cout << '|'; cout.width(42); cout.fill(' '); cout << STR; cout << '|' << endl; //цикл при чтении файла
        }
        cout << '|'; cout.width(80); cout.fill('-'); cout << '|' << endl;
        cout << '|'; cout.width(79);  cout.fill(' '); cout << left << " Выберите операцию взаимодействия: "; cout << '|' << endl;
        cout << '|'; cout.width(79); cout.fill(' '); cout << "1 - Вывод информации о студенте по UID" << '|' << endl;
        cout << '|'; cout.width(79); cout.fill(' '); cout << "2 - Добавление нового студента в Базу Данных" << '|' << endl;
        cout << '|'; cout.width(79); cout.fill(' '); cout << "3 - Редактирование информации о студенте по UID" << '|' << endl;
        cout << '|'; cout.width(79); cout.fill(' '); cout << "4 - Удаление информации о студенте по UID" << '|' << endl;
        cout << '|'; cout.width(79); cout.fill(' '); cout << "0 - Возврат в предыдущее меню" << '|' << endl;
        cout << '|'; cout.width(80); cout.fill('-'); cout << right << '|' << endl;
        cout << "Введите операцию взаимодействия: "; getline(cin, MENU_TEMP);
        if (isValidInt(MENU_TEMP)) {
            NUM_MENU = stoi(MENU_TEMP);
            switch (NUM_MENU) {
            case 1: {cout << "Выбран вывод информации о студенте по UID: ";
                getline(cin, UID);
                if (isValidInt(UID)) {
                    UID_I = stoi(UID);
                    int n = Students_Count();
                    cls; Menu_Student_Info(UID_I);
                }
                else {
                    cout << "Ошибка ввода"; Sleep(1000); cls; break;
                }
                break;
            }
            case 2: {
                cout << "Выбрано добавление нового студента в Базу Данных"; Sleep(1000); cls; Menu_New_Student(); break;
            }
            case 3: {
                cout << "Выбрано редактирование информации о студенте по UID : "; getline(cin, UID);
                if (isValidInt(UID)) {
                    UID_I = stoi(UID);
                    int n = Students_Count();
                    cls; Menu_Changing_Info(UID_I);
                }
                else {
                    cout << "Ошибка ввода"; Sleep(1000); cls; break;
                }
                break;
            }
            case 4: { cout << "Выбран пункт удаления информации о студенте по UID: "; getline(cin, UID);
                if (isValidInt(UID)) {
                    UID_I = stoi(UID);
                    int n = Students_Count();
                    if (UID_I + 1 <= n) {
                        cls; Menu_Delete_User(UID_I);
                    }
                    else {
                        cout << "Ошибка ввода"; Sleep(1000); cls; break;
                    }
                }
                else {
                    cout << "Ошибка ввода"; Sleep(1000); cls; break;
                }
                break;
            }
            case 0: {cout << "Возврат в предыдущее меню"; Sleep(1000); cls; I_MENU = 0; break; }
            default: {cout << "Ошибка ввода"; Sleep(1000); cls; break; }
            }
        }
        else { cout << "Ошибка ввода"; cls; }
    }
    return 0;
};

Student* ReturnInfo(int Student_Num) {
    fstream file;
    file.open("1.txt", ios_base::in | ios_base::out | ios_base::app);
    string Student_String, STD_NUM; unsigned short UID; string STD_TEMP;
    file >> Student_String;
    STD_NUM = Student_String; STD_NUM.erase(STD_NUM.find('+'), STD_NUM.length()); UID = stoi(STD_NUM);
        while (UID != Student_Num) {
            if (file.eof()) {
                Menu_Student_List();
                break;
            }
            file >> Student_String;
            STD_NUM = Student_String; STD_NUM.erase(STD_NUM.find('+'), STD_NUM.length()); UID = stoi(STD_NUM);
        }
        Student_String.erase(0, Student_String.find('+') + 1);
        Student* clsStudent = new Student; 
        MyDate* BirthDateS = new MyDate; unsigned short D, M, Y;
        STD_TEMP = Student_String; STD_TEMP.erase(STD_TEMP.find('.'), STD_TEMP.length());
        clsStudent->SetFirstName(STD_TEMP);
        STD_TEMP = Student_String; STD_TEMP.erase(0, STD_TEMP.find('.') + 1); STD_TEMP.erase(STD_TEMP.find('.'), STD_TEMP.length());
        clsStudent->SetSurname(STD_TEMP);
        STD_TEMP = Student_String; STD_TEMP.erase(0, STD_TEMP.find('.') + 1); STD_TEMP.erase(0, STD_TEMP.find('.') + 1); STD_TEMP.erase(STD_TEMP.find(':'), STD_TEMP.length());
        clsStudent->SetPatronim(STD_TEMP);
        Student_String.erase(0, Student_String.find(':') + 1);
        STD_TEMP = Student_String; STD_TEMP.erase(STD_TEMP.find('.'), STD_TEMP.length());
        clsStudent->SetDepartment(STD_TEMP);
        STD_TEMP = Student_String; STD_TEMP.erase(0, STD_TEMP.find('.') + 1); STD_TEMP.erase(STD_TEMP.find('.'), STD_TEMP.length());
        clsStudent->SetFaculty(STD_TEMP);
        STD_TEMP = Student_String; STD_TEMP.erase(0, STD_TEMP.find('.') + 1); STD_TEMP.erase(0, STD_TEMP.find('.') + 1); STD_TEMP.erase(STD_TEMP.find(':'), STD_TEMP.length());
        clsStudent->SetGroup(STD_TEMP);
        Student_String.erase(0, Student_String.find(':') + 1);
        STD_TEMP = Student_String;
        STD_TEMP.erase(STD_TEMP.find('.'), STD_TEMP.length());
        D = stoi(STD_TEMP);
        STD_TEMP = Student_String; STD_TEMP.erase(0, STD_TEMP.find('.') + 1); STD_TEMP.erase(STD_TEMP.find('.'), STD_TEMP.length());
        M = stoi(STD_TEMP);
        STD_TEMP = Student_String; STD_TEMP.erase(0, STD_TEMP.find('.') + 1); STD_TEMP.erase(0, STD_TEMP.find('.') + 1); STD_TEMP.erase(STD_TEMP.find(':'), STD_TEMP.length());
        Y = stoi(STD_TEMP);
        BirthDateS->D = D; BirthDateS->M = M; BirthDateS->Y = Y;
        clsStudent->SetBirthDate(BirthDateS);
        Student_String.erase(0, Student_String.find(':') + 1);
        STD_TEMP = Student_String; STD_TEMP.erase(STD_TEMP.find('>'), STD_TEMP.length());
        clsStudent->SetYearEntrance(stoi(STD_TEMP));
        Student_String.erase(0, Student_String.find('>') + 1);
        STD_TEMP = Student_String; STD_TEMP.erase(STD_TEMP.find('<'), STD_TEMP.length());
        clsStudent->SetSTUDUID(STD_TEMP);
        Student_String.erase(0, Student_String.find('<') + 1);
        STD_TEMP = Student_String; STD_TEMP.erase(STD_TEMP.find('!'), STD_TEMP.length());
        clsStudent->SetSex(STD_TEMP);
        Student_String.erase(0, Student_String.find('!') + 1);
        for (int i = 1; i < (2023 - clsStudent->GetYearEntrance()) * 2; i++) {
            STD_TEMP = Student_String;
            STD_TEMP.erase(STD_TEMP.find(']'), STD_TEMP.length());
            string SBJ_TEMP;
            STD_TEMP.erase(STD_TEMP.find('|'), STD_TEMP.length());
            int SBJ_NUM1 = stoi(STD_TEMP);
            clsStudent->Grades[i-1].SUBJ_NUM = SBJ_NUM1;
            Student_String.erase(0, Student_String.find('|') + 1);
            STD_TEMP = Student_String;
            for (int j = 0; j < SBJ_NUM1; j++) {
                SBJ_TEMP = STD_TEMP;
                SBJ_TEMP.erase(SBJ_TEMP.find('.'), SBJ_TEMP.length());
                clsStudent->Grades[i - 1].Sem[j].Subject_Name = SBJ_TEMP;
                SBJ_TEMP = STD_TEMP;
                SBJ_TEMP.erase(0, SBJ_TEMP.find('.') + 1); SBJ_TEMP.erase(SBJ_TEMP.find('+'), SBJ_TEMP.length());
                clsStudent->Grades[i - 1].Sem[j].Subject_mark = stoi(SBJ_TEMP);
                STD_TEMP.erase(0, STD_TEMP.find('+') + 1);
            }
            Student_String.erase(0, Student_String.find(']') + 1);

        }
        return clsStudent;

}

int Menu_Student_Info(int Student_Num) {
    Student* STUD_INFO = ReturnInfo(Student_Num);
    cout << '|'; cout.width(80); cout.fill('-'); cout << '|' << endl;
    cout << '|'; cout.width(79); cout.fill(' '); cout << "Информация о студенте ВУЗа" << '|' << endl;
    cout << '|'; cout.width(80); cout.fill('-'); cout << '|' << endl;
    cout << '|'; cout.width(12); cout.fill(' '); cout << "UID студента" << '|'; cout.width(21); cout.fill(' '); cout << "Зачётная книжка" << '|' << endl;
    cout << '|'; cout.width(12); cout.fill(' '); cout << Student_Num << '|'; cout.width(21); cout.fill(' '); cout << STUD_INFO->GetSTUDUID() << '|' << endl;
    cout << '|'; cout.width(80); cout.fill('-'); cout << '|' << endl;
    cout << '|'; cout.width(21); cout.fill(' '); cout << "Фамилия студента" << '|'; cout.width(21); cout.fill(' '); cout << "Имя студента" << '|'; cout.width(35); cout.fill(' '); cout << "Отчество студента" << '|' << endl;
    cout << '|'; cout.width(21); cout.fill(' '); cout << STUD_INFO->GetSurname() << '|'; cout.width(21); cout.fill(' '); cout << STUD_INFO->GetFirstName() << '|'; cout.width(35); cout.fill(' '); cout << STUD_INFO->GetPtronymic() << '|' << endl;
    cout << '|'; cout.width(80); cout.fill('-'); cout << '|' << endl;
    cout << '|'; cout.width(21); cout.fill(' '); cout << "Институт" << '|'; cout.width(21); cout.fill(' '); cout << "Кафедра" << '|'; cout.width(35); cout.fill(' '); cout << "Группа" << '|' << endl;
    cout << '|'; cout.width(21); cout.fill(' '); cout << STUD_INFO->GetDepartment() << '|'; cout.width(21); cout.fill(' '); cout << STUD_INFO->GetFaculty() << '|'; cout.width(35); cout.fill(' '); cout << STUD_INFO->GetGroup() << '|' << endl;
    cout << '|'; cout.width(80); cout.fill('-'); cout << '|' << endl;
    cout << '|'; cout.width(12); cout.fill(' '); cout << "Пол студента" << '|'; cout.width(21); cout.fill(' '); cout << "Год поступления" << '|'; cout.width(12); cout << "Дата рождения"  << endl;
    cout << '|'; cout.width(12); cout.fill(' '); cout << STUD_INFO->GetSex() << '|'; cout.width(21); cout.fill(' '); cout << STUD_INFO->GetYearEntrance() << '|'; cout.width(12); cout << STUD_INFO->GetBirthDateString() << endl;
    cout << '|'; cout.width(80); cout.fill('-'); cout << '|' << endl;
    cout << '|'; cout.width(79); cout.fill(' '); cout << "Сведения по оценкам за сессии (по семестрам)" << '|' << endl;
    for (int i = 1; i < (2023 - STUD_INFO->GetYearEntrance())*2; i++) {
        cout << '|'; cout.width(80); cout.fill('-'); cout << '|' << endl;
        cout << '|'; cout.width(71); cout.fill(' '); cout << i << " семестр" << '|' << endl;
        cout << '|'; cout.width(80); cout.fill('-'); cout << '|' << endl;
        cout << '|'; cout.width(69); cout.fill(' '); cout << "Наименование дисциплины" << '|'; cout.width(9); cout.fill(' '); cout << "Оценка" << '|' << endl;
        cout << '|'; cout.width(80); cout.fill('-'); cout << '|' << endl;
        for (int j = 0; j < STUD_INFO->Grades[i-1].SUBJ_NUM; j++) {
            cout << '|'; cout.width(69); cout.fill(' '); cout << STUD_INFO->Grades[i-1].Sem[j].Subject_Name << '|'; cout.width(9); cout.fill(' '); cout << STUD_INFO->Grades[i-1].Sem[j].Subject_mark << '|' << endl;
            cout << '|'; cout.width(80); cout.fill('-'); cout << '|' << endl;

        }

    }
    system("pause"); cls; return 0;
};

int Menu_New_Subject() {
    string TEMP_SUBJ; char CUR_SUBJ; unsigned short Subject_count;
    fstream file;
    file.open("subject_DB.txt", ios::in | ios::app);
    Subject_count = Subjects_Count();
    cout << "Вы перешли в меню ввода нового предмета" << endl;
    cout << "Введите название нового предмета" << endl;
    cout << "Название не должно содержать цифр и не должно быть больше 60 символов" << endl;
    cout << "Название нового предмета: "; getline(cin, TEMP_SUBJ);
    if (isValidSubject(TEMP_SUBJ)) {
        str_subject subject_temp;
        subject_temp.Subject_Name = TEMP_SUBJ;
        subject_temp.Subject_mark = 5;
        subject_temp.SUBJ_ID = Subject_count;
        subject* clsubject = new subject(&subject_temp);
        file << clsubject->GetID() << '+' << clsubject->Subject_Name << '+' << endl;
        file.close();
        delete clsubject;
    }
    cls; return 0;
};

int Menu_New_Student() {
    int I_MENU = -1, flag = 1;
    while (I_MENU != 0) {
        string Name, Surname, Patronim, Sex, Day, Month, Year, Year_ENT, Kaf, Institute, Book, Group, Student_UID, UID_SUBJ, Mark, strfile, CUR_SUBJ, TempSTR, TEMP, STUD_STR = "";
        unsigned short D, M, Y, Y_ENT, UID, Mark_ST, STD_NUM = 0;
        fstream num;
        num.open("1.txt", ios_base::in | ios_base::out | ios_base::app);
        for (int i = 0; i < Students_Count(); i++) {
            num >> TEMP;
            TEMP.erase(TEMP.find('+'), TEMP.length());
            STD_NUM = stoi(TEMP);
        }
        fstream file;
        file.open("1.txt", ios_base::in | ios_base::out | ios_base::app);
        file.seekp(0);

        fstream subjects_DB;
        subjects_DB.open("subject_DB.txt", ios_base::out | ios_base::in | ios_base::app);
        cout << "Вы перешли к полю заполнения нового студента. " << endl;
        cout << "Введите Имя студента: ";
        getline(cin, Name);
        if (!isValidNamePatronim(Name)) {
            cout << "Ошибка ввода данных, откат в начало заполнения информации" << endl;
            Sleep(1000); flag = 0;
            break;
        }
        cout << "Введите Фамилию студента: ";
        getline(cin, Surname);
        if (!isValidSurName(Surname)) {
            cout << "Ошибка ввода данных, откат в начало заполнения информации" << endl;
            Sleep(1000); flag = 0;
            break;
        }
        cout << "Введите Отчество студента: ";
        getline(cin, Patronim);
        if (!isValidNamePatronim(Patronim)) {
            cout << "Ошибка ввода данных, откат в начало заполнения информации." << endl;
            Sleep(1000); flag = 0;
            break;
        }
        cout << "Введите пол студента (М,Ж): ";
        getline(cin, Sex);
        if (isValidSex(Sex)) {

        }
        else {
            cout << "Ошибка ввода данных, откат в начало заполнения информации" << endl;
            Sleep(1000); flag = 0;
            break;
        }
        cout << "Начинаем заполнение даты рождения" << endl;
        cout << "Введите год рождения" << endl;
        getline(cin, Year);
        if (isValidInt(Year)) {
            Y = stoi(Year);
        }
        else {
            cout << "Ошибка ввода данных, откат в начало заполнения информации" << endl;
            Sleep(1000); flag = 0;
            break;
        }
        cout << "Введите месяц рождения" << endl;
        getline(cin, Month);
        if (isValidInt(Month)) {
            M = stoi(Month);
        }
        else {
            cout << "Ошибка ввода данных, откат в начало заполнения информации" << endl;
            Sleep(1000); flag = 0;
            break;
        }
        cout << "Введите день рождения" << endl;
        getline(cin, Day);
        if (isValidInt(Day)) {
            D = stoi(Day);
        }
        else {
            cout << "Ошибка ввода данных, откат в начало заполнения информации" << endl;
            Sleep(1000); flag = 0;
            break;
        }
        if (!isValidBirth(D, M, Y)) {
            cout << "Ошибка ввода данных, откат в начало заполнения информации" << endl;
            Sleep(1000); flag = 0;
            break;
        }
        cout << "Введите институт обучения" << endl;
        getline(cin, Institute);
        if (!isValidFaculty(Institute)) {
            cout << "Ошибка ввода данных, откат в начало заполнения информации" << endl;
            Sleep(1000); flag = 0;
            break;
        }
        cout << "Введите кафедру обучения, в формате (НН-1)" << endl;
        getline(cin, Kaf);
        if (!isValidKaf(Kaf)) {
            cout << "Ошибка ввода данных, откат в начало заполнения информации" << endl;
            Sleep(1000); flag = 0;
            break;
        }
        cout << "Введите группу обучения, в формате (НННН-00-00)" << endl;
        getline(cin, Group);
        if (!isValidGroup(Group)) {
            cout << "Ошибка ввода данных, откат в начало заполнения информации" << endl;
            Sleep(1000); flag = 0;
            break;
        }
        cout << "Введите номер зачётной книжки" << endl;
        getline(cin, Student_UID);
        if (!isValidZach(Student_UID)) {
            cout << "Ошибка ввода данных, откат в начало заполнения информации" << endl;
            Sleep(1000); flag = 0;
            break;

        }
        cout << "Введите год поступления в ВУЗ" << endl;
        getline(cin, Year_ENT);
        if (isValidInt(Year_ENT)) {
            Y_ENT = stoi(Year_ENT);
            if (!((Y - Y_ENT > 16) || isValidEntrance(Y_ENT))) {
                cout << "Ошибка ввода данных, откат в начало заполнения информации" << endl;
                Sleep(1000); flag = 0;
                break;
            }
        }
        else {
            cout << "Ошибка ввода данных, откат в начало заполнения информации" << endl;
            Sleep(1000); flag = 0;
            break;
        }
        unsigned short sem = (2023 - Y_ENT) * 2;
        strStudent* s_Student = new strStudent;
        s_Student->Firstname = Name; s_Student->Secondname = Surname; s_Student->Patr = Patronim;
        s_Student->Sex = Sex; s_Student->BirthD = D; s_Student->BirthM = M; s_Student->BirthY = Y;
        s_Student->Department = Institute; s_Student->Faculty = Kaf; s_Student->Group = Group;
        s_Student->Zach = Student_UID; s_Student->Y_Entrance = Y_ENT;
        subjects_DB >> strfile;
        Student* Stud;
        Stud = new Student(s_Student);
        STUD_STR = to_string(STD_NUM + 1) + "+" + Stud->GetFirstName() + "." + Stud->GetSurname() + "." + Stud->GetPtronymic() + ":" + Stud->GetDepartment() + "." + Stud->GetFaculty() + "." + Stud->GetGroup() + ":" + Stud->GetBirthDateString() +
            ":" + to_string(Stud->GetYearEntrance()) + ">" + Stud->GetSTUDUID() + "<" + Stud->GetSex() + "!";
        string empty;
        for (int i = 1; i < sem; i++) {
            str_subject* Subj = new str_subject;
            cout << "Идёт заполнение семестра " << i << endl;
            cout << "Введите количетсво предметов за сессию: "; getline(cin, TEMP);
            if (!(isValidInt(TEMP))) {
                cout << "Ошибка ввода данных, откат в начало заполнения информации" << endl;
                Sleep(1000);  flag = 0; break;
            }
            int SUBJ_SEM = stoi(TEMP);
            if ((SUBJ_SEM > 10) && (SUBJ_SEM <1)) {
                cout << "Ошибка ввода данных, откат в начало заполнения информации" << endl;
                Sleep(1000);  flag = 0; break;
            }
            STUD_STR += TEMP;
            STUD_STR += '|';
            for (int j = 0; j < SUBJ_SEM; j++) {
                cout << "Введите UID предмета" << endl;
                getline(cin, UID_SUBJ);
                if (!isValidInt(UID_SUBJ)) {
                    cout << "Ошибка ввода данных, откат в начало заполнения информации" << endl;
                    Sleep(1000);  flag = 0; break;
                }
                if (isValidInt(UID_SUBJ)) {
                    UID = stoi(UID_SUBJ);
                    if (UID > Subjects_Count()) {
                        cout << "Ошибка ввода данных. Откат заполнения."; flag = 0;
                        Sleep(1000); flag = 0; break;
                    }
                    UID_SUBJ += '+';
                    int temp = -1;
                    fstream fsubj;
                    fsubj.open("subject_DB.txt", ios_base::out || ios_base::app || ios_base::in);
                    while (!fsubj.eof()) {
                        fsubj >> strfile;
                        int temp = strfile.find(UID_SUBJ);
                        if (temp == 0) break;
                    }
                    if (UID < 10) {
                        strfile.replace(0, 2, empty);
                        strfile.replace(strfile.length() - 1, 1, empty);
                    }
                    if ((UID >= 10) && (UID < 100)) {
                        strfile.replace(0, 3, empty);
                        strfile.replace(strfile.length() - 1, 1, empty);
                    }
                    if (UID >= 100) {
                        strfile.replace(0, 4, empty);
                        strfile.replace(strfile.length() - 1, 1, empty);
                    }
                    Subj->Subject_Name = strfile;
                    strfile = "";
                    fsubj.close();
                }
                cout << "Введите оценку по данному предмету" << endl;
                getline(cin, Mark);
                if (isValidMark(Mark)) {
                    Mark_ST = stoi(Mark);
                    Subj->Subject_mark = Mark_ST;
                }
                else {
                    cout << "Ошибка ввода данных. Откат заполнения."; flag = 0;
                    Sleep(1000); break;
                }
                STUD_STR += Subj->Subject_Name;
                STUD_STR += '.';
                STUD_STR += to_string(Subj->Subject_mark);
                STUD_STR += '+';
            }
            delete Subj;
            STUD_STR += ']';
        }
        STUD_STR += '#';
        file << STUD_STR << endl;
        file.close();
        I_MENU = 0; return 0;
    }
    cls; return 0;
};

int Menu_Changing_Info(int STD_NUM) {
    string MENU_TEMP; unsigned short MENU; string TEMP;
    Student* STUD_INFO = ReturnInfo(STD_NUM); int I_MENU = -1;
    while (I_MENU != 0) {
        cout << "Выберите пункт необходимый к перезаписи" << endl;
        cout << "1. Перезапись имени" << endl;
        cout << "2. Перезапись фамилии" << endl;
        cout << "3. Перезапись отчества" << endl;
        cout << "4. Перезапись номера зачётной книжки" << endl;
        cout << "5. Перезапись года поступления в ВУЗ" << endl;
        cout << "6. Перезапись пола студента" << endl;
        cout << "7. Перезапись названия института" << endl;
        cout << "8. Перезапись названия кафедры" << endl;
        cout << "9. Перезапись названия группы" << endl;
        cout << "10. Перезапись результатов сессии" << endl;
        cout << "11. Перезапись даты рождения студента" << endl;
        cout << "0. Возврат к списку студентов и применение изменений" << endl;
        cout << "Операция взаимодействия: ";
        getline(cin, MENU_TEMP);
        if (isValidInt(MENU_TEMP)) {
            MENU = stoi(MENU_TEMP);
            switch (MENU) {
            case 1: {
                cout << "Выбрана перезапись имени студента. Текущее значение пункта: " << STUD_INFO->GetFirstName() << endl;
                cout << "Введите новое значение имени студента: "; getline(cin, TEMP);
                if (isValidNamePatronim(TEMP)) {
                    STUD_INFO->SetFirstName(TEMP);
                }
                break;
            }
            case 2: {
                cout << "Выбрана перезапись фамилии студента. Текущее значение пункта: " << STUD_INFO->GetSurname() << endl;
                cout << "Введите новое значение имени студента: "; getline(cin, TEMP);
                if (isValidSurName(TEMP)) {
                    STUD_INFO->SetSurname(TEMP);
                }
                break;
            }
            case 3: {
                cout << "Выбрана перезапись отчества студента. Текущее значение пункта:" << STUD_INFO->GetPtronymic() << endl;
                cout << "Введите новое значение отчетсва студента: "; getline(cin, TEMP);
                if (isValidNamePatronim(TEMP)) {
                    STUD_INFO->SetPatronim(TEMP);
                }
            }
            case 4: {
                cout << "Выбрана перезапись номера зачётной книжки. Текущее значение пункта: " << STUD_INFO->GetSTUDUID() << endl;
                cout << "Введите новое значение зачётной книжки: "; getline(cin, TEMP);
                if (isValidZach(TEMP)) {
                    STUD_INFO->SetSTUDUID(TEMP);
                }
                break;
            }
            case 5: {
                cout << "Выбрана перезапись года поступления в ВУЗ: " << STUD_INFO->GetYearEntrance() << endl;
                cout << "Введите новое значение года поступления: "; getline(cin, TEMP);
                if (isValidInt(TEMP)) {
                    unsigned short YEAR = stoi(TEMP);
                    if (isValidEntrance(YEAR)) {
                        STUD_INFO->SetYearEntrance(YEAR);
                    }
                    break;
                }
            }
            case 6: {
                cout << "Выбрана перезапись пола студента. Текущее значение: " << STUD_INFO->GetSex() << endl;
                cout << "Введите новое значение пола: "; getline(cin, TEMP);
                if (isValidSex(TEMP)) {
                    STUD_INFO->SetSex(TEMP);
                }
                break;
            }
            case 7: {
                cout << "Выбрана перезпись наименования института. Текущее название: " << STUD_INFO->GetDepartment() << endl;
                cout << "Введите новое наименование института: "; getline(cin, TEMP);
                if (isValidFaculty(TEMP)) {
                    STUD_INFO->SetDepartment(TEMP);
                }
                break;
            }
            case 8: {
                cout << "Выбрана перезапись наименования выпускающей Кафедры. Текущее значение: " << STUD_INFO->GetFaculty() << endl;
                cout << "Введите новое название выпускающей Кафедры: "; getline(cin, TEMP);
                if (isValidKaf(TEMP)) {
                    STUD_INFO->SetFaculty(TEMP);
                }
                break;
            }
            case 9: {
                cout << "Выбрана перезапись наименование группы студента. Текущее значение: " << STUD_INFO->GetGroup() << endl;
                cout << "Введите новое наименование группы обучения: "; getline(cin, TEMP);
                if (isValidGroup(TEMP)) {
                    STUD_INFO->SetGroup(TEMP);
                }
                break;
            }
            case 10: {
                unsigned short sem = (2023 - STUD_INFO->GetYearEntrance()) * 2 - 1; int SEM, SUBJ_INT, SUBJ_UID;
                cout << "Введите номер семестра, в котором находится предмет, который хотите изменить: "; getline(cin, TEMP);
                if (isValidInt(TEMP)) {
                    SEM = stoi(TEMP); string strfile, empty = "";
                    if ((SEM <= sem) && (SEM > 0)) {
                        cout << "Введите номер предмета, который хотите изменить: "; getline(cin, TEMP);
                        if (isValidInt(TEMP)) {
                            SUBJ_INT = stoi(TEMP);
                            if ((SUBJ_INT >= STUD_INFO->Grades->SUBJ_NUM) && (SUBJ_INT <1)) {
                                cout << "Ошибка ввода"; break;
                            }
                            cout << "Вы пытаетесь изменить " << SEM << " семестр, предмет: " << STUD_INFO->Grades[SEM - 1].Sem[SUBJ_INT-1].Subject_Name << ", оценка за Семестр: " << STUD_INFO->Grades[SEM - 1].Sem[SUBJ_INT-1].Subject_mark << endl;
                            cout << "Введите ID нового предмета (или того же, в случае лишь замены оценки): "; getline(cin, TEMP);
                            if (isValidInt(TEMP)) {
                                int UID = stoi(TEMP);
                                TEMP += '+';
                                int temp = -1;
                                fstream fsubj;
                                fsubj.open("subject_DB.txt", ios_base::out || ios_base::app || ios_base::in);
                                while (!fsubj.eof()) {
                                    fsubj >> strfile;
                                    int temp = strfile.find(TEMP);
                                    if (temp == 0) break;
                                }
                                if (UID < 10) {
                                    strfile.replace(0, 2, empty);
                                    strfile.replace(strfile.length() - 1, 1, empty);
                                }
                                if ((UID >= 10) && (UID < 100)) {
                                    strfile.replace(0, 3, empty);
                                    strfile.replace(strfile.length() - 1, 1, empty);
                                }
                                if (UID >= 100) {
                                    strfile.replace(0, 4, empty);
                                    strfile.replace(strfile.length() - 1, 1, empty);
                                }
                                STUD_INFO->Grades[SEM - 1].Sem[SUBJ_INT - 1].Subject_Name = strfile;
                                cout << "Введите значение оценки: "; getline(cin, TEMP);
                                if (isValidMark(TEMP)) {
                                    int Mark = stoi(TEMP);
                                    STUD_INFO->Grades[SEM - 1].Sem[SUBJ_INT - 1].Subject_mark = Mark;
                                }
                            }
                        }
                    }
                }
                break;
            }
            case 11: {
                string TEMP2, TEMP3; unsigned short d, m, y, count = 0;
                cout << "Выбрана перезапись даты рождения студента. Текущая дата: " << STUD_INFO->GetBirthDateString() << endl;
                cout << "Введите новый день рождения: "; getline(cin, TEMP);
                cout << "Введите новый месяц рождения: "; getline(cin, TEMP2);
                cout << "Введите новый год рождения: "; getline(cin, TEMP3);
                if (isValidInt(TEMP)) {
                    d = stoi(TEMP);
                    count++;
                }
                if (isValidInt(TEMP2)) {
                    m = stoi(TEMP2);
                    count++;
                }
                if (isValidInt(TEMP3)) {
                    y = stoi(TEMP3);
                    count++;
                }
                if (count == 3) {
                    if (isValidBirth(d, m, y)) {
                        MyDate* S = new MyDate;
                        S->D = d; S->M = m; S->Y = y;
                        STUD_INFO->SetBirthDate(S);
                        delete S;
                    }
                    else {
                        cout << "Недопустимая дата" << endl;
                    }
                }
                break;
            }
            case 0: {
                cout << "Перезапись информации. Возрат к списку студентов";
                I_MENU = 0;
                ofstream TempF("temp.txt");
                fstream file;
                string tempstring, tempuid; unsigned short tempU;
                file.open("1.txt", ios_base::in | ios_base::out | ios_base::app);
                int n = Students_Count();
                for (int i = 0; i < n; i++) {
                    file >> tempstring;
                    tempuid = tempstring;
                    tempuid.erase(tempuid.find('+'), tempuid.length());
                    tempU = stoi(tempstring);
                    if (tempU != STD_NUM) {
                        TempF << tempstring << endl;
                    }
                    if (tempU == STD_NUM) {
                        TempF << STD_NUM << '+' << STUD_INFO->GetFirstName() << '.' << STUD_INFO->GetSurname() << '.' << STUD_INFO->GetPtronymic() << ':' << STUD_INFO->GetDepartment() << '.' << STUD_INFO->GetFaculty() << '.' << STUD_INFO->GetGroup() << ':' << STUD_INFO->GetBirthDateString() <<
                            ':' << STUD_INFO->GetYearEntrance() << '>' << STUD_INFO->GetSTUDUID() << '<' << STUD_INFO->GetSex() << '!';
                        for (int j = 1; j < (2023 - STUD_INFO->GetYearEntrance()) * 2; j++) {
                            TempF << STUD_INFO->Grades[i - 1].SUBJ_NUM << '!';
                            for (int k = 0; k < 10; k++) {
                                TempF << STUD_INFO->Grades[j - 1].Sem[k].Subject_Name << '.' << STUD_INFO->Grades[j - 1].Sem[k].Subject_mark << '+';
                            }
                            TempF << ']';
                        }
                        TempF << '#' << endl;
                    }
                }
                file.close();
                TempF.close();
                remove("1.txt");
                ofstream FileS("1.txt");
                fstream TempFileS, filetemp;
                TempFileS.open("temp.txt", ios_base::in | ios_base::out | ios_base::app);
                for (int i = 0; i < n; i++) {
                    TempFileS >> tempstring;
                    FileS << tempstring << endl;

                }
                cls;
                I_MENU = 0;
                break;
            }
            default: {
                cout << "В результате ошибки произошёл откат";
                Sleep(1000); cls; }
            }
        }
        else {
            cout << "Ошибка в ввода"; Sleep(1000);  cls; break;
        }
    }
    return 0;
};

int Menu_Delete_User(int STD_NUM) {
    fstream file; int count = Students_Count();
    file.open("1.txt", ios_base::in | ios_base::out | ios_base::app);
    string STUD_UID, STUD_string;
    ofstream temp("temp.txt");
    while (!file.eof()) {
        file >> STUD_string;
        STUD_UID = STUD_string; STUD_UID.erase(STUD_UID.find('+'), STUD_UID.length());
        if (stoi(STUD_UID) != STD_NUM) {
            temp << STUD_string << endl;
        }
    }
    temp.close(); file.close();
    remove("1.txt");
    ofstream Myfile ("1.txt");
    fstream temp1("temp.txt", ios_base::in | ios_base::out | ios_base::app);
    for (int i = 0; i < count-1; i++) {
        temp1 >> STUD_string;
        Myfile << STUD_string << endl;
    }
    Myfile.close(); temp1.close();
    remove("temp.txt");
    return 0;
}
 
int isValidIndTask(string S) {
    if (S == "" || S.length() != 1)
        return 0;
    S.append("a");
    if (S.find_first_not_of("12340") != S.length() - 1)
        return 0;
    return 1;
}

class Node {
    Student STUD_INFO;
    class Node* next;
    friend class List;
};

class List {
    Node* head;
    int count = 0;
    Node* PrevSTUD(Node*);
public:
    List() { head = NULL; }
    bool EmptyOrNot() { return head == NULL; }
    int GetNumNode() { return count; }
    Student ReturnNode(Node* N) {
        return N->STUD_INFO;
    }
    void SetNode(Node* N, Student STUD) {
        N->STUD_INFO = STUD;
    }
    Node* NextSTUD(Node*);
    Node* AddSTUD(Student, Node*);
    void Print(char S);
    void Swap(Node*, Node*);
    Node* getFirst() { return head; };
    void Sort();
    ~List() {
        class Node* old = NULL;
        class Node* cur = head;
        while (cur != NULL) {
            old = cur;
            cur = cur->next;
            delete old;
        }
    }
};

void List::Sort() {
    Node* N = getFirst();
    bool Flag = 0;
    while (Flag == 0) {
        Flag = 1;
        while (N->next != NULL) {
            Student* STUD_F = new Student(N->STUD_INFO);
            Student* STUD_S = new Student(N->next->STUD_INFO);
            if (STUD_F->GetYearEntrance() > STUD_S->GetYearEntrance()) {
                Flag = 0;
                Swap(N, N->next);
                N = NextSTUD(N);
            }
            else {
                N = NextSTUD(N);
            }
            delete STUD_F; delete STUD_S;
        }
        N = getFirst();
    }
}

Node* List::AddSTUD(Student STUD, Node* node = NULL) {
    Node* newpart = new Node();
    newpart->STUD_INFO = STUD;
    count++;
    if (node == NULL) {
        if (head == NULL) {
            newpart->next = NULL;
            head = newpart;
        }
        else {
            newpart->next = head;
            head = newpart;
        }
        return newpart;
    }
    newpart->next = node->next;
    node->next = newpart;
    return newpart;
};

Node* List::NextSTUD(Node* Node) {
    if (EmptyOrNot()) return NULL;
    return Node->next;
};

Node* List::PrevSTUD(Node* N) {
    if (EmptyOrNot()) return NULL;
    if (N == head) return NULL;
    Node* P = head;
    while (P->next != N)
        P = P->next;
    return P;
};

void List::Print(char S) {
    if (EmptyOrNot()) {
        return;
    }
    Node* N = head;
    do {
        Student STUD = ReturnNode(N);
        if (S == 'М') {
            if (STUD.GetSex() == "М") {
                cout << STUD.UID << " Фамилия студента: " << STUD.GetSurname() << endl;
                cout << "Имя студента: " << STUD.GetFirstName() << endl;
                cout << "Отчество студента: " << STUD.GetPtronymic() << endl;
                cout << "Год поступления студента в ВУЗ: " << STUD.GetYearEntrance() << ". Пол студента: " << STUD.GetSex() << endl;
                cout << "----------------" << endl;
            }
        }
        if (S == 'Ж') {
            if (STUD.GetSex() == "Ж") {
                cout << STUD.UID << " Фамилия студента: " << STUD.GetSurname() << endl;
                cout << "Имя студента: " << STUD.GetFirstName() << endl;
                cout << "Отчество студента: " << STUD.GetPtronymic() << endl;
                cout << "Год поступления студента в ВУЗ: " << STUD.GetYearEntrance() << ". Пол студента: " << STUD.GetSex() << endl;
                cout << "----------------" << endl;
            }
        }
        if (S == 'Н') {
            cout << " Фамилия студента: " << STUD.GetSurname() << endl;
            cout << "Имя студента: " << STUD.GetFirstName() << endl;
            cout << "Отчество студента: " << STUD.GetPtronymic() << endl;
            cout << "Год поступления студента в ВУЗ: " << STUD.GetYearEntrance() << ". Пол студента: " << STUD.GetSex() << endl;
            cout << "----------------" << endl;
        }
        N = NextSTUD(N);
    } while (N != NULL);
};

void List::Swap(Node* node1, Node* node2)
{
    if (node1 == NULL || node2 == NULL) return;
    if (node1 == node2) return;
    if (node2->next == node1) {
        Node* p = node1;
        node1 = node2;
        node2 = p;
    }
    Node* prev1 = PrevSTUD(node1);
    Node* prev2 = PrevSTUD(node2);
    Node* next1 = NextSTUD(node1);
    Node* next2 = NextSTUD(node2);
    if (next1 == node2)
    {
        if (prev1 != NULL)
            prev1->next = node2;
        else
            head = node2;
        node2->next = node1;
        node1->next = next2;
        return;
    }
    if (prev1 != NULL)
        prev1->next = node2;
    else
        head = node2;
    if (prev2 != NULL)
        prev2->next = node1;
    else
        head = node1;
    node2->next = next1;
    node1->next = next2;
}

int IndividualTask() {
    List Group;
    fstream file;
    file.open("1.txt", ios_base::in | ios_base::out | ios_base::app);
    int n = Students_Count();
    Student** Student_Group;
    string tempUID; unsigned short UID_T;
    Student_Group = (Student**) new Student * [n];
    for (int i = 0; i < n; i++) {
        file >> tempUID;
        tempUID.erase(tempUID.find('+'), tempUID.length());
        UID_T = stoi(tempUID);
        Student_Group[i] = (Student*) new Student;
        Student_Group[i] = ReturnInfo(UID_T);
    }
    for (int i = 0; i < n; i++) {
        Group.AddSTUD(*Student_Group[i]);
    }
    string MENU; int I_MENU = -1;
    while (I_MENU != 0) {
        cout << "Создан линейный список из предоставленных студентов. Выберите одну из следующих опций" << endl;
        cout << "1. Отобразить список из студентов Мужского пола" << endl;
        cout << "2. Отобразить список студентов Женского пола" << endl;
        cout << "3. Отобразить полный список студентов" << endl;
        cout << "4. Отсортировать список студентов по году поступления в ВУЗ" << endl;
        cout << "0. Покинуть раздел индивидуального задания" << endl;
        cout << "Введите операцию: "; getline(cin, MENU);
        if (isValidIndTask(MENU)) {
            I_MENU = stoi(MENU);
            switch (I_MENU) {
            case 1: {Group.Print('М'); system("pause"); cls; break; };
            case 2: {Group.Print('Ж'); system("pause"); cls; break; };
            case 3: {Group.Print('Н'); system("pause"); cls; break; };
            case 4: {Group.Sort(); system("pause"); cls; break; };
            case 0: {I_MENU = 0; break; };
            default: {cls; break; }
            }
        }
    }
    cls;
    return -1;
}

void Crypt()
{
    system("openssl\\bin\\openssl.exe rand -hex -out key.txt 64");
    system("openssl\\bin\\openssl.exe enc -aes-256-cbc -pbkdf2 -pass file:key.txt -in 1.txt -out 1.txt.enc");
    if (remove("1.txt") != 0) {
        cout << "Ошибка удаления файла базы данных." << endl;
    }
    system("openssl\\bin\\openssl.exe rsautl -encrypt -pubin -inkey rsa.public -in key.txt -out key.txt.enc");
    if (remove("key.txt") != 0) {
        cout << "Ошибка удаления файла базы пароля базы данных." << endl;
    }

}

void Decrypt()
{
    system("openssl\\bin\\openssl.exe rsautl -decrypt -inkey rsa.private -in key.txt.enc -out key.txt");
    if (remove("key.txt.enc") != 0) {
        cout << "Ошибка удаления зашифрованного файла с паролем." << endl;
    }
    system("openssl\\bin\\openssl.exe enc -aes-256-cbc -d -pbkdf2 -pass file:key.txt -in 1.txt.enc -out 1.txt"); 
    if (remove("key.txt") != 0) {
        cout << "Ошибка удаления файла пароля." << endl;
    }
    if (remove("1.txt.enc") != 0) {
        cout << "Ошибка удаления зашифрованной базы данных." << endl;
    }
}

int main()
{
    rus();
    Decrypt();
    cout << "Дешифровка" << endl;
    for (; Menu_Start() != 0;) {
        Menu_Start();
    }
    Crypt();
    cout << "Шифровка" << endl;
}

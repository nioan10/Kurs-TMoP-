#include "Header.h"



/*class Student_BirthDate {
public:
    unsigned short BD;
    unsigned short BM;
    unsigned short BY;
    Student_BirthDate()
    {
        BD = 0; BM = 0; BY = 0;
    }
    Student_BirthDate(int day, int month, int year)
    {
        SetBirthDate(day, month, year);
    }
    int SetBirthDate(int d, int m, int y) { //отдельная функци
        bool CM = 1; bool CY = 1;
        if ((y < 1970) || y > 2023) { CY = 0; };
        switch (m)
        {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: {
            if ((d > 31) || (d < 0)) { CM = 0; };
        }
        case 4: case 6: case 9: case 11: {
            if ((d > 30) || (d < 0)) { CM = 0; };
        }
        case 2: {
            if (((d > 29) || (d < 0)) && (y % 4 == 0)) { CM = 0; }
            if (((d > 28) || (d < 0)) && ((y % 4 != 0) || (y == 2000))) { CM = 0; }
        }
        }
        if ((CM != 1) || (CY != 1)) {
            cout << "Ошибка задачи данных!" << endl; Sleep(1000); return -1;
        }
        else { BD = d; BM = m; BY = y; }
    }
    void PrintBirthDate() {
        cout << BD << '.' << BM << '.' << BY;
    } */

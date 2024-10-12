#pragma once
#include <iostream>
#include <fstream>
#include <windows.h>
#include <string>
#include <fstream>
#include <iostream>


#define cls system("cls") 
using namespace std;

void Crypt();
void Decrypt();
int Menu_Start();
int Menu_Menu(); 
int Menu_Subject_List();
int Menu_Student_List();
int Menu_Student_Info(int NUM);
int Menu_New_Student();
int Menu_New_Subject();
int Menu_Changing_Info(int NUM);
int Menu_Delete_User(int NUM);
int IndividualTask();

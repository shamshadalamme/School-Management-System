#pragma once
#include <string>
using namespace std;
int startTeacherID = 0;
int startStudentID = 100;

class addNew
{
    public:
    string name;
    string address;
    string contact;
};

class student:public addNew
{
    public:
    int studentGlobalID = startStudentID++;
    int classStudent;
    string father;
    string mother;

    student();

};

#pragma once
#include <string>
#include <fstream>
using namespace std;
int startTeacherID = 0;
int startStudentID = 100;

class addNew
{
    private:
    string name;
    string address;
    string contact;

    public:
    addNew(string& name, string& address, string& contact);

    //getter
    const string getName() const {return name;}
    const string getAddress() const {return address;}
    const string getContact() const {return contact;}

    //setter
    void setName(string& newName) {name = newName;}
    void setAddress(string& newAddress) {address = newAddress;}
    void setContatc(string& newContact) {contact = newContact;}
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

class teacher:public addNew
{
    public:
    int teacherGlobalID = startTeacherID++;
    bool classTeacher;

    teacher();

};
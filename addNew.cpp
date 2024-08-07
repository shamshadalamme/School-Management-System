#include "addNew.h"

addNew::addNew(string& name, string& address, string& contact){
    this->name = name;
    this->address = address;
    this->contact = contact;
}


student::student(string& name, int& studentGlobalID, int& ofClassStudent,string& address, string& father,string& mother, 
                 string& contact) : addNew(name, address, contact) ,studentGlobalID(studentGlobalID++),
                 ofClassStudent(ofClassStudent), father(father), mother(mother){}

student student::addStudent(string& name, int& studentGlobalID, int& ofClassStudent, string& address, string& father, string& mother, string& contact)
{
    return student(name, studentGlobalID, ofClassStudent, address, father, mother, contact);
}
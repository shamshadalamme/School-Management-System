#include <iostream>
#include "addNew.h"
using namespace std;


int main()
{
    cout << "------------Depot Secondary School----------\n"
         << "\t1- Add new Student\n"
         << "\t2- Add new Teacher\n"
         << "\t3- Show record of Students and Teachers with given ID\n"
         << "\t4- Show ALL"
         << "----------------------------------------\n";
    
    int input;
    cin >> input;

    switch(input)
    {
        case '1':

        break;
        
        case '2':

        break;
        
        case '3':

        break;
        
        case '4':

        break;
        
        default:
            cout << "Invalid choice";
        break;
    }

    return 0;
}
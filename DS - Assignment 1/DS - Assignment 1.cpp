// Abigail Staples
// Jan. 29th, 2026
// Test Program personType with first name and last name 

#include <iostream>  
#include <string>
#include "personType.h" 

using namespace std;

int main()
{
    personType student("Lisa", "Regan");

    student.print();

    cout << endl;


    //     string firstName;
    //     string lastName;


    //     cout << "Please enter the student's first name: ";
    //     cin >> firstName;
    //     cout << "Please enter the student's last name: ";
    //     cin >> lastName;

    //   personType student2;

    //   student2.setName(firstName,lastName);


    //     cout << "Second student's first name: " << student2.getFirstName() << endl;
    //     cout << "Second Student's last name: " << student2.getLastName() << endl;
    return 0;
}

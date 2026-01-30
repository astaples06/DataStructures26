// Abigail Staples
// Jan. 29th, 2026
// Test Program personType with first name and last name 

#include <iostream>  
#include <string>
#include "personType.h" 

using namespace std;

int main()
{
    // Objects for the original student (Lisa Regan) and the second student (user input)
    personType student("Lisa", "Regan");
    personType student2("", "");

    // String variables to hold the user input temporarily until the setters are used
    string first, middle, last;

    // Sets the names for the original student using the setter function
    student.setName("Lisa", "Regan", "");

    // Takes user input in for the student's names
    cout << "Enter your student's first name (Press enter without typing if you would like to leave it blank): ";
    getline(cin, first);

    cout << "\nEnter your student's middle name (Press enter without typing if you would like to leave it blank): ";
    getline(cin, middle);

    cout << "\nEnter your student's last name (Press enter without typing if you would like to leave it blank): ";
    getline(cin, last);

    cout << endl;

    // Sets the new student's names using the setter function
    student2.setName(first, last, middle);

    // Calls the print function and outputs the student's names 
    student2.print();

    // Outputs the original student's name
    cout << "\nOriginal Name: " << student.getFirstName() << " " << student.getLastName() << "\n" << endl;

    // Calls the nameCheck() function and compares the string values of the second student to it
    student.nameCheck(student2);

    return 0;
}

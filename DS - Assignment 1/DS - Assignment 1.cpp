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
    personType student2("", "");

    string first, middle, last;

    student.setName("Lisa", "Regan", "");

    cout << "Enter your student's first name (Press enter without typing if you would like to leave it blank): ";
    getline(cin, first);

    cout << "\nEnter your student's middle name (Press enter without typing if you would like to leave it blank): ";
    getline(cin, middle);

    cout << "\nEnter your student's last name (Press enter without typing if you would like to leave it blank): ";
    getline(cin, last);

    cout << endl;

    student2.setName(first, last, middle);

    student2.print();

    cout << "\nOriginal Name: " << student.getFirstName() << " " << student.getLastName() << "\n" << endl;

    student.nameCheck(student2);

    return 0;
}

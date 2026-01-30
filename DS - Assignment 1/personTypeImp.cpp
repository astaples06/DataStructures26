//personTypeImp.cpp

#include <iostream> 
#include <string>
#include "personType.h"

using namespace std;

// Constructor function
personType::personType(string first, string last)
{
    firstName = first;
    lastName = last;
    middleName = "";
}

// Boolean function to determine whether or not a string is empty
static bool isEmpty(string a)
{
    return a == "";
}

// Prints the student's names and omits anything that is empty
void personType::print() const
{
    if (!isEmpty(firstName))
    {
        cout << "Student's First Name: " << getFirstName() << endl;
    }
    if (!isEmpty(middleName))
    {
        cout << "Student's Middle Name: " << getMiddleName() << endl;
    }
    if (!isEmpty(lastName))
    {
        cout << "Student's Last Name: " << getLastName() << endl;
    }
}

// Setter function
void personType::setName(string first, string last, string middle)
{
    firstName = first;
    middleName = middle;
    lastName = last;
}

// Name check function that checks the first and last name against the other objects names and returns whether they are equal
void personType::nameCheck(const personType& other) const
{
    if (firstName == other.firstName)
    {
        cout << "The students have the same first name!" << endl;
    }
    else if (firstName != other.firstName)
    {
        cout << "The students's first names do not match." << endl;
    }

    if (lastName == other.lastName)
    {
        cout << "The students have the same last name!" << endl;
    }
    else if (lastName != other.lastName)
    {
        cout << "The students's last names do not match." << endl;
    }
}

// Getter functions for the first, last, and middle names
string personType::getFirstName() const
{
    return firstName;
}

string personType::getLastName() const
{
    return lastName;
}

string personType::getMiddleName() const
{
    return middleName;
}
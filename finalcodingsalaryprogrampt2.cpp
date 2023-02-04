// Priscilla Cook
// 02/27/22
// =============================================
// Write a program that will ask the user for
// their first, middle initial, and last name
// and calculate the user's weekly salary based
// on their hourly wage and the number of hours
//they worked, assuming no overtime at this point.
// =============================================

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string fName, lName, fullName;          //Declare variables for first, middle initial,
    char mInitial;                          //last name, hourly wage, number of hours worked, and weekly salary.
    float hrsWorked, hrlyRate, wkSalary;
cout << "Please enter first name: " << endl;   //Print prompt(s) that asks for user’s first, middle initial, and last name.
getline(cin, fName) ;
cout << "Please enter middle initial (Enter space if none): " << endl;
cin >> mInitial;
cin.ignore(100, '\n');
cout << "Please enter last name: " << endl;
cin >> lName;
cout << "Enter hours worked: " << endl;     //Print prompt that asks for number of hours worked.
cin >> hrsWorked;
cout << "Enter hourly rate: " << endl;      // Print prompt that asks for user’s hourly wage.
cin >> hrlyRate;

fullName = fName + " " + mInitial + ". " + lName;
wkSalary = hrsWorked * hrlyRate;     //Calculate user’s weekly salary by multiplying hourly wage by hours worked.

cout << "Your name is: " << fullName << endl;
cout << "Your weekly salary is: $" << wkSalary << endl;  //Print weekly salary to user.
    return 0;
}

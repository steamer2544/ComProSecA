#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    string name, surname;
    float salary, sale, comper, total;

    cout << "****Homework 2************" << endl;
    cout << "Enter Name   : ";
    cin >> name;
    cin >> surname;
    cout << "Enter Salary : ";
    cin >> salary;
    cout << "Enter Sale   : ";
    cin >> sale;
    cout << "Enter Commission Percent : ";
    cin >> comper;
    cout << "------output----------" << endl;
    cout << "You name = " << name << " " <<surname << endl;
    total = salary + (sale*(comper/100));
    cout << "Total Revenue  " << total << "Baht" << endl;

    return 0;
}
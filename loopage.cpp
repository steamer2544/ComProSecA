//------------------- Age Calculator -----------------------
#include <iostream>
using namespace std;
int CalAge(int);

int main()
{
	// Declare variables
	int year, age;

	// loop for input year and display the age
	for (int i = 1 ; i <= 3 ;  i++)
	{
		// get year
		cout << "Enter Year " << i << " : ";
		cin >> year;
		
        // send year to calculate in CalAge(year) function then return the age(int)
        int age = CalAge(year);
        
        //display Age
        cout << "Age " << i << " : " << age << endl;
	}
	cout <<endl;
	cout << "Thank you."<< endl;
	return 0;
}

int CalAge(int year)
{
	//Get calculate the year and return
	return (2563 - year);
}
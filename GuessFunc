#include<iostream>
#include<time.h>
using namespace std;
int Guess(int);

int main()
{
	int num, Round;

	cout << "### Welcome to guessing number game ###\nSecret number has been chosen\n";

	srand(time(NULL));
	num = 1+rand()%10;

	Round = Guess(num);

	cout << "The secret number is " << num << endl;
	cout << "You made " << Round << " guesses\n";
	return(0);
}

int Guess(int num)
{
	int guess;
	int Round = 0;
	do {
		cout << "Guess the number (1 to 10) : ";
		cin >> guess;
		if (guess > num) cout << "The secret number is lower\n";
	    else if (guess < num)cout << "The secret number is higher\n";
	    else cout << "Congratulations!\n";
		Round++; 

	} while (guess != num);
	return Round;
}

#include <iostream>
#include <string>
using namespace std;
int main()
{
    //Score Chacker Program

	float q1, q2, q3, mid, final, qScore, total;
	string result;


		cout << "===========QUIZZES===============" << endl;
		cout << "Enter first quizz (10) : ";
		cin >> q1;
		cout << "Enter second quizz (10) : ";
		cin >> q2;
		cout << "Enter third quizz (10) : ";
		cin >> q3;
		
		cout << "===========MID-TERM==============" << endl;
		cout << "Enter mid-term (40) : ";
		cin >> mid;

		cout << "============FINAL================" << endl;
		cout << "Enter final (50) : ";
		cin >> final;

		//Sum and Display the score
		qScore = (q1 + q2 + q3) / 3;
		cout << "Quizzes Total : " << qScore << endl;
		cout << "Mid term : " << mid << endl;
		cout << "Final : " << final << endl;

		//Total Score
		total = mid + final + qScore;
		cout << "Total : " << total << endl;

		//Display the result                 
		result = (total >= 50) ? "PASS" : "FAIL";
		cout << "You score is" <<result << endl;

	return 0;
}

#include <iostream>
#include <iomanip>
using namespace std;
void display(int salary[],int num);
int cal_bonus(int);

int main()
{
	int num;
	cout << "\nEnter Number of person : ";
	cin >> num;
	cout <<endl;
	int *salary = new int[num];
	for(int i = 0; i < num; i++ )
	{
		cout << "Enter the slary "<<i+1<<" : ";
		cin >> salary[i];
		cout <<endl;
	}
	display(salary, num);
}

void display(int salary[],int num)
{
	cout <<"---------------------------------------------------"<<endl;
	cout <<"There are "<<num<<" persons."<<endl;
	for (int i = 0; i < num; i++)
	{
		cout << "The Salry for person "<<num<<" = "<<salary[i]; 
		cout << " and Bonus = " << cal_bonus(salary[i]) <<endl;
	}
	cout <<"---------------------------------------------------"<<endl;
}
int cal_bonus(int salary)
{
	return salary*2;
}

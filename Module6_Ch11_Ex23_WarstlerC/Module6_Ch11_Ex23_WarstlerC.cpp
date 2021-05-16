#include <iostream>
#include <iomanip>
using namespace std;

//Function prototypes
int getTotal(int[]);
double getAvg(int[]);
int getHighDay(int[]);

int main()
{
	int winnings[5] = { 12500, 9000, 2400, 15600, 5400 };

	int total = 0;
	double average = 0.0;
	int highDay = 0;

	total = getTotal(winnings);

	average = getAvg(winnings);

	highDay = getHighDay(winnings);

	cout << fixed << setprecision(2);
	cout << "Total amount won: $" << total << endl;
	cout << "Average daily amount won: $" << average << endl;
	cout << "The contestant's highest amount won was on day " << highDay << "." << endl;
	return 0;
}

//Function definitions
int getTotal(int winnings[5])
{
	int i;
	int total = 0;

	for (int i = 0; i < 5; i++)
	{
		total = total + winnings[i];
	}

	return total;
}
double getAvg(int winnings[5])
{
	int total = getTotal(winnings);
	double avg = total / 5;

	return avg;
}

int getHighDay(int winnings[5])
{
	int highest = 0;
	int day;
	int i;

	for (int i = 0; i < 5; i++)
	{
		if (winnings[i] > highest)
		{
			highest = winnings[i];
			day = i + 1;
		}
	}

	return day;
}
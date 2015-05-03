#include <iostream>
#include <iomanip>

using namespace std;


void getScore(int &);
void calcAverage(int, int, int, int, int);
int findLowest(int, int, int, int, int);

int main()
{
	int testScr1, testScr2, testScr3, testScr4, testScr5;

	getScore(testScr1);
	getScore(testScr2);
	getScore(testScr3);
	getScore(testScr4);
	getScore(testScr5);
	

	calcAverage(testScr1, testScr2, testScr3, testScr4, testScr5);

	

	return 0;
}


void getScore(int &score)
{

	cout << "Enter a test score: ";
	cin >> score;
	
	while (score < 1 || score > 100)
	{
		cout << "Please enter a valid test score between 1 and 100!: ";
		cin >> score;
	}

}



void calcAverage(int s1, int s2, int s3, int s4, int s5)
{
	int sum;
	int lowest;
	double average;


	lowest = findLowest(s1, s2, s3, s4, s5);

	sum = s1 + s2 + s3 + s4 + s5 - lowest;
	average = sum / 4.0;

	cout << setw(4) << fixed << showpoint << setprecision(2);
	cout << "The avergae of the four highest scores are: " << average << endl;
}



int findLowest(int s1, int s2, int s3, int s4, int s5)
{
	int lowest = s1;


	if (s2 < lowest)
	{
		lowest = s2;
	}
	 if (s3 < lowest)
	{
		lowest = s3;
	}
	 if (s4 < lowest)
	{
		lowest = s4;
	}
	 if (s5 < lowest)
	{
		lowest = s5;
	}

	cout << "The lowest test score is: " << lowest << endl;

	return lowest;
}
#include <iostream>
#include <iomanip>


using namespace std;

int main()
{
//array of employees
	const int employee = 7;
	int empId[employee] = {5658845, 8451277, 4520125, 1302850, 7895122, 7580489, 8777541};

	int hours[employee];
	double payRate[employee];
	double wages[employee];
	
	//loop to get hours worked
		for (int i = 0; i < employee; i++)  {
			do {
				cout << "Enter the hours for Employee " << (i + 1) << " ID #" << empId[i] << ": ";
				cin >> hours[i];
				cout << endl;

	//validate if it is a positive number
				if (hours[i] < 0)
				{
					cout << "Enter a positive number!" << endl;
				}

			}
			while (hours[i] < 0);

	//loop to ger pay rate 
			do {
				cout << "Enter the pay rate for Employee " << (i + 1) << " ID #" << empId[i] << ": ";
				cin >> payRate[i];
				cout << endl;

   //validate that pay rate is greater than 6
				if (payRate[i] < 6) {
					cout << "Enter a number 6 or greater!" << endl;
				}
			}
				while (payRate[i] < 6);
			
		}

	//output gross pay for each employee
		cout << " The total gross wages for each Employee is: " << endl << endl;
	for (int i = 0; i < employee; i++) {
		wages[i] = hours[i] * payRate[i];
		cout << fixed << showpoint << setprecision(2);
		cout <<"Employee ID # " << empId[i] << " is $" << wages[i] << endl << endl;
	}


	cin.get();


	return 0;
}
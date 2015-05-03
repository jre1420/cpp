#include <iostream>
#include <fstream>


using namespace std;

int main()
{

	ifstream inputFile;
	inputFile.open("C:\\Users\\Jonathan\\Desktop\\CS1\\People.txt");

	int year, star;
	double population;

	cout << "PRAIRIEVILLE POPULATION GROWTH" << "\n";
	cout << "(each * represents 1000 people)" << "\n";

	for (year = 1900; year <= 2000; year += 20)
	{
		
		inputFile >> population;
		
		population = population / 1000 + 0.5;
		

		cout << year << " ";
		
		for (star = 1; star <= population; star++)
			cout << "*";

		cout << endl;
	}

	
	return 0;
}
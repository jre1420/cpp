#include <iostream>
#include <fstream>


using namespace std;

int main()
{
  //open text file
	ifstream inputFile;
	inputFile.open("C:\\Users\\Jonathan\\Desktop\\CS1\\People.txt");

	int year, star;
	double population;

	cout << "PRAIRIEVILLE POPULATION GROWTH" << "\n";
	cout << "(each * represents 1000 people)" << "\n";

  //loop displaying years
	for (year = 1900; year <= 2000; year += 20)
	{
		
		inputFile >> population;
		
		population = population / 1000 + 0.5;
		

		cout << year << " ";
		
  //loop to display chart
		for (star = 1; star <= population; star++)
			cout << "*";

		cout << endl;
	}

	
	return 0;
}
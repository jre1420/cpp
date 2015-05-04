#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
using namespace std;

int main(){

	srand(time(NULL));

  //random number and guess
	int num = rand() % 100 + 1;
	int guess = 0;
	string name = "";

 //Get users name
	cout << "Enter your first name: ";
	cin >> name;
	cout << endl;
 // welcome message
	cout << "Welcome " << name << " I am thinking of a number between 1 and 100." << endl << endl;
	

	cout << "Try and guess the number. Good Luck! Pick a number between 1 and 100: ";

  // Check if number is greater or less than random num
	do {
		cin >> guess;
		if (guess < num){
			cout << "You guessed to low. Give it another try: ";
		}
		else if (guess > num) { cout << "Your guess is too high. Give it another try: "; }
	} while (guess != num);

	cout << endl;
	
	cout << "Congratulations you got it right!" << endl << endl;

	return 0;

}
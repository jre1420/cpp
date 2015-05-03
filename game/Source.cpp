#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main(){

	srand(time(NULL));

  //random number and guess
	int num = rand() % 100 + 1;
	int guess = 0;

	cout << "This is a little game where you try to guess a number between 1 and 100." << endl;
	

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
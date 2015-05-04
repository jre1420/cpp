#include<iostream>
#include<string>

using namespace std;

int main()
{
	string name, city, college, prof, animal, pet;
	int age;

 // gather information from user and store it 
	cout << "what is your name? ";
	cin >> name;

	cout << "What your age? ";
	cin >> age;

	cout << "What city are you from? ";
	cin >> city;

	cout << "What collge did you attend? ";
	cin >> college;

	cout << "what is your profession? ";
	cin >> prof;

	cout << "what type of animal do you have? ";
	cin >> animal;

	cout << "what is your pet's name? ";
	cin >> pet;

  //output story using users information
	cout <<"\n" << "There once was a person named " << name << " who lived in " << city << ". At the age of \n" 
	<< age << ", " << name << " went to college at " << college << ", " << name << " graduated and went to work \nas a " 
	<< prof << ". Then, " << name << " adopted a(n) " << animal << " named " << pet <<". They \nboth lived happily ever after!" <<endl;
	
	
	return 0;
}
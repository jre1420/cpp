#include<iostream>

using namespace std;

int main()
{

	int cost = 99;
	int quantity;
	float disc = 0.2;
	float disc1 = 0.3;
	float disc2 = 0.4;
	float disc3 = 0.5;
	
	cout << "quantity ";
	cin >> quantity;

	float price = quantity * cost;
	float total = price - (price * disc);
	float total1 = price - (price * disc1);
	float total2 = price - (price * disc2);
	float total3 = price - (price * disc3);
	
	if (quantity <= 19 && quantity >= 10) {
			cout << total << ("\n");
		}

		else if (quantity >= 20 && quantity <= 49)  {
			cout << total1 << ("\n");
		}

		else if (quantity >= 50 && quantity <= 99) {

			cout << total2 << ("\n");
		}

		else if (quantity >= 100) {

			cout << total3 << ("\n");
		}
		else {
			cout << price << ("\n");

		}
	
	 

	cin.get();

	return 0;
	
}

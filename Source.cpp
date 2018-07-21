//The user enters odd numbers to a limit
//then program calculates the sum of all odd numbers up to a limit
//The limit is then printed to screen
#include<iostream>
using namespace std;

//Function calculates only odd numbers not even
int sumCalculate(int num) {

	int count = 0;

	for (int i = 0; i < num; i++) {

		if (i % 2 != 0)
			count = count + 1;
	}
	return count;
}

int main() {

	int num;

	cout << "Enter the limit number: " << endl;
	cin >> num;

	int total;
	total = sumCalculate(num); //Finds sum of values
	
	cout << "\n\n the sum result is: " << total; //prints output
	
	system("pause");
	return 0;
}


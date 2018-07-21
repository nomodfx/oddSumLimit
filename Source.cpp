//Program calculates the sum of all odd numbers up to a limit
//Limit is input into program
#include<iostream>
using namespace std;

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
	total = sumCalculate(num);
	
	cout << "\n\n the sum result is: " << total;
	
	system("pause");
	return 0;
}


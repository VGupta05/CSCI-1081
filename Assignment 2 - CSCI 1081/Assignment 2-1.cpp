// Chapter 02, Programming Challenge 04, Restaurant Bill
#include <iostream>
#include <iomanip>
using namespace std;

int main_1()
{
	double meal = 88.67;
	double tax = meal * 0.0675;
	double subtotal = meal + tax;
	double tip = subtotal * 0.2;
	double total = subtotal + tip;

	cout << "Meal cost: $" << meal << endl;
	cout << "Tax: $" << tax << endl;
	cout << "Tip: $" << tip << endl;
	cout << "Total: $" << total << endl;

	return 0;
}
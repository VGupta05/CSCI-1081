// Chapter 03, Programming Challenge 02, Stadium Seating
#include <iostream>
#include <ionmanip>
using namespace std;

int main()
{
	// Variable definitions or ticket counts
	const double class_A = 15.0;
	const double class_B = 12.0;
	const double class_C = 9.0;

	// Variable definitions
	int classATickets;	// number of class A tickets
	int classBTickets;	// Number of class B tickets
	int classCTickets;	// Number of class C tickets
	double total;		// Total revenue from all three tickets

	// Input for class A tickets sold
	cout << "Enter the number of Class A tickets sold: ";
	cin >> classATickets;

	// Input for class B tickets sold
	cout << "Enter the number of Class B tickets sold: ";
	cin >> classBTickets;

	// Input for class C tickets sold
	cout << "Enter the number of Class C tickets sold: ";
	cin >> classCTickets;

	// Total revenue made from all three tickets
	total = (class_A * classATickets) + (class_B * classBTickets) + (class_C * classCTickets);
	cout << "The total revenus from ticket sales is $" << setprecision(2) << fixed << total << endl;

	return 0;
}
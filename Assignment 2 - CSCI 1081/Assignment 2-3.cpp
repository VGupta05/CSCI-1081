// Chapter 02, Programming Challenge 17, Stock Commission
#include <iostream>
#include <iomanip>
using namespace std;

int main_3()
{
	double stock_price = 750 * 35;
	double commission = stock_price * 0.02;
	double total_paid = stock_price + commission;

	cout << "Kathryn paid $" << stock_price << "." << endl;
	cout << "Her stockbroker earned $" << commission << "off commission." << endl;
	cout << "Kathryn paid $" << total_paid << "in total." << endl;

	return 0;
}
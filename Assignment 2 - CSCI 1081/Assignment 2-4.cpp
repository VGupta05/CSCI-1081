// Chapter 02, Programming Challenge 18, Energy Drink Consumption
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double survey_count = 16500;
	double energy_drinker = survey_count * 0.15;
	double citrus_drinker = energy_drinker * 0.58;

	cout << energy_drinker << " customers purchased one or ore energy drinks per week." << endl;
	cout << citrus_drinker << " of those customers preferred citrus flavored energy drinks." << endl;

	return 0;
}
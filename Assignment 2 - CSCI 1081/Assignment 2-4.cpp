#include <iostream>
#include <iomanip>
using namespace std;

int main_4()
{
	double survey_count = 16500;
	double energy_drinker = survey_count * 0.15;
	double citrus_drinker = energy_drinker * 0.58;

	cout << "The approximate number of customers in the survey who purchase one or more energ drinks per week are " << energy_drinker << "." << endl;
	cout << "The approximate number of customers in the survey who prefer citrus-flavored energy drinks are " << citrus_drinker << "." << endl;

	return 0;
}
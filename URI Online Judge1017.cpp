#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int spentTimeInTheTrip,avgSpeedDurringTheTrip;
	cin>>spentTimeInTheTrip>>avgSpeedDurringTheTrip;
	float Distance,theAmountOfSpentFuelLiters;
	Distance=(avgSpeedDurringTheTrip*spentTimeInTheTrip);
	theAmountOfSpentFuelLiters=Distance/12.0;
	cout<<setprecision(3)<<fixed<<theAmountOfSpentFuelLiters<<endl;

return 0;
}
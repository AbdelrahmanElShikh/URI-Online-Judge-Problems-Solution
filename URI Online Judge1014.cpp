#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int totalDistanceInKilometers;
	double theSpentFuel,Consumption;
	cin>>totalDistanceInKilometers>>theSpentFuel;
	Consumption = totalDistanceInKilometers / theSpentFuel;
	cout<<setprecision(3)<<fixed<<Consumption<<" km/l"<<endl;
return 0;
}

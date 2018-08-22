//Abdel-Rahman ElShikh
#include <iostream>
#include <iomanip>
using namespace std ;
int main ()
{
	int emblyeeNumber, workedHours ;
double moneyPerHour,SALARY;
cin>>emblyeeNumber>>workedHours>>moneyPerHour;
SALARY = workedHours * moneyPerHour;
cout<<"NUMBER = "<<emblyeeNumber<<endl;
cout<<"SALARY = U$ "<<setprecision(2)<<fixed<<SALARY<<endl;
	return 0;
}
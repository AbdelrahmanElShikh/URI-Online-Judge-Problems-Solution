#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float salary, tax = 0;
	cin >> salary;
	if (salary <= 2000.00)
		cout << "Isento" << endl;
	else
	{
		salary = salary - 2000.00; 
		if (salary >= 1000.00)
		{
			tax = 1000.00*0.08;
			salary = salary - 1000.00;
			if (salary >= 1500.00)
			{
				tax = tax + (1500.00*0.18);
				salary = salary - 1500.00;
				tax = tax + (salary * 0.28);
			}
			else
			{
				tax = tax + salary * 0.18;
			}
			
		}
		else
		{
			tax = salary * 0.08;
		}
		cout << "R$ " << fixed << setprecision(2) << tax << endl;
	}
	
	return 0;
}
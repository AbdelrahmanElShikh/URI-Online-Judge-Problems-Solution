#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float salary, newSalary;
	cin >> salary;


	if (salary >= 0 && salary <= 400.00)
	{
		newSalary = (salary + (salary * (0.15)));
		cout << fixed << setprecision(2);
		cout << "Novo salario: " <<fixed<< setprecision(2) << newSalary << endl;
		cout << "Reajuste ganho: " << fixed << setprecision(2) << newSalary-salary << endl;
		cout << "Em percentual: 15 %" << endl;
	
	}
	else if (salary >= 400.01 && salary <= 800.00)
	{
		newSalary = (salary + (salary * (0.12)));
		cout << fixed << setprecision(2);
		cout << "Novo salario: " << fixed << setprecision(2) << newSalary << endl;
		cout << "Reajuste ganho: " << fixed << setprecision(2) << newSalary - salary << endl;
		cout << "Em percentual: 12 %" << endl;
	}
	else if (salary >= 800.01 && salary <= 1200.00)
	{
		newSalary = (salary + (salary * (0.10)));
		cout << fixed << setprecision(2);
		cout << "Novo salario: " << fixed << setprecision(2) << newSalary << endl;
		cout << "Reajuste ganho: " << fixed << setprecision(2) << newSalary - salary << endl;
		cout << "Em percentual: 10 %" << endl;
	}
	else if (salary >= 1200.01 && salary <= 2000.00)
	{
		newSalary = (salary + (salary * (0.07)));
		cout << fixed << setprecision(2);
		cout << "Novo salario: " << fixed << setprecision(2) << newSalary << endl;
		cout << "Reajuste ganho: " << fixed << setprecision(2) << newSalary - salary << endl;
		cout << "Em percentual: 7 %" << endl;
	}
	else 
	{
		newSalary = (salary + (salary * (0.04)));
		cout << fixed << setprecision(2);
		cout << "Novo salario: " << fixed << setprecision(2) << newSalary << endl;
		cout << "Reajuste ganho: " << fixed << setprecision(2) << newSalary - salary << endl;
		cout << "Em percentual: 4 %" << endl;
	}
	return 0;
}
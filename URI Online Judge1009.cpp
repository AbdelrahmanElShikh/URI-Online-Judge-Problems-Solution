//Abdel-Rahman ElShikh
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main ()
{
 string name;
 double	salary,total;
 cin>>name;
 cin>>salary;
 cin>>total;
 total=salary+ (total*0.15);
	 cout<<"TOTAL = R$ "<<setprecision(2)<<fixed<<total<<endl;

return 0;
}
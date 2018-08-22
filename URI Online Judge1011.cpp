//Abdel-Rahman ElShikh

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double pi=3.14159,R,resault;
	cin>>R;
	resault=((4.0/3)*pi*R*R*R);
	cout<<setprecision(3)<<fixed<<"VOLUME = "<<resault<<endl;
return 0;
}
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float a,b,c;
	cin>>a>>b>>c;
	if(a+b>c&&a+c>b&&b+c>a)
		cout<<"Perimetro = "<<setprecision(1)<<fixed<<a+b+c<<endl;
	else
		cout<<"Area = "<<setprecision(1)<<fixed<<((0.5*a)+(0.5*b))*c<<endl;
	return 0;
}
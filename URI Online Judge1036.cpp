#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;
int main()
{
	float a,b,c,R1,R2;
	cin>>a>>b>>c;
	if(a==0||((b*b)-(4*a*c))<0)
		cout<<"Impossivel calcular"<<endl;
	else
	{
	R1=(((-1*b)+(sqrt((b*b)-(4*a*c))))/(2*a));
	R2=(((-1*b)-(sqrt((b*b)-(4*a*c))))/(2*a));
	cout<<"R1 = "<<setprecision(5)<<fixed<<R1<<endl;
	cout<<"R2 = "<<setprecision(5)<<fixed<<R2<<endl;
	}
	return 0;
}
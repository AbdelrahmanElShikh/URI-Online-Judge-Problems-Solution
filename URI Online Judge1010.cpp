//Abdel-Rahman ElShikh
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int product1,numberOfProduct1;
		double thePriceOfProduct1,total;
    int product2,numberOfProduct2;
	double thePriceOfProduct2;
	cin>>product1>>numberOfProduct1>>thePriceOfProduct1;
	cin>>product2>>numberOfProduct2>>thePriceOfProduct2;
	total=(numberOfProduct1*thePriceOfProduct1)+(numberOfProduct2*thePriceOfProduct2);
	cout<<"VALOR A PAGAR: R$ "<<setprecision(2)<<fixed<<total<<endl;
return 0;
}
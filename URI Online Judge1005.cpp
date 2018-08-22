//Abdel-Rahman ElShikh
#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{const double A_weight =3.5,B_weight=7.5;
	double A,B,MEDIA;
	
	cin>>A>>B;
	A=A*A_weight;
	B=B*B_weight;
	
	MEDIA =(A + B) / (A_weight + B_weight);
	cout<<"MEDIA = "<<setprecision(5)<<fixed<<MEDIA<<endl;
	return 0;
}
//Abdel-Rahman ElShikh
#include <iostream>	
#include <iomanip>
using namespace std;
int main()
{ 
	const double A_weight=2,B_weight=3,C_weight=5;
	double A,B,C,MEDIA;
	cin>>A>>B>>C;
	A=A*A_weight;
	B=B*B_weight;
	C=C*C_weight;
	MEDIA=(A+B+C)/(A_weight+B_weight+C_weight);
	cout<<"MEDIA = "<<setprecision(1)<<fixed<<MEDIA<<endl;
	return 0;
}
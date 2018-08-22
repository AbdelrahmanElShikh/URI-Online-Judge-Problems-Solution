//Abdel-Rahman ElShikh

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double A,B,C,pi=3.14159,A1,A2,A3,A4,A5;
	cin>>A>>B>>C;
	A1=(0.5)*A*C;
    A2=pi*C*C;
    A3=(0.5)*(A+B)*C;
	A4=B*B;
	A5=A*B;
	cout<<setprecision(3)<<fixed<<"TRIANGULO: "<<A1<<endl;
		cout<<setprecision(3)<<fixed<<"CIRCULO: "<<A2<<endl;
		cout<<setprecision(3)<<fixed<<"TRAPEZIO: "<<A3<<endl;
		cout<<setprecision(3)<<fixed<<"QUADRADO: "<<A4<<endl;
		cout<<setprecision(3)<<fixed<<"RETANGULO: "<<A5<<endl;
	return 0;
}
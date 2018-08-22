#include <iostream>
using namespace std;
int main()
{
	double a,b,c,x[3];
	for (int i=0;i<3;i++)
		cin>>x[i];
	for (int i=0;i<3;i++)
		for(int j=i+1;j<3;j++)
		{
			double temp;
			if(x[i]<x[j])
			{
				temp=x[j];
				x[j]=x[i];
				x[i]=temp;
			}
		}
		//for (int i=0;i<3;i++)
		//cout<<x[i]<<endl;
	a=x[0];
	b=x[1];
	c=x[2];
	//cout<<a<<endl<<b<<endl<<c<<endl;
	
	double d,e,f;
	d=a*a;
	e=b*b;
	f=c*c;
	//cout<<d<<"  "<<e<<"  "<<f<<endl;
	
	
	if (a>=(b+c))
		cout<<"NAO FORMA TRIANGULO"<<endl;

	
	
	else if(d==(e+f))
		cout<<"TRIANGULO RETANGULO"<<endl;
	
	
	
	else if (d>(e+f))
		cout<<"TRIANGULO OBTUSANGULO"<<endl;

	
	
	else if (d<(e+f))
		cout<<"TRIANGULO ACUTANGULO"<<endl;
     //*************************************************************************************
	//**************************************************************************************
	
    if (a==b && b==c)
		cout<<"TRIANGULO EQUILATERO"<<endl;
	
	
	if ((a==b && b!=c ) || (b==c && b!=a) || (a==c && c!=b))
		cout<<"TRIANGULO ISOSCELES"<<endl;
		
	return 0;
}
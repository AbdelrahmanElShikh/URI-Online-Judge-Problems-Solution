#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
float round(float number)
{
    return number < 0.000 ? ceil(number - 0.05) : floor(number + 0.05);
}

int main()
{
  float  a;
	int b,d;
    cin>>a;
	cout<<"NOTAS:"<<endl;
	b=a/100;
	cout<<b<<" nota(s) de R$ 100.00"<<endl;
	a=a-(b*100);
	b=a/50;
	cout<<b<<" nota(s) de R$ 50.00"<<endl;
	a=a-(b*50);
	b=a/20;
	cout<<b<<" nota(s) de R$ 20.00"<<endl;
	a=a-(b*20);
	b=a/10;
	cout<<b<<" nota(s) de R$ 10.00"<<endl;
	a=a-(b*10);
	b=a/5;
	cout<<b<<" nota(s) de R$ 5.00"<<endl;
	a=a-(b*5);
	b=a/2;
	cout<<b<<" nota(s) de R$ 2.00"<<endl;
	a=a-(b*2);
	cout<<"MOEDAS:"<<endl;
	b=a/1;
	cout<<b<<" moeda(s) de R$ 1.00"<<endl;
	a=a-(b*1);
	
	a=( round( a * 1000.0 ) / 1000.0);
	
	b=a/0.50;
	cout<<b<<" moeda(s) de R$ 0.50"<<endl;
	a=a-(b*0.50);
	b=a/0.25;
	cout<<b<<" moeda(s) de R$ 0.25"<<endl;
	a=a-(b*0.25);
	b=a/0.10;
	cout<<b<<" moeda(s) de R$ 0.10"<<endl;
	a=a-(b*0.10);
	b=a/0.05;
	cout<<b<<" moeda(s) de R$ 0.05"<<endl;
	a=a-(b*0.05);
	//a= round( a * 1000.0 ) / 1000.0;
	
	
	
	
	cout<<(a/0.01)<<" moeda(s) de R$ 0.01"<<endl;

	return 0;
}
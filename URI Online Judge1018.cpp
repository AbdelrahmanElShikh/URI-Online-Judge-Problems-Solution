#include <iostream>

using namespace std;
int main()
{
	int a,b;   
	cin>>a;
	cout<<a<<endl;
	b=a/100;
	cout<<b<<" nota(s) de R$ 100,00"<<endl;
	a=a-(b*100);
	b=a/50;
	cout<<b<<" nota(s) de R$ 50,00"<<endl;
	a=a-(b*50);
	b=a/20;
	cout<<b<<" nota(s) de R$ 20,00"<<endl;
	a=a-(b*20);
	b=a/10;
	cout<<b<<" nota(s) de R$ 10,00"<<endl;
	a=a-(b*10);
	b=a/5;
	cout<<b<<" nota(s) de R$ 5,00"<<endl;
	a=a-(b*5);
	b=a/2;
	cout<<b<<" nota(s) de R$ 2,00"<<endl;
	a=a-(b*2);
	b=a/1;
	cout<<b<<" nota(s) de R$ 1,00"<<endl;

return 0;
}

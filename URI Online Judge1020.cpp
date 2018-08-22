#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cin>>a;
	b=a/365;
	cout<<b<<" ano(s)"<<endl;
	a=a-(b*365);
	b=a/30;
	cout<<b<<" mes(es)"<<endl;
	a=a-(b*30);
	cout<<a<<" dia(s)"<<endl;
	
return 0;
}
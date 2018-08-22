#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cin>>a;
	b=a/(60*60);
	cout<<b<<":";
	a=a-(b*(60*60));
	b=a/60;
	cout<<b<<":";
	a=a-(b*60);
	b=a;
	cout<<b<<endl;


return 0;
}
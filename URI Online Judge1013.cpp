//Abdel-Rahman ElShikh
#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	int a,b,c,d,f;
    cin>>a>>b>>c;
	d=((a+b)+abs(a-b))	/(2);
	f=((d+c)+abs(d-c))	/(2);
	cout<<f<<" eh o maior"<<endl;


return 0;
}

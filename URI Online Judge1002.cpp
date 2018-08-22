#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double pi=3.14159,A,R;
	
	cin>>R;
	A=pi*R*R;
	cout<<"A=" << setprecision(4) <<fixed<<A<<endl;
	return 0;
}
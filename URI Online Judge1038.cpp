#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int x,y;
	float p;
	cin>>x>>y;
	if(x==1)
	{
		p=4.00;
		cout<<"Total: R$ "<<setprecision(2)<<fixed<<(y*p)<<endl;
    }
	else if(x==2)
	{
        p=4.50;
		cout<<"Total: R$ "<<setprecision(2)<<fixed<<(y*p)<<endl;
	}
	else if(x==3)
	{
        p=5.00;
		cout<<"Total: R$ "<<setprecision(2)<<fixed<<(y*p)<<endl;
	}
	else if(x==4)
	{
        p=2.00;
		cout<<"Total: R$ "<<setprecision(2)<<fixed<<(y*p)<<endl;
	}
	else if(x==5)
	{
        p=1.50;
		cout<<"Total: R$ "<<setprecision(2)<<fixed<<(y*p)<<endl;
	}

return 0;
}
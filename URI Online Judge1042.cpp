#include <iostream>
using namespace std;
int main()
{
	int x[3],y[3];
	for (int i=0;i<3;i++)
	{
		cin>>x[i];
		y[i]=x[i];
	}
	for(int i=0;i<3;i++)
		for(int j=i+1;j<3;j++)
		{
			int temp;
			if(x[i]>x[j])
			{
				temp=x[j];
				x[j]=x[i];
				x[i]=temp;
			}
		}
		for(int i=0;i<3;i++)
			cout<<x[i]<<endl;
		cout<<endl;
			for(int i=0;i<3;i++)
			cout<<y[i]<<endl;
	return 0;
}
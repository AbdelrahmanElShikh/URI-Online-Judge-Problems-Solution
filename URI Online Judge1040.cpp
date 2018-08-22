#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	const int n1_weight=2,n2_weight=3,n3_weight=4,n4_weight=1;
	float n1,n2,n3,n4,MEDIA;
	cin>>n1>>n2>>n3>>n4;
	n1=n1*n1_weight;
	n2=n2*n2_weight;
	n3=n3*n3_weight;
	n4=n4*n4_weight;
	MEDIA=(n1+n2+n3+n4)/(n1_weight+n2_weight+n3_weight+n4_weight);
	cout<<"Media: "<<setprecision(1)<<fixed<<MEDIA<<endl;
	if(MEDIA>=7.0)
		cout<<"Aluno aprovado."<<endl;
	else if (MEDIA<5.0)
		cout<<"Aluno reprovado."<<endl;
	else if (MEDIA>=5.0&&MEDIA<=6.9)
	{
		cout<<"Aluno em exame."<<endl; 
	float exam;
	cin>>exam;
	cout<<"Nota do exame: "<<setprecision(1)<<fixed<<exam<<endl;
	MEDIA=((MEDIA+exam)/2.0);
	if(MEDIA>=5.0)
		cout<<"Aluno aprovado."<<endl;
	else if (MEDIA<=4.9)
	cout<<"Aluno reprovado."<<endl;
	cout<<"Media final: "<<setprecision(1)<<fixed<<MEDIA<<endl;
	}
	return 0;
}
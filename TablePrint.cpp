#include<iostream>

using namespace std;

int main(void)
{
	
	int number;
	int upto;
	int i,j;
	cout<<"Enter Which Number Table You Want To Print";cin>>number;
	cout<<"Enter How Long You want to print your Table";cin>>upto;
	for(i=1;i<=upto;i++)
	{
		cout<<number<<"x"<<i<<"="<<number*i<<"\n";
	}
}

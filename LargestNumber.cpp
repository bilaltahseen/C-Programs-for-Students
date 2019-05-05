#include<iostream>

using namespace std;

int main(void)
{
int i,j,k;
int setofnumbers[5];
int largest;
int smallest;
cout<<"Enter 5 numbers\n";
for(i=0;i<=5;i++)
{
	cin>>setofnumbers[i];
	
}
for(j=0;j<=5;++j)
{

if(setofnumbers[0]>setofnumbers[j])
{largest=setofnumbers[0];
}
}
cout<<"Largest Number Is "<<largest;

for(k=0;k<=5;k++)
{

if(setofnumbers[0]<setofnumbers[k])
{smallest=setofnumbers[0];
}
}
cout<<"\nSmallest Number Is "<<smallest;

}

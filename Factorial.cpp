#include<iostream>

using namespace std;

int main(void)
{
double number;
double factorial=1;
int i;
cout<<"Enter Number";cin>>number;
while(number>1)
{
	factorial=number*factorial;
	number--;
}
cout<<"Factorial of a given number is"<<factorial;
}

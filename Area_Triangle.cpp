#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;

int main(void)
{
	float side1;
	float side2;
	float side3;
	float s;
	float area;
system("cls");
cout<<"Enter 1st Side";cin>>side1;
cout<<"Enter 2nd Side";cin>>side2;
cout<<"Enter 3rd Side";cin>>side3;
s=(side1+side2+side3)/2.00;
area=sqrt(s*(s-side1)*(s-side2)*(s-side3));
cout<<"Area of triangle is"<<area;
}


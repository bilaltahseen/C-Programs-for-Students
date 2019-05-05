#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;

int main(void)
{
float angle1;
float angle2;
float angle3;
system("cls");
cout<<"Enter 1st Angle";cin>> angle1;
cout<<"Enter 2nd Angle";cin>> angle2;
cout<<"Enter 3rd Angle";cin>> angle3;
float total =angle1+angle2+angle3;
if(total==180)
{
	cout<<"Its a Triangle";
	}	
	else{
		cout<<"Its not a Triangle";
	}
}


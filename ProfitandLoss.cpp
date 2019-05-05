#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;

int main(void)
{
int p;
int l;
int Sp=0;
int Cp=0;
int val;
system("cls");
cout << "Enter Cost Price";
cin >> Cp;
cout << "Enter Selling Price";
cin >> Sp;
if(Cp>Sp)
{l=Cp-Sp;
cout<<"You are in loss of"<<l;
	}
	else if(Sp>Cp)
	{p=Sp-Cp;
	cout<<"You are in profit of"<<p;
	}	
	
}


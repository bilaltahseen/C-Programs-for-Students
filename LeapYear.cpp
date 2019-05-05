#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
namespace leap{
	int year;
}
using namespace std;
using namespace leap;
int main()
{
	
	system("cls");
	printf("Enter Year:");
	scanf("%d",&year);
	if(year%4==0&& (year%100==1))
	{printf("Its a leap Year");
	}else if(year%400==0&&(year%100==0))
	{printf("Its a leap Year");
	}
	else if(year%400==0)
	{printf("Its a leap Year");
	}
	else{
		printf("Its not a leap Year");
	}
	
}

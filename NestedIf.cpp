#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	int temp,i;
	for(i=0;i<5;i++)
	{
		printf("Please Type in Temperature");
		scanf("%d",&temp);
		if(temp>20)
		{
		if(temp<30)
		   {
			 printf("Nice Day");}
		}
		else
		    printf("Okay");    
	}
}

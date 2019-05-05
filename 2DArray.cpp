#include<iostream>
using namespace std;

int main()
{
	int RowsCols[5][2],i,j;

	for(i=0;i<5;i++)
	{
		printf("Enter Roll Number For Student %d and Expenses\t",i);
		scanf("%d%d",&RowsCols[i][0],&RowsCols[i][1]);
		
	}
	for(j=0;j<5;j++)
	{
		printf("Student RollNumber = %d",RowsCols[j][0]);printf("\tSpent %7.1d",RowsCols[j][1]);
		printf("\n");
	}
}

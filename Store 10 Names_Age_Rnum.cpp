#include<iostream>

using namespace std;

int main()

{   char database_Names[10][100];
	int database_Age_RNum[10][2];
	int i,j;
	while(i<10)
	{
	printf("Enter Name of the Student");
	scanf("%s",&database_Names[i]);
	printf("Enter Age and Roll Number Of Student %d",i);
	scanf("%d%d",&database_Age_RNum[i][1],&database_Age_RNum[i][2]);
	i++;
}
for(j=0;j<10;j++)
{
	printf("\n");
	printf("Student Name is %s  ",database_Names[j]);
	printf(" Student Age and Roll Number Respectively  %d  %d",database_Age_RNum[j][1],database_Age_RNum[j][2]);
	printf("\n");
}
}


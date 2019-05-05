#include<iostream>
#define LIM 5
using namespace std;
 int table[LIM]={100,50,20,10,1};
 int main()
 {
 	int dex,amount,quantity;
 	printf("Enter Amount in Rupees");
 	scanf("%d",&amount);
 	for(dex=0;dex<LIM;dex++)
 	{
 		quantity=amount/table[dex];
 		printf("Value if Bill=%3d",table[dex]);
 		printf("Numbers of Bill=%3d",quantity);
 		printf("\n");
 		amount=amount%table[dex];}
	 }



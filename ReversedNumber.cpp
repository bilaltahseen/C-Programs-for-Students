#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;

int main(void)
{
int orignalnumber[5];
int reversednumber[5];
int i,j;
int totalorg=0;
int totalrev=0;
for(i=0;i<5;i++){cin>>orignalnumber[i];totalorg=orignalnumber[i]+totalorg;}
for(j=4;j>=0;j--){cout<<orignalnumber[j];totalrev=orignalnumber[j]+totalrev;}
cout<<"\nTotal Org"<<totalorg;
cout<<"\nTotal Rev"<<totalrev;
if(totalorg==totalrev)
{cout<<"\nThey Are Equal";
}
}


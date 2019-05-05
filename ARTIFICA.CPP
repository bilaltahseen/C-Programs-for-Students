#include<stdio.h>
#include<conio.h>
#include<dos.h>
int i,j,k;
double bias=-3;float new_op;static int x1=0;static int x2=0;
double w1=0;double w2=0;double dr_res=1;double req_val=0.5;
float op;double er;double cost_j;double eta=0.1;double adj_wght;double new_w;int zero;int high;
void ne_act_fn(){
op=((x1*w1+x2*w2))+bias;
printf("-Numeric Output %f\n",op);
if(op>=req_val){high=1;printf("-Neurons Output is %d",high);}else{high=0;printf("-Neurons Output is %d",high);}
}
void err_cal(){
er=dr_res-op;
printf("-Error Calc %f",er);
}
void cost_fn(){
cost_j=0.5*(er*er);
printf("-Cost %f",cost_j);
}
void wigh_adj(){adj_wght=eta*er*x1;
printf("-Adjusted Weight %f",adj_wght);}
void new_wigh(){new_w=w1+adj_wght;
w1=w2=new_w;
printf("-New Weight %f",new_w);}
void final_fc()
{
while(op<=req_val)
{
printf("\n");
printf("\n");
ne_act_fn();
printf("\n");
err_cal();
printf("\n");
cost_fn();
printf("\n");
wigh_adj();
printf("\n");
new_wigh();
delay(700);
clrscr();
}
}


void main(){
clrscr();
printf("\Loading\n");
delay(1000);
for(k=0;k<=40;k++)
{printf("%c",219);delay(100);
}
int c_op;
clrscr();
for(c_op=1;c_op<=4;c_op++)
{delay(3000);
switch(c_op) {
case 1:printf("Checking for x1=0 and x2=0\n");x1=0;x2=0;if(op<=req_val){printf("Neuron Output is Low\n");break;}else{final_fc();printf("Neuron Output is High\n");}break;
case 2:printf("Checking for x1=0 and x2=1\n");x1=0;x2=1;if(op<=req_val){printf("Neuron Output is Low\n");break;}else{final_fc();printf("Neuron Output is High\n");}break;
case 3:printf("Checking for x1=1 and x2=0\n");x1=1;x2=0;if(op<=req_val){printf("Neuron Output is Low\n");break;}else{final_fc();printf("Neuron Output is High\n");}break;
case 4:printf("Checking for x1=1 and x2=1\n");x1=1;x2=1;final_fc();if(op<=req_val){printf("Neuron Output is Low\n");break;}else{final_fc();printf("Neuron Output is High");}break;
}
}
getch();
}
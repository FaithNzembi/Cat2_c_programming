/*
Name: FAITH NZEMBI 
Reg no: CT101/G/22641/24
Description: CAT2_Q2
*/

#include<stdio.h>

int main(){
float hours,rate,gross,tax,net;

printf("Enter hours worked in a week:");
scanf("%f",&hours);

printf("Enter hourly wage:");
scanf("%f",rate);

if(hours>40)
  gross =40*rate + (hours-40)* rate *1.5;
  else
  gross = hours*rate;
  
  if(gross<=600)
  tax=0.15*gross;
  else
  tax=0.15*600+0.20*(gross-600);
  net=gross-tax;
  printf("\nGross Pay:$%.2f",gross);
  printf("\nTaxes:$%.2f",tax);
  printf("\nNet Pay:$.2f\n",net);
  
  return 0;
  }

#include<stdio.h>
int main() {
 int x, gross_salary, basic, da, ta;
 
do{
 
 printf("Enter basic salary : ");
 scanf("%d", &basic);
 da = (50 * basic) / 100;
 ta = (20 * basic) / 100;
 gross_salary = basic + da + ta;
 printf("\nGross salary : %d\n", gross_salary);
 
 printf("do you want to proceed, enter 1-proceed,0-exit");
 scanf("%d",&x);
 
 }while(x);
}

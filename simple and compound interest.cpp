#include<stdio.h>
#include<math.h>
int main ()
{
	float principalamount,rate,time,compound_interest, simple_interest;
	printf("enter the principal amount:");
	scanf("%f",&  principalamount);
	printf("enter the amount:");
	scanf("%f",&rate);
	printf("enter the time:");
	scanf("%f",&time);
	compound_interest= principalamount-rate;
	simple_interest= (principalamount*time*rate)/100;
	printf(" compound_interest %f\n");
	scanf("%f",&compound_interest);
	printf(" simple_interest %f\n");
	scanf("%f",&simple_interest);
	return 0;
	
}
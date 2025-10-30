#include <stdio.h>
#include <stdbool.h>
int main ()
{
	float m[5]={88,98,76,98,79};
	float tot,avg;
	bool result;
	printf("\t \t \t BCA \n");
	printf("_________________________________________________________________________________________\n");
	printf("NAME:SRUTHI \t \t \t reg no: 1187356\n");
	printf("_________________________________________________________________________________________\n");

	printf("Tamil=\t \t \t \t \t \t %5.2f \n",m[0]);
	printf("english=\t \t \t \t \t %5.2f \n",m[1]);
	printf("maths=\t \t \t \t \t \t %5.2f \n",m[2]);
	printf("science=\t \t \t \t \t %5.2f \n",m[3]);
	printf("social=\t \t \t \t \t \t %5.2f \n ",m[4]);
	tot=m[0]+m[1]+m[2]+m[3]+m[4];
	avg=tot/5;
	if(avg>50)
	result=true;
	printf("_____________________________________________________________________________________________\n");
	printf("tot=%5.2f \t \t \t \t \t avg=%5.2f\t \t result=%5.2f ",tot,avg,result );
	if(result==true)
	   printf("pass");
	else
	    printf("fail");
}

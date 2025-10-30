#include<stdio.h>
int main(){
	int n,i;
	 printf("enter a positive integer: ");
	 scanf("%d",&n);
	 
	 if(n<=0){
	 	printf("please enter a positive integer greater than 0\n");
	 	return 1;
	 }
	 printf("\nNumber\tsquare\tcube\n");
	 printf("________________________\n");
	  for(i=1;i<=n;i++){
	  	printf("%d\t%d\t%d\n",i,i*i,i*i*i);
	  }
	  return 0;
}

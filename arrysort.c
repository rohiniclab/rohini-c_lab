#include<stdio.h>
int main(){
	int arr[100],n,i,j,temp;
	printf("Enter number of elements in the array:");
	scanf("%d",&n);
	if(n<=0||n>100){
		printf("invaild number of element.please enter a v alue between 1and 100.\n");
     	return 0;	
	}
	printf("Enter %d integer:\n",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+i];
				arr[j+1]=temp;
	    }
	}
}
printf("sorted array in ascending order:\n");
for(i=0;i<n;i++){
	printf("%d",arr[i]);
}
printf("\n");
return 0;
}

#include<stdio.h>
#include<string.h>

int main(){
	
	int n,i,j,temp,arr[10000];
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("\n");

	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
		if(arr[j]<arr[j+1])
	{
		temp=arr[j];
		arr[j]=arr[j+1];
		arr[j+1]=temp;
	}
}
for(i=0;i<n;i++)
printf("%d\n",arr[i]);

return 0;
}

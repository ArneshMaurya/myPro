#include<stdio.h>
#include<string.h>

int main(){
	
	int n,i,j,temp,arr[10000];
	int sum=1;
	int as[10000];
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1;j++)
		if(arr[j]>arr[j+1]){
		temp=arr[j];
		arr[j]=arr[j+1];
		arr[j+1]=temp;
		
	}
}
for(i=0;i<n-1;i++){
	if(arr[i]==arr[i+1])
	{
		as[i]=sum;
		as[i+1]=sum;
	}
	if(arr[i]<arr[i+1]){
		as[i]=sum;
		as[i+1]=++sum;
	}
	
}

sum=0;
for(i=0;i<n;i++)
sum=as[i]+sum;

printf("%d",sum);

return 0;
}

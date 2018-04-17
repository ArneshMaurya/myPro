#include<stdio.h>
#include<string.h>

int main()
{
	int arr[10000],i,n,su,sum,j;
	int p1,p2;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	su=0;
	for(i=1;i<n;i++){
		p1=i-1;
		p2=i+1;
		sum=0;
		for(j=1;j<n;j++){
			if(p1!=j&&p2!=j&&i!=0)
			sum=sum+arr[j];
			}		
		sum=sum-arr[i];
		if(su<sum)
		su=sum;
	}
	
printf("%d",su);
return 0;
}

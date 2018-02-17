#include<stdio.h>

int main(){
	int i,n,a[100],sum=0;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",a+i);
	}
for(i=1;i<n;i++)
{
	if(a[i-1]<a[i])
	sum=sum+a[i-1];
}

printf("%d",sum);

return 1;

}

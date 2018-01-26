#include<stdio.h>
#include<conio.h>


int main(){

int n,i,j,a[1000],occ[100];

scanf("%d",&n);

for(i=0;i<n;i++){
	scanf("%d",&a[i]);
	occ[i]=0;
}

for(i=0;i<n;i++)
for(j=0;j<n;j++)
{
	if(a[i]==a[j])
	{
		occ[i]++;
	}
}

for(i=0;i<n;i++)
{
	if(occ[i]==1)
	printf(" %d",a[i]);
}

return 0;

}

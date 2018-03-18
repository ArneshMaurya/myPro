#include<stdio.h>
#include<string.h>

int main(){
	
	int n,i,j,arr[10000];
	int ele;
	scanf("%i%i",&n,&ele);
	
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(ele==arr[i]+arr[j]){
				printf("yes");
				return 0;
			}
		}
	}
printf("no");
return 0;
}

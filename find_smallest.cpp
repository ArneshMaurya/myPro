#include<stdio.h>
void find_small(int *a, int r){
	int temp;
	for(int i=0;i<r;i++){
		for(int j=0;j<r-1;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;	
			}
		}
	}
}
int main(void){
	int n,k,a,r,d,c=0,place=0;
	scanf("%d",&n);
	scanf("%d",&k);
	a=n;
	while(a!=0){
		a=a/10;
		c++;
	}
	a=n;
	int num[c];
	for(int i=0;i<c;i++){
		num[i]=a%10;
		a=a/10;
	}
	r=c-k;
	find_small(num,c);
	for(int i=0;i<r;i++){
		printf("%d",num[i]);
	}
}

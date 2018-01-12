#include<stdio.h>
int main(void)
{
	int n;
	//printf("Enter Length of the number : ");
	scanf("%d",&n);
	int a[n],temp;                                 
	//printf("Enter numbers :");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	/*printf("The Number you have inserted : ");
	for(int i=0;i<n;i++){
		printf("%d",a[i]);
	}*/
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1;j++){
			if(a[j]<a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	//printf("\nThe largest number you can make using these numbers is : ");
	for(int i=0;i<n;i++){
		printf("%d",a[i]);
	}
}

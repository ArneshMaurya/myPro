#include<stdio.h>
#include<conio.h>

int main(){
	
	int a[100];
	int i,ne,num,j;
scanf("%d",&num);
printf("\n\n");
for(i=0;i<num;i++)
scanf("%d",&a[i]);

for(i=0;i<num;i++){
	if(i%2==0&&a[i]%2!=0)
	printf(" %d",a[i]);
	if(i%2!=0&&a[i]%2==0)
	printf(" %d",a[i]);
}

getch();
return 0;
}

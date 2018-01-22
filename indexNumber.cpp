#include<stdio.h>
#include<conio.h>

int main(){
	
	int a[100];
	int i,num;
scanf("%d",&num);
printf("\n\n");
for(i=0;i<num;i++)
scanf("%d",&a[i]);

for(i=0;i<num;i++){
	if(i==a[i])
	printf(" %d",i);
}

getch();
return 0;

}

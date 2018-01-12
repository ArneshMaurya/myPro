#include<stdio.h>
#include<conio.h>

int main(){
	
	int a[100],b[100];
	int i,j,num,un,count=0;
scanf("%d",&num);
printf("\n\n");
for(i=0;i<num;i++)
scanf("%d",&a[i]);

for(i=0;i<num;i++){
	if(a[i]!=999){
	un=a[i];
	b[count]=un;
	count++;
for(j=0;j<num;j++){
	if(un==a[j]){
		a[j]=999;
		}
	}
	
}


}

if(num!=count){
for(j=0;j<count;j++){
	printf(" %d ",b[j]);
}
}else
{printf("Unique");
}
getch();
return 1;

	
}

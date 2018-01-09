#include<stdio.h>
#include<conio.h>

int main(){
	int i,count=0;
	char arr[100];
	printf("Enter any string\n");
	gets(arr);
	printf("\n");
	
	for(i=0;arr[i]!=NULL;i++)
	count++;
	for(i=count-1;i>=0;i--)
	printf("%c",arr[i]);
getch();
return 0;
}

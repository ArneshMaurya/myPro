#include<stdio.h>

int main(){
	int i,count=0;
	char a[10];
	
	scanf("%s",&a);

for(i=0;a[i]!=NULL;i++){
	if(a[i]=='I'){
	if(a[i+1]!=NULL&&a[i+1]=='V'||a[i+1]=='X'){
		count=count-2;
	}
	count++;
	}
	else if(a[i]=='V'){
	count=count+5;
	}
	else if(a[i]=='X')
	count=count+10;
  
}	

printf("%d",count);
return 1;
}

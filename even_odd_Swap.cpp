#include<stdio.h>
#include<string.h>
int main(){
	
	int i,count=0,len,temp;
	char a[10];
  
	scanf("%s",&a);
len=strlen(a);
for(i=0;i<len-1;i++){
	if(i%2==0){
		temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;
		
	}
}	

printf("%s",a);
return 1;
}

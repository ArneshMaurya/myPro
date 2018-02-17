#include<stdio.h>
#include<string.h>

int main(){
	
	char a[1000],b[1000];
	
	scanf("%s%s",a,b);
	if(a[0]>=97&&a[0]<=122){
		a[0]=a[0]-('a'-'A');
	}
	if(a[1]>='A'&&a[1]<='Z'){
		a[1]=a[1]+('a'-'A');
	}
	
	if(b[0]>=97&&b[0]<=122){
		b[0]=b[0]-('a'-'A');
	}
	if(b[1]>='A'&&b[1]<='Z'){
		b[1]=b[1]+('a'-'A');
	}
	
	printf("%s %s",&a,&b);
	
	
	getch();
	
	return 0; 	
	}

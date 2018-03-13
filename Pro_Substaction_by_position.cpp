#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	
	int i,sum1=0,sum2=0;
	char s1[11000],s2[1000];
	scanf("%s",s1);
	scanf("%s",s2);
for(i=0;i<strlen(s1);i++){
	sum1=sum1+(int)s1[i];
}
for(i=0;i<strlen(s2);i++){
	sum2=sum2+(int)s2[i];
}
printf("%d",abs(sum1-sum2));
return 0;
}

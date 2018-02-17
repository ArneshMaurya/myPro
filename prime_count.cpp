#include<stdio.h>
#include<string.h>

int prime(int x,int count){
	
	int flage=0,i;

for(i=2;i<=x/2;i++){
 
 if(x%i==0){
	flage=1;
	break;
 }	
}

if(flage==0){
count++;
}
return count;
}


int main(){
	int a,b,i,count=0;
	
	scanf("%d%d",&a,&b);
	
	for(i=a;i<=b;i++){
		count=prime(i,count);	
		}
printf("%d",count);

}

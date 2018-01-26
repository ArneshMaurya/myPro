#include<stdio.h>
#include<conio.h>


int main(){
	
	char x[1000],y[1000],pos[100];
	int i,l1,l2,min=0,left;
scanf("%s",&x);
scanf("%s",&y);

l1=strlen(x);
l2=strlen(y);

if(l1>l2)
{	left=l1-l2;
	for(i=0;i<l2;i++){
		if(x[i]==y[i]){
			min++;
		}else
		pos[i]=i;
	}
}else
{	left=l2-l1;
	for(i=0;i<l1;i++){
		if(x[i]==y[i]){
			min++;
		}else
		pos[i]=i;
	}
}

for(i=0;pos[i]!=NULL;i++)
{
x[pos[i]]=y[pos[i]];
}


if(min==0){
printf(" %d",l2);
}else
printf(" %d",l2-min);

return 0;
}

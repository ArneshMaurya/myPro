#include<stdio.h>


int main(){

int arr[50][50];
int ar1[100];
int k=0,i,j,temp,r,c;


scanf("%d",&c);
scanf("%d",&r);

for(i=0;i<r;i++){
    for(j=0;j<c;j++)
    {
        scanf("%d",&arr[i][j]);
        
    }
}



for(i=0;i<r;i++){
    for(j=0;j<c;j++)
    {
        ar1[k]=arr[i][j];
        k++;
    }
}

for(i=0;i<k;i++){
    for(j=i+1;j<k;j++)
    {
      if(ar1[i]>ar1[j])
      {
          temp=ar1[j];
          ar1[j]=ar1[i];
          ar1[i]=temp;
      }
    }
}


k=0;
temp=0;
while(temp<c*r){
for(i=0;i<r;i++){
    for(j=0;j<c;j++)
    {
     if(i+j==k)
      {
        arr[i][j]=ar1[temp];
        temp++;
      }
    }
  }
k++;
}

for(i=0;i<4;i++){
    for(j=0;j<4;j++)
    {
        printf(" %d ",arr[i][j]);
    }
    printf("\n");

}



return 0;

}


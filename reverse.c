#include<stdio.h>
void main(){
int n,temp=0,sum=0,rev=0;
scanf("%d",&n);
int i=0;

while(n>0){

    temp=n%10;
    sum+=temp;  //123   3
    rev=rev*10+temp;
    n=n/10;
    i++;
    }
    printf("Sum : %d ",sum);
    printf("Sum : %d ",rev);
}

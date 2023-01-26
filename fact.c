#include<stdio.h>
void main(){
fact();
}
void fact(){
int i,n;
int fact=1;
printf("Enter A value :");
scanf("%d",&n);
for (i=1;i<=n;i++){
 fact=i*fact;
}
printf("%d",fact);
}

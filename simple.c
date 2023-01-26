#include<stdio.h>
void main(){
int n,a[n];
printf("Enter N value :\n");
scanf("%d",&n);
int i=0;
while(i<n){
    printf("Enter Value for a[%d]\n",i);
    scanf("%d",&a[i]);
    i++;
}
for(int i=0;i<n;i++){
    printf("a[%d]=[%d]\n",i,a[i]);

}
}

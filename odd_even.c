#include<stdio.h>
void main(){
int odd=1,even=1;
int i;
for (i=1;i<=10;i++){

    if(i%2==0){    //2 4 6 8 10

        even*=i;

    }

        else{
            odd*=i;
        }
    }
    printf("even : %d ",even);
    printf("odd  : %d ",odd);
}

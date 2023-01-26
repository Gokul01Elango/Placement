#include<stdio.h>
void main(){
    int i,n,value[5],max1=0,max2=0,max3=0,num;
    //printf("Enter Limit :");    //23 34 62 45 67 54   |F 67 | S 62 | T 54 |
   // scanf("%d",&n);
    for(i=0;i<=5;i++){
        printf("Enter values : ");
        scanf("%d",&value[i]);

        if(value[i]>max1){
            max1=value[i];
        }

        }
    for (i=0;i<=5;i++){
        if( value[i]<max1 && value[i] > max2){
          max2 =value[i];

        }
    }
    for (i=0;i<=5;i++){
        if( value[i]<max2 && value[i] > max3){
          max3 =value[i];  //23

        }
    }
    printf("\nFirst Max value : %d ",max1);
    printf("\nSecond Max value : %d ",max2);
    printf("\nThird Max value : %d ",max3);

}

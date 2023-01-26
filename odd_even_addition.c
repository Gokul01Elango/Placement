#include<stdio.h>
/*
Sum of odd  Digit and Sum of Even Digit values

ex 1234    odd digits 2 , 4  = 6
           even Digit 3 , 1  = 7
           odd - even = 6 - 7 = 1

*/

void main(){
int n,i,odd_sum=0,even_sum=0,temp;
printf("Enter N value : ");
scanf("%d",&n);
for(i=1;n>0;i++){
     temp=n%10;
     if(i%2==1){
        odd_sum+=temp;
    }
    else{
        even_sum+=temp;
    }
    n=n/10;
}
printf("Addition of Odd : %d\n",odd_sum);
printf("Addition of Even : %d\n",even_sum);
printf("Difference between Odd and Even values : %d ",odd_sum-even_sum)
}


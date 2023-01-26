/*#include<stdio.h>
void main(){
int *p1,*p2;
printf("\nA value is %d",*p1);
int a=10;
printf("\nA value is %d",a);
int b=20;
*p1=&a;
printf("\nA value is %d",*p2);
*p2=&b;
printf("\nA value is %d",*p1);
}
*/

int main(void) {
int *ptr1;
int *ptr2;
int a = 5;
int b = 10;
//address of a is assigned to ptr1
ptr1 = &a;
//address of b is assigned to ptr2
ptr2 = &b;
//display value of a and b
printf("%d", *ptr1); //prints 5
printf("\n%d", *ptr2); //prints 10
//print address of a and b
printf("\n%d", ptr1); // prints address
printf("\n%d", ptr2); // prints address
//pointer subtraction
int minus = ptr2 - ptr1;
printf("\n%d", minus); //prints the difference
return 0; }

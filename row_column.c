#include<stdio.h>
void main(){
int i,j,a[2][3],b[2][3],c[2][3];
printf("Enter Matrix Value ");
for(i=0;i<2;i++){
for(j=0;j<3;j++){
scanf("%d",&a[i][j]);
}
}
//NEXT MATRIX
printf("Enter Next Matrix ");
for(i=0;i<2;i++){
for(j=0;j<3;j++){
scanf("%d",&b[i][j]);
}
}
printf("The Addition Matrix :\n");
for(i=0;i<2;i++){
for(j=0;j<3;j++){
c[i][j]=a[i][j]+b[i][j];
printf(" %d |",c[i][j]);
}
printf("\n");
}

}

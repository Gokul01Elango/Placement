#include<stdio.h>
void main(){
int i,j,array1[3][3],array2[3][3],array3[3][3];
//read array
for(i=0;i<3;i++){
    printf("Enter Row %d Values",i);
    for(j=0;j<3;j++){

        scanf("%d",&array1[i][j]);
    }
     printf("\n");
}
for(i=0;i<3;i++){
    printf("Enter Row %d Values : ",i);
    for(j=0;j<3;j++){

        scanf("%d",&array2[i][j]);
    }
     printf("\n");
}
//write array
                                                        /*
                                                        1  2  3                2  4  6                12  12  12
                                                Matrix1 1  2  3    Matrix 2    2  4  6        Ans     24  24  24
                                                        1  2  3                2  4  6                36  36  36

                                                        */
printf("Write Array \n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
       printf("%d  ",array1[i][j]);
    }
    printf("\n");
}
printf("Write Array \n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
       printf("%d  ",array2[i][j]);
    }
    printf("\n");
}
//multiplication array
printf("multiplication array\n");

for(i=0;i<3;i++){
    for(j=0;j<3;j++){
            int sum=0;
            for(int k=0;k<3;k++){
        sum=sum+array1[i][k]*array2[k][j];
        array3[i][j]+=sum;

    }
    }
     printf("\n");
}
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
       printf("%d  ",array3[i][j]);
    }
    printf("\n");
}

}

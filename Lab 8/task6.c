#include <stdio.h>

int main(){
    int mat1[3][3], mat2[3][3], res[3][3];
    int r1,c1,r2,c2;
    int i,j,k;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d",&r1,&c1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d",&r2,&c2);

    if(c1!=r2){
        printf("Matrix multiplication not possible\n");
        return 0;
    }

    printf("Enter first matrix:\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            scanf("%d",&mat1[i][j]);
        }
    }

    printf("Enter second matrix:\n");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            scanf("%d",&mat2[i][j]);
        }
    }

    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            res[i][j]=0;
            for(k=0;k<c1;k++){
                res[i][j]=res[i][j]+mat1[i][k]*mat2[k][j];
            }
        }
    }

    printf("\nResult Matrix:\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }

    return 0;
}
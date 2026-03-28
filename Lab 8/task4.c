#include <stdio.h>

int main(){

    int a[3][3]={{2,3,1},{4,5,6},{7,8,9}};
    int i,j;

    printf("Original Matrix:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    int t[3][3];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            t[j][i]=a[i][j];
        }
    }

    printf("\nTranspose:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",t[i][j]);
        }
        printf("\n");
    }

    int det=0;

    det = a[0][0]*(a[1][1]*a[2][2]-a[1][2]*a[2][1])
        - a[0][1]*(a[1][0]*a[2][2]-a[1][2]*a[2][0])
        + a[0][2]*(a[1][0]*a[2][1]-a[1][1]*a[2][0]);

    printf("\nDeterminant: %d\n",det);

    int cof[3][3];

    cof[0][0]= (a[1][1]*a[2][2]-a[1][2]*a[2][1]);
    cof[0][1]=-(a[1][0]*a[2][2]-a[1][2]*a[2][0]);
    cof[0][2]= (a[1][0]*a[2][1]-a[1][1]*a[2][0]);

    cof[1][0]=-(a[0][1]*a[2][2]-a[0][2]*a[2][1]);
    cof[1][1]= (a[0][0]*a[2][2]-a[0][2]*a[2][0]);
    cof[1][2]=-(a[0][0]*a[2][1]-a[0][1]*a[2][0]);

    cof[2][0]= (a[0][1]*a[1][2]-a[0][2]*a[1][1]);
    cof[2][1]=-(a[0][0]*a[1][2]-a[0][2]*a[1][0]);
    cof[2][2]= (a[0][0]*a[1][1]-a[0][1]*a[1][0]);

    printf("\nCofactor Matrix:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",cof[i][j]);
        }
        printf("\n");
    }

    int adj[3][3];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            adj[j][i]=cof[i][j];
        }
    }

    printf("\nAdjoint Matrix:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",adj[i][j]);
        }
        printf("\n");
    }

    float inv[3][3];

    if(det!=0){
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                inv[i][j]=(float)adj[i][j]/det;
            }
        }

        printf("\nInverse Matrix:\n");
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                printf("%.2f ",inv[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("\nInverse not possible\n");
    }

    return 0;
}
#include <stdio.h>
int main(){
    int matrix[3][3],vlr;
    for (int i=0;i<3;i=i+1){
        for (int j=0;j<3;j=j+1){
            scanf("%d",&matrix[i][j]);
        }
    }
    scanf("%d",&vlr);
    for (int i=0;i<3;i=i+1){
        for (int j=0;j<3;j=j+1){
            if(matrix[i][j] == vlr){
                printf("o valor %d esta na posicao (%d,%d) da matrix\n",vlr,i,j);
            }
        }
    }
}
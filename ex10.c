#include <stdio.h>
int main(){
    int matriz[3][3];
    for (int i=0;i<3;i=i+1){
        for (int j=0;j<3;j=j+1){
        scanf("%d",&matriz[i][j]);
        }
    }
    for (int i=0;i<3;i=i+1){
        for (int j=0;j<3;j=j+1){
        printf("%d ",matriz[i][j]);
        }
    printf("\n");
    }
}
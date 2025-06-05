#include <stdio.h>
int main(){
    int matriz[3][3],menor=__INT_MAX__;
    for (int i=0;i<3;i=i+1){
        for (int j=0;j<3;j=j+1){
            scanf("%d",&matriz[i][j]);
        }
    }
    for (int i=0;i<3;i=i+1){
        for (int j=0;j<3;j=j+1){
            if (menor>matriz[i][j]){
                menor=matriz[i][j];
            }
        }
    }
    printf("%d",menor);
}
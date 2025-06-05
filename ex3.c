#include <stdio.h>
int main(){
    int matriz[3][3],maior=0;
    for (int i=0;i<3;i=i+1){
        for (int j=0;j<3;j=j+1){
            scanf("%d",&matriz[i][j]);
        }
    }
    for (int i=0;i<3;i=i+1){
        for (int j=0;j<3;j=j+1){
            if (maior<matriz[i][j]){
                maior=matriz[i][j];
            }
        }
    }
    printf("%d",maior);
}
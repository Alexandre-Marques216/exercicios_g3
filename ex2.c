#include <stdio.h>
int main(){
    int matriz[5][5],ressoma=0;
    float resmed=0;
    for (int i=0;i<5;i=i+1){
        for (int j=0;j<5;j=j+1){
            scanf("%d",&matriz[i][j]);
        }
    }
    for (int i=0;i<5;i=i+1){
        for (int j=0;j<5;j=j+1){
            
            ressoma=ressoma+matriz[i][j];
        }
    }
    resmed= ressoma/25;
    printf("%.2f",resmed);
}
#include <stdio.h>
int main(){
    int matrix[4][4],res=0;
    for (int i=0;i<4;i=i+1){
        for (int j=0;j<4;j=j+1){
            scanf("%d",&matrix[i][j]);
        }
    }
    for (int i=0;i<4;i=i+1){
        for (int j=0;j<4;j=j+1){
            
            res=res+matrix[i][j];
        }
    }
    printf("%d",res);
}
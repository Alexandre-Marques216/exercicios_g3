#include <stdio.h>
int main() {
    int matriz1[3][3],matriz2[3][3],matriz3[3][3];
    for (int i=0;i<3;i=i+1){
        for (int j=0;j<3;j=j+1){
            scanf("%d", &matriz1[i][j]);
        }
    }
    for (int i=0;i<3;i=i+1){
        for (int j=0;j<3;j=j+1){
            scanf("%d", &matriz2[i][j]);
        }
    }
    for (int i=0;i<3;i=i+1){
        for (int j=0;j<3;j=j+1) {
            matriz3[i][j] = 0;
            for (int k=0;k<3;k=k+1){
                matriz3[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
    for (int i=0;i<3;i=i+1) {
        for (int j=0;j<3;j=j+1)
            printf("%d ", matriz3[i][j]);
        printf("\n");
    }
    return 0;
}

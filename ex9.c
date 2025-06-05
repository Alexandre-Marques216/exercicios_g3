#include <stdio.h>
int main(){
    int matriz[3][3],transposta[3][3],contador = 0;
    for(int i = 0;i < 3;i++){
        for(int j = 0; j < 3;j++){
            scanf("%d",&matriz[i][j]);
        }
    }
    for (int i=0;i<3;i=i+1){
        for (int j=0;j<3;j=j+1){
        transposta[j][i]= matriz[i][j];
        }
    }
    for (int i=0;i<3;i=i+1){
        for (int j=0;j<3;j=j+1){
        if (matriz[i][j] != transposta[i][j])
        {
            contador=contador+1;
        }
        
        }
    }
    if (contador==0){
        printf("matiz simetrica");
    }else{
        printf("matriz assimetrica");
    }
    
    
}
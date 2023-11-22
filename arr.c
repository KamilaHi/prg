#include <stdio.h>
#include <stdlib.h>

#define N_MAX 1000

int main(){
    
    int a=-50, b=50; //границы элементов
    int n=20; //текущий размер
    int k;//счетчик
    
    int m[N_MAX];//массив
    printf("------\n");
    
    
    for (k=0;k<n;k++){
        m[k]=a+rand()%(b-a);
    }
    
    for (k=0;k<n;k++){
        printf("%d ",m[k]);
    }
    printf("\n");
    
    
    return 0;
}
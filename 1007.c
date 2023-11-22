#include <stdio.h>
#include <stdlib.h>

#define N_MAX 1000
#define M_MAX 1000
int main(){
    
    int a=-20, b=20; //границы элементов
    int n=8; //текущий размер
    int k;//счетчик
    
    int R[N_MAX];//массив
    printf("------\n");
    
    //генерация случайным образом
    for (k=0;k<n;k++){
        
        R[k]=a+rand()%(b-a);
        
    }
    	//Вывод на экран
    for (k=0;k<n;k++){
        
        printf("%d ", R[k]);
        
    }
    printf("\n");
    
    int S[M_MAX];//массив
    printf("------\n");
    
    for (k=0;k<n;k++){
        
        S[k]=R[k]+R[k];
        
    }
    
    	//Вывод на экран
    for (k=0;k<n;k++){
        
        printf("%d ", S[k]);
        
    }
    printf("\n");
    
    int c;
    c = 0;
    for (k=0;k<n;k++){
        if (R[k] < 0)
    {
        c = c + 1;
    }
    }
    if (R[k] < 0)
    {
        c = c + 1;
    }
    printf("%d", c);
    return 0;
}
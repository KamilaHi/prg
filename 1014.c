#include <stdio.h>
#include <stdlib.h>

#define N_MAX 1000
int main(){
    
    int a=-10, b=10; //границы элементов
    int n=12; //текущий размер
    int k;//счетчик
    
    int R[N_MAX];//массив
    printf("------\n");
    
    //генерация случайным образом
    for (k=0;k<n;k++){
        
        R[k]=a+rand()%(b-a);
        
    }
    R[2]=0;
    R[5]=0;
    	//Вывод на экран
    for (k=0;k<n;k++){
        
        printf("%d ", R[k]);
        
    }
    printf("\n");
    int f, h;
    f=n;
    h=0;
    while (h<n){
        if (R[h]==0){
            for (k=h; k<n-1; k++){
                R[k]=R[k+1];
            }
            f=f-1;
        }
        else{
            h++;
        }
    }
    for (k=0;k<f;k++){
        
        printf("%d ", R[k]);
        
    }
    
    
    return 0;
}
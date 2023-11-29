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
    R[9]=100;
    	//Вывод на экран
    for (k=0;k<n;k++){
        
        printf("%d ", R[k]);
        
    }
    printf("\n");
    int flag, c, h;
    flag=-1;
    c=0;
    h=0;
    while (flag==-1 && h<n){
        if (R[h]==100){
            flag=h;
        }
        else{
            c=c+R[h];
            h++;
        }
    }
    printf("%d", flag);
    printf("\n%d", c);
    
    return 0;
}
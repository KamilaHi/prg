#include <stdio.h>
#include <stdlib.h>

#define N_MAX 1000

int main(){
    
    int a=-20, b=40; //границы элементов
    int n=10; //текущий размер
    int k;//счетчик
    
    int F[N_MAX];//массив
    printf("------\n");
    
    //генерация случайным образом
    for (k=0;k<n;k++){
        
        F[k]=a+rand()%(b-a);
        
    }
    
	//Вывод на экран
    for (k=0;k<n;k++){
        
        printf("%d ", F[k]);
        
    }
    printf("\n");
    
    int sum;
    int count;
    sum = 0;
    count = 0;
    for (k = 0; k < n; k++)
    {
        if (F[k] != 33)
        {
            sum = sum + F[k];
			
        }
        else
        {
            count=count + 1;
        }
    }
	
   printf("sum= %d\n", sum);
   printf("count=%d", count);
    
    return 0;
}
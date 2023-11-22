#include <stdio.h>
#include <stdlib.h>

#define N_MAX 1000

int main(){
    
    int a=-20, b=30; //границы элементов
    int n=12; //текущий размер
    int k,i;//счетчик
    
    int D[N_MAX];//массив
    printf("------\n");
    
    //генерация случайным образом
    for (k=0;k<n;k++){
        D[k]=a+rand()%(b-a);
    }
    
	//Вывод на экран
    for (k=0;k<n;k++){
        printf("%d ",D[k]);
    }
    printf("\n");
    
    int sum;
    sum=0;
    for (i = 0; i < n; i++)
    {
        if (D[i] > -10 && D[i] < 20)
        {
            sum = sum + D[i];
			
        }
    }
	
	for (i=0; i<n;i++){
		if (D[i]<0){
			D[i]=100;
		}
		
   }
   printf("s= %d\n", sum);
	//Вывод на экран
    for (k=0;k<n;k++){
        printf("%d ",D[k]);
    }
    printf("\n");
    
	
    return 0;
}
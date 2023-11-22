#include <stdio.h>
#include <stdlib.h>

#define N_MAX 1000

int main(){
    
    int a=-50, b=50; //границы элементов
    int n=10; //текущий размер
    int k;//счетчик
    
    int m[N_MAX];//массив
    printf("------\n");
    
    //генерация случайным образом
    for (k=0;k<n;k++){
        m[k]=a+rand()%(b-a);
    }
    
	//Вывод на экран
    for (k=0;k<n;k++){
        printf("%d ",m[k]);
    }
    printf("\n");
	
	
	int quantity=0;
	int sum=0;
	
	for (k=0;k<n;k++){
		sum=sum+m[k];
	}
	
	for (k=0;k<n;k++){
	    quantity=quantity+1;
	}
	
	float average=(float)sum/(1.0*quantity);
	
	printf("%f ",average);
    
    
    return 0;
}
#include <stdio.h>
#include <conio.h>
 
#define N 7
 
int main(){
    
    int A[N];
    int i;
    
    for (i = 0; i < N; i++)
    {
        printf("mas[%d] = ", i);
        scanf("%d", &A[i]);
    }
    for (i=0;i<N;i++){
            printf("%d ", A[i]);
    }
    printf("\n");
    
    int place, flag, p;
    place = 1;
    flag = 0;
    
    if (flag==0){
        for (i = 0; i < N; i++){
            if (A[i]==49){
                flag = 1;
            }
            else{
                place = place + 1;
            }
        }
    }
    
    else{
        
        p=place-1;
        A[0]=A[p];
        A[p]=A[0];
        
        printf("%d", place);
        printf("\n");
        
    }
    
    for (i=0;i<N;i++){
            
            printf("%d ", A[i]);
        }
    
    return 0;
}
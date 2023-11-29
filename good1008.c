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
    flag = -1;
    i=0;
    while (flag==-1 && i<N){
            if (A[i]==49){
                flag = i;
            }
            else{
               i++;
            }
        }
    if (flag>=0){
        p=A[flag];
        A[flag]=A[0];
        A[0]=p;
        
        printf("%d", flag);
        printf("\n");
     for (i=0;i<N;i++){
            
            printf("%d ", A[i]);
        }
    }
    else {
        printf("no\n"); 
    }
        
   
    
    return 0;
}
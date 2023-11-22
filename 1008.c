#include <stdio.h>
#include <conio.h>
 
#define N 7
 
int main()
{
    int A[N];
    int i;
    
    for (i = 0; i < N; i++)
    {
        printf("mas[%d] = ", i);
        scanf("%d", &A[i]);
    }
    int place, flag;
    place = 1;
    flag = 0;
    if (flag==0){
        for (i = 0; i < N; i++)
    {
        if (A[i]==49){
            flag = 1;
        }
        else{
            place = place + 1;
        }
        
    }
    
    }
    
    printf("%d", place);
    
    
    return 0;
}
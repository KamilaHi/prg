#include <stdio.h>
#include <conio.h>
 
#define N 7
 
int main()
{
    int mas[N];
    int i;
    
    for (i = 0; i < N; i++)
    {
        printf("mas[%d] = ", i);
        scanf("%d", &mas[i]);
    }
    getch();
    
    int c;
    c=0;
    
    for (i = 0; i < N; i=i+2){
        c = c + mas[i];
    }
    printf("%d", c);
    return 0;
}
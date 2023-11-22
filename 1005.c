#include <stdio.h>
#include <conio.h>
 
#define N 10
 
int main()
{
    int D[N];
    int i;
    
    for (i = 0; i < N; i++)
    {
        printf("mas[%d] = ", i);
        scanf("%d", &D[i]);
    }
    getch();
    
    int c;
    c=0;
    
    for (i = 0; i < N; i++);
    {
        for (D[i] > 0; D[i] < 20; i < N);
        {
            c = c + D[i];
        }
        for (D[i] > -10; D[i] < 0; i < N);
        {
            c = c + 100;
        }
    }
    printf("%d", c);
    return 0;
}
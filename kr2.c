#include <stdio.h>

int sum_digit(int n){
	int s;
	s=0;
	while (n>0){
		s=s+n%10;
		n=n/10;
		
	}
	return s;
}

void get_divisors(int n){
	int k;
	for(k=1;k<n/2; k++){
		if (n%k==0){
			printf("%d ", k);
		}
	}
	printf("\n");
}
 
int main()
{
    int num;
   
    printf("num = ");
    scanf("%d", &num);
	
	printf("1. Сумма цифр= %d\n", sum_digit(num));
    printf("5. Все делители числа\n");
	get_divisors(num);
    return 0;
}
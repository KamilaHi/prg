# include<stdio.h>
# include<math.h>
int main() {
float x = 0;
float y = 0;
float z = 0;
printf("x=");
scanf("%f",&x);
printf("y=");
scanf("%f", &y);
z= sqrt(x*x+y*y);
printf("hypot=%f",z);
return 0;
}
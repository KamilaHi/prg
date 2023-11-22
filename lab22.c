#include <stdio.h>
int main() {
int a,b,c,zmax,nmax = 0;



scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);

if(a>b){zmax=a;}
else {zmax=b;}


if(zmax<c){nmax=c;}
else{nmax=zmax;}

printf("nmax%d",nmax);

return 0;
}






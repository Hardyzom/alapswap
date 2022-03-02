#include <stdio.h>

int main(){

int a = 5;
int b = 7;

printf("a erteke: %d\n",a);
printf("b erteke: %d\n",b);

int seged=a;
a=b;
b=seged;




printf("a erteke: %d\n",a);
printf("b erteke: %d\n",b);

return 0;

}
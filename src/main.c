#include"stdio.h"

#include"mymalloc.h"


int main(){

int *ptr = (int*)mymalloc(sizeof(int));
*ptr=10;
printf("%d\n",*ptr);
return 0;



}
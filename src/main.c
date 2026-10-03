#include"stdio.h"

#include"mymalloc.h"


int main(){

int *ptr = (int*)mymalloc(sizeof(int));
if(ptr==NULL){
printf("malloc failed\n");
return -1;
}

*ptr=10;
printf("%d\n",*ptr);
return 0;



}
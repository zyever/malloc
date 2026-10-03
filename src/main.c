#include"stdio.h"

#include"mymalloc.h"


int main(){

int *ptr = (int*)mymalloc(sizeof(int));
if(ptr==NULL){
printf("malloc failed\n");
return -1;
}
metadata *meta = (metadata*)ptr-1;
printf("size: %zu, free: %d\n",meta->size,meta->free);




myfree(ptr);
printf("after free size: %zu, free: %d\n",meta->size,meta->free);
return 0;



}
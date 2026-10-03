#include"stdlib.h"
#include"stdio.h"
   #include <unistd.h>

       int brk(void *addr);
       void *sbrk(intptr_t increment);

void *mymalloc(size_t size){
void *ptr = NULL;
if(size == 0){
return NULL;    }
ptr = sbrk(size);
if(ptr==(void*)-1){
return NULL;

}

return ptr;
}
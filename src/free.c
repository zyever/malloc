#include"stdio.h"
#include"mymalloc.h"
void myfree(void *ptr){
   
if(ptr==NULL){
return; }

metadata *meta=(metadata*)ptr-1;
 
meta->free=1;

   



}
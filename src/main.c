#include"stdio.h"

#include"mymalloc.h"


int main(){
 void *p1 = mymalloc(10);
 void *p2 = mymalloc(20);
 void *p3 = mymalloc(30);




if(p1==NULL||p2==NULL||p3==NULL){
printf("malloc failed\n");
return -1;
}






myfree(p1);
myfree(p2);
myfree(p3);
return 0;



}
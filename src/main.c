#include"stdio.h"

#include"mymalloc.h"


int main(){
 void *p1 = mymalloc(10);
 void *p2 = mymalloc(20);
 if(p1==NULL||p2==NULL){
printf("malloc failed\n");
return -1;
}
printf("p1:%p\n", p1);
 myfree(p1);
 void *p3 = mymalloc(5);
printf("p3:%p\n", p3);
    if(p3==NULL){
printf("malloc failed\n");
return -1;
}







myfree(p3);
return 0;



}
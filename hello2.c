// https://youtu.be/zuegQmMdy8M?si=S6ARQVSJWf_k6X8F
// Pointers in C / C++ [Full Course]
// freeCodeCamp.org. stop 



#include <stdio.h>

int main(){

    printf("hello world 2B\n");
    int a = 1025;
    unsigned *p;
    p = &a;
    printf("size of integer is %u bytes\n",sizeof(int));
    printf("address = %d, value = %d\n",p,*p);
    p += 1;
    printf("address = %d, value = %d\n",p,*p);
    return 0;
}
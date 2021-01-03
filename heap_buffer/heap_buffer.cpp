//heap_buffer.cpp
#include<stdlib.h>
#include<stdio.h>
int main() 
{
    int size = 10;
    char *chs = (char *)malloc(size);
    printf("%p, %d, size: %d, meta: %d\n", chs, chs[size+1], size, *(long *)(chs - 8));

    return 0;
}

#include<iostream>
using namespace std;
int main ()
{
   void *heap_start = malloc(10);
   printf("%p:%ld:cap %d\n", heap_start, sizeof(heap_start), *((long *)heap_start - 1));
   free(heap_start);

   heap_start = malloc(20);
   printf("%p:%ld:cap %d\n", heap_start, sizeof(heap_start), *((long *)heap_start - 1));
   free(heap_start);

   heap_start = malloc(30);
   printf("%p:%ld:cap %d\n", heap_start, sizeof(heap_start), *((long *)heap_start - 1));
   free(heap_start);

   heap_start = malloc(40);
   printf("%p:%ld:cap %d\n", heap_start, sizeof(heap_start), *((long *)heap_start - 1));
   free(heap_start);

   heap_start = malloc(50);
   printf("%p:%ld:cap %d\n", heap_start, sizeof(heap_start), *((long *)heap_start - 1));
   free(heap_start);

   heap_start = malloc(66);
   printf("%p:%ld:cap %d\n", heap_start, sizeof(heap_start), *((long *)heap_start - 1));
   free(heap_start);
   free(heap_start);
   return 0;
}
/*
0x7fa892400b90:8:cap 0
0x7fa892400f00:8:cap 0
0x7fa892400f00:8:cap 0
0x7fa892400f20:8:cap 1762337174
0x7fa892400f50:8:cap 0
0x7fa892400f00:8:cap 0
a.out(809,0x10aeab5c0) malloc: *** error for object 0x7fa892400f00: pointer being freed was not allocated
a.out(809,0x10aeab5c0) malloc: *** set a breakpoint in malloc_error_break to debug
Abort trap: 6
*/
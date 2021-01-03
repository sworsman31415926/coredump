#include <iostream>       // std::cout
#include <unistd.h>
#include <unordered_map>
#include <cstdio>
#include <stdlib.h>
#define factor 1024
class DC 
{
    public:
    char array[10];
    char onek[factor];
    char fill[0x1000*factor];
    std::unordered_map<int, int> hash_map;
    int level_1(int a) {
        auto it = hash_map.find(a);
        if (it != hash_map.end()) {
            std::cout << "not find" << std::endl;
        } else {
            std::cout << "found" << std::endl;
        }
        return 0;
    }
};

int main ()
{
    int a;
    char *chs = (char *)malloc(1024);
    DC *dcp = nullptr;
    printf("adress:  a@ %p, chs@ %p, dcp@ %p, &array[0]@ %p, hash_map@ %p\n", &a, chs, dcp, &(dcp->array[0]), &(dcp->hash_map));// ok
    printf("array[0]:%p\n", dcp->array[0]); //crash will happen.
    dcp->level_1(0);//crash will happen
    return 0;
}
/*
adress:  a@ 0x7ffee7464ac8, chs@ 0x7ffb36801000, dcp@ 0x0, &array[0]@ 0x0, hash_map@ 0x400410
Segmentation fault: 11

*/

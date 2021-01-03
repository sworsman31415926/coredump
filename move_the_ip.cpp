#include<iostream>
using namespace std;
long *ip_address = 0;
void modify_ip(long a) 
{
    ip_address = (long *)((long)&a + 16);//这一句是在寻找存放rip值的栈地址
    *ip_address = 0x4006be;//这一句是给rip赋值，给对应的rip赋值成一个非法指令。Q：我是如何知道这个地址对应非法指令的？
}

int main(void)
{
    modify_ip(0);
    return 0;
}
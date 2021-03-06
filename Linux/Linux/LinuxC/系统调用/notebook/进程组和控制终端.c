#include <stdio.h>
#include <stdlib.h>

/*
   当在shell中执行一个程序，创建了几个子进程时，键盘的一个ctrl-c命令就能终止程序和它的子进程，并返回到shell。这种特性依赖于以下几点：
   每个进程除了有一个唯一的PID外，它还是一个“进程组”的成员。一个进程组可以有好几个成员。当进程复制时，子进程从它的父进程继承进程组。进程也可以使用setpgid（）设置自己的进程组。当进程执行exec()时，所属进程组不会发生改变。
   每个进程可以有一个关联的控制终端。这一般是进程启动的终端。当进程复制时，子进程从父进程继承终端。当进程执行exec()时，它的控制终端不变。
   每个终端可以关联一个控制进程。当检测到元字符（如ctrl-c）时，终端发送适当的信号给它的控制进程所在的进程组的所有进程
 */


int main(int argc, char* argv[])
{
    return 0;
}

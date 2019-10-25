#include <stdio.h>
int main(int argc, const char **argv, const char **envp) 
{
    int x = 3;
    int y = 5;
    int z = 0;
    z = (x*y) - ((x + (x >> 31)) >> 1);
    printf("%d", z);
    return 0;
}
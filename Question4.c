#include <stdio.h>
int main(int argc, const char **argv, const char **envp) 
{
    int var_19c = -412;
    int x[] = {7, 100,0};
    while(x[2]<=x[1])
    {
        x[x[2]] = x[2] + 1;
        x[2]++;
    }
    var_19c = proc1(var_19c, x[0], x[1]);
    printf("%d",var_19c);
    return 0;
}
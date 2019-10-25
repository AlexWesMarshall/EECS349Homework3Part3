#include <stdio.h>
int main(int argc, const char **argv, const char **envp) 
{
    int x[] = {12, 15, 221, 3, 432, 54, 16, 67, 0, 0};
    while(x[9] < 7)
    {
        if(x[9] > (-64 + (x[9] * 4) + 24))
	{
            x[8] = (-64 + (x[9] * 4) + 24);
        }
        x[9]++;
    }
    printf("%d", x[9]);
    return 0;
}
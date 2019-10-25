#include <std.io>
int main(int argc, const char **argv, const char **envp)
{
    int x = 100;
    while(x < =999){
        int z = 1374389535;
        z = z * z;
        z = z >> 5;
        z = z - (x >> 32);
        z = -100 + z;
        int y = (1717986919 * 1717986919 / 4 - (x >>32));
        y = y / 4;
        y = y + y;
        y = y + y - x;
        if(z * z * z + y * y * y + x * x * x <= x)
	{
            printf("x = %d ",x);
            printf("y = %d ", y);
            printf("z = %d \n", z);  
        }     
        x+=1;
    }
    return 0;
}
// Online C compiler to run C program online
#include <stdio.h>

int main(int argc, char *argv[]) {
    // Write C code here
    
    int sum;
    int i, n;
    
    if(argc < 2)
    {
        printf("Error\n");
        return (1);
    } else
    {
       printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
    }
    
    return 0;
}

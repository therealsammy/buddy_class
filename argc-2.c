// Online C compiler to run C program online
#include <stdio.h>

int main(int argc, char *argv[]) {
    // Write C code here
    
    int i;
    
    for(i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }

    return 0;
}

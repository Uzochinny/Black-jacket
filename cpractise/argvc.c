#include <stdio.h>

int main(int argc, char *argv[]) {
    int i;
    
    printf("The program name is %s\n", argv[0]);
    
    for (i = 1; i < argc; i++) {
        printf("Argument %d is %s\n", i, argv[i]);
    }
    
    return 0;
}


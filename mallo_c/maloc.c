#include <stdio.h>
#include <stdlib.h>

int main() {
   char *name; // declare a pointer to a char variable
   name = (char *) malloc(20 * sizeof(char)); // ask the computer for 20 bytes of memory

   printf("What is your name? ");
   scanf("%s", name); // read the user's name and store it in the memory allocated by malloc

   printf("Hello, %s!\n", name); // print out the user's name

   free(name); // tell the computer that you no longer need the memory allocated by malloc
   return 0;
}


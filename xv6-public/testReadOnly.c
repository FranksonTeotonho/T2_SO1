//As a simple sanity test, write a user program that tries to violate the new protection.
//In order to do so, try and rewrite program commands.
//Remember that the name of a function in C is actually a pointer.
//More specifically, the variable main is just a pointer
//to the location of the beginning of the code of function main.
//Use main as a pointer and try to read and write new values to that location.
//Before your change both of these operations should execute well.
//After adding protection, reading the code of main should work, while writing over it should cause an error.

#include "types.h"
#include "stat.h"
#include "user.h"

int
main(void)
{
    int* ptr;
    ptr =(int*)main;

        printf(1,"Leitura Antes: %x\n",ptr[0]);

        ptr[0] = 0x0;
        printf(1,"Leitura Depois: %x\n",ptr[0]);

    exit();
}

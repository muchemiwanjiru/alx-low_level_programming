julien@ubuntu:~/0x07$ cat 100-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s0 = "Bob Dylan";
    char *s1 = "Robert Allen";

    printf("%s, %s\n", s0, s1);
    set_string(&s1, s0);
    printf("%s, %s\n", s0, s1);
    return (0);
}
julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-set_string.c -o 100-set_string
julien@ubuntu:~/0x07$ ./100-set_string 
Bob Dylan, Robert Allen
Bob Dylan, Bob Dylan
julien@ubuntu:~/0x07$ 

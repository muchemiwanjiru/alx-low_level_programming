#include "main.h"

int main(void) {
    char *str = "Hello, world!\n";
    for (int i = 0; str[i] != '\0'; i++) {
        _putchar(str[i]);
    }
    
    int len = _strlen(str);
    _putchar('0' + len);
    _putchar('\n');
    
    return (0);
}







    



    



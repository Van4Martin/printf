#include "main.h"

/**


*/

int _print_string(char *str)

{
    int i;
    int count = 0;

    for (i = 0; str[i] != '\0'; i++){
        putchar(str[i]);
        count++;

    }

    return(count);
}

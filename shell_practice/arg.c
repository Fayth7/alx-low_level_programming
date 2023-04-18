#include <stdio.h>

int main(char **argv)
{
        while (*argv != NULL)
      {
        printf("%s\n", *argv);
        argv++;
    }
    return 0;
}

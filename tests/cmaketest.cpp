#include <stdio.h>
#include "op.h"

int main(int argc, char **argv)
{
    int result;

    result = add(7, 7);
    printf("Result =======> 7 + 7 = %d\n", result);

    result = add(1, 7);
    printf("Result =======> 1 + 7 = %d\n", result);

    result = add(2, 7);
    printf("Result =======> 2 + 7 = %d\n", result);

    result = add(3, 7);
    printf("Result =======> 3 + 7 = %d\n", result);

    return 0;
}

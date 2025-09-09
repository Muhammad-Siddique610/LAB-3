#include <stdio.h>

main()
{
    int variable1 = 24;
    int variable2 = 30;

    printf("Initially the numbers are %d and %d\n",variable1 , variable2);

    int tempVar = variable1;
    variable1 = variable2;
    variable2 = tempVar;
    tempVar = 0;

    printf("Finally the numbers are %d and %d\n",variable1 , variable2);

}
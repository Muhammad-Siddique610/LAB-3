#include <stdio.h>

int main()
{
    int variable1 = 24;
    int variable2 = 30;
    
	printf("The Numbers initially are %d and %d\n",variable1, variable2 );
	
	variable1 = variable1 + variable2;
	variable2 = variable1-variable2;
	variable1 = variable1-variable2;
	
    
    printf("The Numbers are swapped %d and %d\n", variable1, variable2 );
}



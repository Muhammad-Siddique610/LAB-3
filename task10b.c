#include <stdio.h>

int main()
{
    int a = 24;
    int b = 30;
    
	printf("The Numbers initially are %d and %d\n",a, b );
	
	a = a+b;
	b = a-b;
	a = a-b;
	
    
    printf("The Numbers are swapped %d and %d\n", a, b );
}

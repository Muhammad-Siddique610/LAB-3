#include <stdio.h>

main()
{
    int length;
    int width;
    
    printf("What's the length of the rectangle? ");
    scanf("%d",&length);
    printf("What's the width of the rectangle? ");
    scanf("%d",&width);
    
    printf("The area of the rectangle is %d\n",length*width);
    printf("The perimeter of the rectangle is %d\n", length + length + width + width);
}

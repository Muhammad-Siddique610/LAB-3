#include <stdio.h>

main()
{
    int markSub1;
    int markSub2;
    int markSub3;
    printf("Enter the marks obtained in Subject1 out of 100? ");
    scanf("%d",&markSub1);
    printf("Enter the marks obtained in Subject2 out of 100? ");
    scanf("%d",&markSub2);
    printf("Enter the marks obtained in Subject3 out of 100? ");
    scanf("%d",&markSub3);

    int percent = (markSub1+markSub2+markSub3)*100/300;
    printf("The Percentage Obtained is %d",percent);
}

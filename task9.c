#include<stdio.h>

main()
{
    char userName[18];
    int userAge;
    printf("What is Your Name? ");
    scanf("%s",userName);
    printf("What is your age? ");
    scanf("%d",&userAge);

    printf("Your name is \"%s\" \tAnd\t your age is \'%d\' \n  \a",userName , userAge);
}

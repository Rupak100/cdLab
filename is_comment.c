
// WAP to identify whether a given line is a comment or not
#include <stdio.h>
main()
{
    char com[30];
    int i = 2, a = 0;
    printf("\nEnter comment : ");
    gets(com);
    if (com[0] == '/')
    {
        if (com[1] == '/')
            printf("\nIt is a comment");
        else if (com[1] == '*')
        {
            for (i = 2; i <= 30; i++)
                if (com[i] == '*' && com[i + 1] == '/')
                {
                    printf("\nIt is a comment");
                    a = 1;
                    break;
                }
                else
                    continue;
            if (a == 0)
                printf("\nIt is not a comment");
        }
        else
            printf("\nIt is not a comment");
    }
    else
        printf("\nIt is not a comment");
}

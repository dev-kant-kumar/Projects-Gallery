#include <stdio.h>

void voting();

int main(int argc, char *argv[])
{
    printf("value of argc is %d \n", argc);

    for (int i = 0; i < argc; i++)
    {
        printf("Value of argv is %s \n", argv[i]);
    }

    // voting();
    return 0;
}

void voting()
{
    char candidate1[] = "Dev";
    char candidate2[] = "XYZ";
    int vote, v1 = 0, v2 = 0, u = 7, n;

    // v1 and v2 holds vote count and
    // u is used for loop variable
    // n is used to store status of input for vote
b:
    while (u > 5)
    {
        printf("\n\n");
        printf("     \033[1;46m  Wel Come to Voting System \033[0m\n\n");
        printf("\033[1;33mCandidates \t\t\tVotes\033[0m\n");
        printf("\033[5;34m1 - %-30s %d\033[0m\n", candidate1, v1);
        printf("\033[5;34m2 - %-30s %d\033[0m\n", candidate2, v2);
        printf("\n\n");
        printf("Enter 1 or 2 to vote for your representative \n");

    a:
        printf("\033[1;32mVote : \033[0m");
        n = scanf("%d", &vote);

        if (n != 1)
        {
            printf("\033[5;31mInvalid Input! Only no are allowed \033\n[0m");
            scanf("%*s"); // this line is clearing the buffer so that no invalid input remain in buffer
            goto a;
        }
        else
        {
            switch (vote)
            {
            case 1:
                v1++;
                break;
            case 2:
                v2++;
                break;
            default:
                printf("\033[5;31mInvalid option entered. Please enter 1 or 2 \n\033[0m");
                goto a;
            }
            printf("\033[H\033[J");
            goto b;
        }
    }
}

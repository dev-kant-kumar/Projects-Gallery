#include<stdio.h>

void voting();

int main() {
    voting();
    return 0;
}

void voting() {
    char candidate1[] = "Dev Kant Kumar";
    char candidate2[] = "XYZ           ";
    int vote, v1 = 0, v2 = 0, u = 7;
    b:
    while (u > 5) {
        printf("\n\n");
        printf("     \033[1;46mWel Come to Voting System \033[0m\n\n");
        printf("\033[1;33mCandidates \t\t\tVotes\033[0m\n");
        printf("\033[5;34m1 - %s \t\t %d\033[0m\n", candidate1, v1);
        printf("\033[5;34m2 - %s \t\t %d\033[0m\n", candidate2, v2);
        printf("\n\n");
        printf("Enter 1 or 2 to vote for your representative \n");

        a:
        printf("\033[1;32mVote : \033[0m");
        scanf("%d", &vote);

        switch (vote) {
            case 1:
                v1++;
                break;
            case 2:
                v2++;
                break;
            default:
                printf("Invalid option entered. Please enter 1 or 2.\n");
                goto a;
        }
        printf("\033[H\033[J");
        goto b;
    }
}

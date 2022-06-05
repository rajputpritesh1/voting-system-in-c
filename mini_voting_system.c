#include <stdio.h>
#include<conio.h>
int main()
{
    int funtion, age, vote;
    char name[25];
    printf("<== Mini Voting System ===>\n\n");
    printf("Enter 1 To Check Eligibity For Vote\nEnter 0 To Exit\n\n");
    scanf("%d", &funtion);

    switch (funtion)
    {
    case 1:
        printf("<== Check Eligibity For Vote ==>\n\n");
        printf("Enter Your Age \n:=>");
        scanf("%d", &age);

        if (age >= 18)
        {
            printf("<== You Are Eligible For Vote ==>\n\n");
            printf("Enter Your Name \n:=>");
            scanf("%s", &name);
            printf("<== VOTE YOUR CANDIDATE ==> \n\n");
            printf("\n\n1.BJP\n2.TMC\n3.AAP\n4.RJD\n5.NOTA\n:=> ");
            scanf("%d", &vote);
            switch (vote)
            {
            case 1:
                printf("%s YOUR VOTE GOES TO BJP\n\n", name);
                break;
            case 2:
                printf("%s YOUR VOTE GOES TO TMC\n\n", name);
                break;
            case 3:
                printf("%s YOUR VOTE GOES TO AAP\n\n", name);
                break;
            case 4:
                printf("%s YOUR VOTE GOES TO RJD\n\n", name);
                break;
            case 5:
                printf("%s YOUR VOTE GOES TO NOTA\n\n", name);
                break;
            
            default:
                printf("%s Invalid Selection!!!\n", name);
                break;
            }
            printf("<== Thanks For Using ==>\n");
        }
        else
        {
            printf("Sorry You Are Not Eligible\n\n");
        }
        
        break;
    case 0:
        return 0;
        break;

    default:
        printf("Invalid Selection!!!\n");
        main();
        break;
    }

    getch();
}
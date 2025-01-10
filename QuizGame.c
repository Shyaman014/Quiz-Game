#include<stdio.h>
int main()
{
    int i;
    int ans1, ans2, ans3, ans4, ans5;
    int point1 = 0, point2 = 0, point3 = 0, point4 = 0, point5 = 0;
    int totalScore = 0;

    printf("    Welcome to the game \n\n");

    printf(">Press 1 to Start the game\n");
    printf(">Press 0 to quit the game ");

    scanf("%d", &i);

    if (i == 1)
    {
        printf("The game has Started\n\n");
    }
    else if (i == 0)
    {
        printf("The game has ended\n\n");
    }
    else
    {
        printf("Invalid\n\n");
    }

    if (i == 1)
    {
        printf("1) Which one is the first search engine in internet?\n\n");
        printf("1. Google\n\n");
        printf("2. Archie\n\n");
        printf("3. Wais\n\n");
        printf("4. Altavista\n\n");

        printf("Enter Your answer: ");
        scanf("%d", &ans1);

        if (ans1 == 2)
        {
            printf("Correct answer\n\n");
            point1 = 5;
            printf("You have scored %d point\n", point1);
        }
        else
        {
            printf("Wrong answer\n\n");
            printf("You have scored 0 point\n");
        }

        printf("2) Which one is the first web browser invented in 1990?\n\n");
        printf("1. Internet\n\n");
        printf("2. Mosaic\n\n");
        printf("3. Mozilla\n\n");
        printf("4. Nexus\n\n");

        printf("Enter your choice: ");
        scanf("%d", &ans2);

        if (ans2 == 4)
        {
            printf("Correct answer\n\n");
            point2 = 5;
            printf("You have scored %d point\n", point2);
        }
        else
        {
            printf("Wrong answer\n\n");
            printf("You have scored 0 point\n");
        }

        printf("3) First Computer virus is known as?\n\n");
        printf("1. Rabbit\n\n");
        printf("2. Creeper Virus\n\n");
        printf("3. Elk Cloner\n\n");
        printf("4. SCA Virus\n\n");

        printf("Enter your choice: ");
        scanf("%d", &ans3);

        if (ans3 == 2)
        {
            printf("Correct answer\n\n");
            point3 = 5;
            printf("You have scored %d point\n\n", point3);
        }
        else
        {
            printf("Wrong choice\n\n");
            printf("You have scored 0 point\n\n");
        }

        printf("4) Firewall in a computer used for\n\n");
        printf("1. Security\n\n");
        printf("2. Data Transmission\n\n");
        printf("3. Monitoring \n\n");
        printf("4. Authentication\n\n");

        printf("Enter your choice: ");
        scanf("%d", &ans4);

        if (ans4 == 1)
        {
            printf("Correct answer\n\n");
            point4 = 5;
            printf("You have scored %d point\n\n", point4);
        }
        else
        {
            printf("Wrong choice\n\n");
            printf("You have scored 0 point\n\n");
        }

        printf("5) Which of the following is not a database management software?\n\n");
        printf("1. MySQL\n\n");
        printf("2. Oracle\n\n");
        printf("3. Cobal\n\n");
        printf("4. Sybase\n\n");

        printf("Enter your choice: ");
        scanf("%d", &ans5);

        if (ans5 == 3)
        {
            printf("Correct answer\n\n");
            point5 = 5;
            printf("You have scored %d point\n\n", point5);
        }
        else
        {
            printf("Wrong answer\n\n");
            printf("You have scored 0 points\n\n");
        }

        // Calculate total score
        totalScore = point1 + point2 + point3 + point4 + point5;
        printf("Your total score is: %d points\n", totalScore);
    }
    return 0;
}

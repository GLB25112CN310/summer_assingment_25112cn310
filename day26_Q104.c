#include <stdio.h>
int main()
{
    int answer, score = 0;
    printf("Q1. Capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    scanf("%d", &answer);
    if(answer == 2)
        score++;

    printf("Q2. 5 + 3 = ?\n");
    printf("1. 6\n2. 7\n3. 8\n4. 9\n");
    scanf("%d", &answer);
    if(answer == 3)
        score++;

    printf("Q3. C language developed by?\n");
    printf("1. Dennis Ritchie\n2. Bjarne Stroustrup\n3. James Gosling\n4. Guido van Rossum\n");
    scanf("%d", &answer);
    if(answer == 1)
        score++;

    printf("Your Score = %d/3\n", score);
    return 0;
}
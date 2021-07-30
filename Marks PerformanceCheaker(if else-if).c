#include <stdio.h>
int main()
{
    int marks;
    printf("Enter ur Total Marks: \n");
    scanf("%d",&marks);
    if (marks>=90)
    printf("well Done! You Did An Exellent JOB!");
    else if (marks>=80)
        printf("Good Job!");
    else if (marks>=70)
        printf("Fair Work");
    else if (marks>=60)
        printf("Pass");
    else
        printf("Fail");
        return 0;
}

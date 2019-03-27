#include<stdio.h>

//use if statement to calculate students' grade;
int main()
{
    int grade = 0;	
    scanf("%d",grade);//forget "&"
    if(grade <= 100 && grade >= 90)
    {
        printf("A");
    }
    else if(grade >= 80)
    {
        printf("B");
    }
    else if(grade >= 70)
    {
        printf("C");
    }
    else if(grade >= 60)
    {
        printf("D");
    }
    else if(grade < 60 && grade >= 0)
    {
        printf("E");
    }
    else
    {
        printf("Please give me a right score!");
    }

    return 0;
}

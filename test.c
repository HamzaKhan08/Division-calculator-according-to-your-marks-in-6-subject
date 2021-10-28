#include <stdio.h>
int main()
{
    int m1, m2, m3, m4, m5, m6, per;
    printf("Enter marks in six subjects");
    scanf("%d%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5, &m6);
    per = (m1 + m2 + m3 + m4 + m5 + m6) * 100 / 600;
    if (per >= 80)
        printf("First Division\n");
    else
    {
        if (per >= 70)
            printf("Second division\n");
        else
        {
            if (per >= 50)
                printf("Third division\n");
        else
        {
            if(per>=35)
            printf("Fourth division\n");
        else
        printf("Fail\n");
        }    
        }
    }
    return 0;
}
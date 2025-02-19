#include<stdio.h>
int main()
{
    int year;
    int *p_year;
    p_year=&year;

    *p_year=2024;
    if(*p_year %4==0 && *p_year % 100!=0 || *p_year %400==0)
    {
        printf("the year is leapyear=%d\n",*p_year);
    }
    else{
        printf("the year is not leapyear =%d\n",*p_year);
    }
    return 0;
}

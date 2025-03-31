#include<stdio.h>
int main()
{
    int a,b;
    int *p=&a,*q=&b;
    *p=5;
    *q=9;
    if(*p<*q)
    {
        printf("the manmium number is =%d\n",*p);
    }
    else{
        printf("the manmimum number is=%d\n",*q);

    }
    return 0;

}

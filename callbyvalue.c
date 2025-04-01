//write acprogrammer two interger number swap
#include<stdio.h>
void sawp(int x,int y);
int main()
{
    int a=12,b=20;
    sawp(a,b);
    return 0;
}
void sawp(int x,int y)
{
    int t;
    t=x;
    x=y;
    y=t;
    printf("x=%d\ny=%d\n",x,y);
}

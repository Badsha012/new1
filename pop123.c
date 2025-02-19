#include<stdio.h>

int sum_avg(int x,int y,int z);
int main()
{
    int a,b,c;
    float q;
    scanf("%d%d%d",&a,&b,&c);
    q=sum_avg(a,b,c);
    printf("average number=%.2f\n",q);
    return 0;
}
int sum_avg(int x,int y,int z)
{
    float r;
    r=(x+y+z)/3;
    return (r);
}

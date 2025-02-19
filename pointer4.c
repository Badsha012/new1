#include<stdio.h>
void min_number(int *x,int *y,int *z);
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);//

    min_number(&a,&b,&c);



    return 0;

}
void min_number(int *x,int *y,int *z)
{
    if(*x<*y && *x<*z)
    {

        printf("the minemimum number=%d\n",*x);
    }
    else if(*y<*x && *y<*z)
    {
        printf("the minemimum number =%d\n",*y);
    }
    else{
        printf("the minemimum number=%d\n",*z);
    }
}

#include<stdio.h>
void factorize(int n,int i);
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    factorize(num, 2);
    return 0;

}

void factorize(int n,int i)
{
    if(i<=n)
    {
        if(n%i==0)
        {
            printf("%d",i);
            n=n/i;

        }
        else
            i++;
        factorize(n,i);
    }
}

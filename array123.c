#include<stdio.h>
int main()
{
    int num[]={1,2,3,4,5,6,7,8,9,12};
    int n,i,count;
    printf("\nenter an element to search:");
    scanf("%d",&n);
    count=0;
    for(i=0;i<=9;i++)
    {
        if(num[i]==n)
            count++;
    }
    printf("number %d is found %d time(s) in the arry\n",n,count);
    return 0;
}

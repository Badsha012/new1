#include<stdio.h>
int main()
{
    int x[100],i,n,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&x[i]);
        sum=sum+x[i];
        printf("%d",sum);
        
    }
}
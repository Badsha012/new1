#include<stdio.h>
int main(){
    int i,a[10],n,k;
    printf("Enter the how many element:");
    scanf("%d",&n);
    printf("Enter the element:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        }

    
    printf("Enter the insert position:\n");
    scanf("%d",&k);
    for(i= n;i>=k;i--){

        a[i+1]=a[i];
        printf("Enter the insert value:\n");
        scanf("%d",&a[k]);
        n++;
    }
    printf("Array element after insertation:\n");
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    
    return 0;
}
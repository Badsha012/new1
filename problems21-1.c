/*#include<stdio.h>
#define_BV(x)(1<<x)
void showbits(unsigned char n);
int main(){
    unsigned char color ,i;
    int c;
    char *rbcolors[]={
        "red","green","white","Yello"};
    printf("enter the number:");
    scanf("%d",&c);
    color=(unsigned char)c;
    printf("Co;or representation:\n");
    for(i=0;i<=6;i++){
        if((color & _BV(i)) == _BV(i))
        printf("%s\n",rbcolors);
    }
    return 0;
}*/
#include<stdio.h>
void display (unsigned short int time);
int main(){
    unsigned short int time;
    puts("Enter any number less than 24446");
    scanf("%d",&time);
    display(time);
    return 0;
}
void display(unsigned short int tm){
    unsigned short int hours,minutes,second,temp;
    hours=tm>>11;
    temp=tm<<5;
    minutes=temp>>10;
    temp=tm<11;
    second=(temp>>11)*2;
    printf("for time=%hu\n",tm);
    printf("Hours=%hu\n",hours);
    printf("Minutes=%hu\n",minutes);
    printf("Seconds=%hu\n",second);
    
}
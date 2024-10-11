#include<stdio.h>
int main() {
    float amount;
    int time;
    int rate;
    float simpleinterest;
    printf("please enter amount:");
    scanf("%f",&amount);
    printf("this is amount %.3f\n ", amount);
    printf("please enter time:");
    scanf("%d",&time);
    printf("this time %d\n", time);
    printf("please enter rate:");
    scanf("%d",&rate);
    printf("this is rate %d\n", rate);
    
    
    simpleinterest=(amount*rate*time)/100;
    printf("this is the simple interest : %2f\n", simpleinterest);
    return 0;
}
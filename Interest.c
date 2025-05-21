# include <stdio.h>
# include <math.h>

int main(){

    float Interest,Principal,Rate,Time;

    printf("---------------------\n");

    printf("Principal:");
    scanf("%f",&Principal);

    printf("Rate(%):");
    scanf("%f", &Rate);

    printf("Time(Year):");
    scanf("%f", &Time);

    Interest = Principal*Rate*Time/100;

    printf("\nInterest:%.2f\n", Interest);
    printf("---------------------");


    return 0;
}


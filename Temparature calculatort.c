# include <stdio.h>
# include <math.h>

int main(){

    // Introduction
    printf("------------------------------------\n");
    printf("  This is a Temperature calculator\n");
    printf("------------------------------------\n");

    int k,f,c, in, out;
    // Here we take the unit of input
    printf("In which unit you want to give input?\n");
    printf("[1] Kelvin\n");
    printf("[2] Farenheit\n");
    printf("[3] Celsius\n");
    printf("Ans:");

    printf("What is the temparature?\n");


    scanf ("%d",&in);

    printf("----------------------------\n");
    printf("How do you want the result?\n");
    printf("----------------------------\n");
    printf("[1] Kelvin\n");
    printf("[2] Farenheit\n");
    printf("[3] Celsius\n");

    scanf("%d",&out);

    if (in == out);
        printf("Ans is %d", in);

    else if (in == 2 && out == 3 ){
        printf("Enter (in Farenheit):");
        scanf("%d",&f);
        c = (f-32)*5/9;
        printf(" Ans(in celsius): %d", c);
    }

    else
        printf("ERROR!");




    return 0;
}

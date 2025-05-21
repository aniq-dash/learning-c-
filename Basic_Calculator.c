# include <stdio.h>
# include <math.h>

int main(){
    int op;
    float num1, num2, result;
    printf("Enter two numbers:\n"); // scans 2 number
    scanf("%f",&num1);
    scanf("%f",&num2);

    printf("Select a operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    scanf("%d",&op); // we get to know what the host wants to do

    if (op == 1){
        result= num1+num2;
        printf("Result is %f", result);
    }

    else if (op == 2){
        result= num1-num2;
        printf("Result is %f", result);
    }

    else if (op == 3){
        result= num1*num2;
        printf("Result is %f", result);
    }

    else if (op == 4){
        result= num1/num2;
        printf("Result is %f", result);
    }

    else
        printf("Input Error");


    getchar();
    return 0;
}

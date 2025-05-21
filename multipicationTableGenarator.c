# include <stdio.h>
# include <math.h>

int main(){
    int i, n;
    printf("Enter a number:");
    scanf("%d",&n);

    for(i=1; i<=100; i++){
       printf("%d * %d = %d\n", n, i, n*i);
    }

    return 0;
}

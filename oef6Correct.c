#include <stdio.h>
#include <math.h>



int factorial(int);

int main(void){

    double radians = 0.23;
    int n;
    double result = 0;  /* 0.2280 */
    for(n = 0; n < 10; n++){
        int numerator = pow(-1, n);
        double denominator = factorial((2 * n) + 1);
        double x = pow(radians, (2 * n) + 1);

        double res = (numerator/denominator) * x;
        result += res;
    }
    printf("%f\n", result);
    return 0;
}


int factorial(int n){
    if(n == 0){
        return 1;
    }
    return n * factorial(n - 1);

}

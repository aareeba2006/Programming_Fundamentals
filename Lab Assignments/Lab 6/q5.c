#include <stdio.h>

int main() {
    int n = 1;             // term counter
    double pi = 0.0;       // approximation of pi
    double term;           // current term

    printf("Terms\tApproximation of pi\n");
    
    while(1) {
        // calculate current term
        if(n % 2 == 1) {
            term = 4.0 / (2*n - 1);   // positive term
        } else {
            term = -4.0 / (2*n - 1);  // negative term
        }
        
        pi += term;    // add to cumulative sum
        
        printf("%d\t%.6f\n", n, pi);  // print approximation
        
        // check if we reached different levels of precision
        if(pi >= 3.14159) {
            printf("Reached 3.14159 at term %d\n", n);
            break;
        }

        n++;
    }

    return 0;
}
#include <stdio.h>
#include <math.h>

int main() {
    double x0;  
    double tol = 1e-6;  
    int max_iter = 100;  
    
    printf("Enter initial guess: ");
    scanf("%lf", &x0);
    
    double x1 = x0;  
    int iter = 0;  
    
    do {
        x1 = pow((10 - (3*x0*x0)), (1.0/5));
        printf("Iteration no. %d = %f\n", iter+1, x1);
        if (fabs(x1 - x0) < tol) {
            printf("Solution found: x = %f\n", x1);
            return 0;
        }
        
        x0 = x1;
        iter++;
    }while (iter < max_iter);
    
    printf("Failed to converge\n");
    return 0;
}

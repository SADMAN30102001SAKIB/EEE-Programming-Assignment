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
    
    while (iter < max_iter) {
        x1 = pow((10.0 - pow(x0, 5.0))/3.0, (1.0/2));
        if ((10.0 - pow(x0, 5.0)) < 0)
        {
            break;
        }
        
        printf("Iteration no. %d = %f\n", iter+1, x1);
        if (fabs(x1 - x0) < tol) {
            printf("Solution found: x = %f\n", x1);
            return 0;
        }
        
        x0 = x1;
        iter++;
    }
    
    printf("Failed to converge\n");
    return 0;
}

#include <stdio.h>
#include <math.h>
int main(){
    double A = -2;
    double dx;
    dx = (2 - A) / 10;
    int mark;
    mark = 1;
    double X;
    X = A + mark * dx;
    while (10e-6 <= fabs(A - X)) {
        if (sin(X) <= sin(A)) {}
        else {
            dx /= 10; //divide by ten again
            mark = -mark; //reverse
        }
        A = X;
        X = A + mark * dx;
    }
    auto xmin = X;
    printf("xmin = %lf\n", xmin);
    printf("f(%lf) = %lf\n",xmin, sin(xmin));
}


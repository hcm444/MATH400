#include <stdio.h>
#include <math.h>
int main(){
    double a = -2;
    double dx;
    dx = (2 - a) / 10;
    int mark;
    mark = 1;
    double x;
    x = a + mark * dx;
    while (10e-6 <= fabs(a - x)) {
        if (sin(x) <= sin(a)) {}
        else {
            dx /= 10; //divide by ten again
            mark = -mark; //reverse
        }
        a = x;
        x = a + mark * dx;
    }
    auto xmin = x;
    printf("xmin = %lf, f(%lf) = %lf\n", xmin, xmin, sin(xmin));
}

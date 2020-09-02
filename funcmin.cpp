#include <stdio.h> //io
#include <math.h> //math
int main(){ //main funtion
    double a = -2; //define a double
    double dx; //define derivative
    dx = (2 - a) / 10; //distance
    int mark; //mark is for "-" aka direction of integration
    mark = 1; //set mark to 1
    double x; //double for x value
    x = a + mark * dx; //limit
    while (10e-6 <= fabs(a - x)) { //tolerance value
        if (sin(x) <= sin(a)) {} //if less then
        else { //dx = dx/10 or "/=" cuts up the limit again
            dx /= 10; //divide by ten again
            mark = -mark; //reverse
        }
        a = x; //set a to x
        x = a + mark * dx;
    }
    auto xmin = x; //set min function
    printf("xmin = %lf, f(%lf) = %lf\n", xmin, xmin, sin(xmin)); //define func
}
//xmin = -1.570764, f(-1.570764) = -1.000000

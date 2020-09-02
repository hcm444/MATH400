#include <stdio.h> //io
#include <math.h> //math
int main(){ //main funtion
    double A = -2; //define A double
    double dx; //define derivative
    dx = (2 - A) / 10; //distance
    int mark; //mark is for "-" aka direction of integration
    mark = 1; //set mark to 1
    double X; //double for X value
    X = A + mark * dx; //limit
    while (10e-6 <= fabs(A - X)) { //tolerance value
        if (sin(X) <= sin(A)) {} //if less then
        else { //dx = dx/10 or "/=" cuts up the limit again
            dx /= 10; //divide by ten again
            mark = -mark; //reverse
        }
        A = X; //set A to X
        X = A + mark * dx;
    }
    double xmin = X; //set min function
    printf("xmin = %lf\n", xmin);
    printf("f(%lf) = %lf\n",xmin, sin(xmin));
}


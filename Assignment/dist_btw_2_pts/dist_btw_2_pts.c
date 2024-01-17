#include <stdio.h>
#include <math.h>

//program to calculate the distance between two points using a custom function
double distance (double x1, double y1, double x2, double y2) {
    double square_difference_x = (x2-x1) * (x2-x1);
    
    double square_difference_y = (y2-y1) * (y2-y1);

    double sum = square_difference_x + square_difference_y;

    double final_value = sqrt(sum);

    return final_value;
}


double main() {

    double a, b, c, d;
    //let's get the coordinate values from the user

    printf ("What's x1?: ");
    scanf ("%lf", &a);

    printf ("What's y1?: ");
    scanf ("%lf", &b);

    printf ("What's x2?: ");
    scanf ("%lf", &c);

    printf ("What's y2?: ");
    scanf ("%lf", &d);

    double dist_btw_2_pts = distance(a, b, c, d);
    printf ("The distance between points (%lf,%lf) and (%lf,%lf) is %lf.\n", a, b, c, d, dist_btw_2_pts );

    return 0;

}



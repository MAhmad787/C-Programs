#include <stdio.h>

void main()
{
    int x;
    printf("1: Area of rectangle\n");
    printf("2: Area of circle\n");
    printf("3: Area of triangle\n");
    printf("Which case you want to solve(1, 2, 3)\n");
    scanf("%d", &x);

    switch (x){
        case 1:
            {       float l, b;
                    printf("Enter Length of rectangle\n");
                    scanf("%f", &l);
                    printf("Enter Width of rectangle\n");
                    scanf("%f", &b);
                    float area = l*b;
                    printf("Area of rectangle is %f\n", area);
                    break;
            }
            case 2:
            {       float r;
                    float pie = 3.142;
                    printf("Enter radius of circle\n");
                    scanf("%f", &r);
                    float area = pie*r*r;
                    printf("Area of Square is %f\n", area);
                    break;
            }
            case 3:
            {       float l, b;
                    printf("Enter Length of triangle\n");
                    scanf("%f", &l);
                    printf("Enter Width of triangle\n");
                    scanf("%f", &b);
                    float area = (l*b)/2;
                    printf("Area of triangle is %f\n", area);
                    break;
            }

}
}

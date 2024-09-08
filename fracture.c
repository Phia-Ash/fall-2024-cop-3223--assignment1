#include <stdio.h>
#include <math.h>

int main(int argc, char**argv)
{
        float PI = 3.14159;
    
        int x1 = scanf("What is your Point 1 x-value?");
        int y1 = scanf("What is your Point 1 y-value?");
    
        int x2 = scanf("What is your Point 2 x-value?");
        int y2 = scanf("What is your Point 2 y-value?");

    double calculateDistance();
         
        float d = (sqrt((y2-y1)^(2) + (x2-x1)^(2)));
    
        printf("The distance between two points is", d);

        return d;

    double calculatePerimeter();
        
        
        float p = (PI*d);

        printf("The perimeter of the city encompassed by your request is", p);

        return 1.5;

    double calculateArea();

        float a = (float)PI*(float)d^2/4;

        printf("The area of the city encompassed by your request is", a);

        return 2;

    double calculateWidth();
        float w = (sqrt((y2-y1)^(2) + (x2-x1)^(2)));

        printf("The width of the city encompassed by your request is", w);

    return 2;

    double calculateHeight();
        
        int r = d/2;
        float h = float(a)/(float)PI*r^2;

        printf("The height of the city encompassed by your request is", h);

    return 3.5;

return 0;
}
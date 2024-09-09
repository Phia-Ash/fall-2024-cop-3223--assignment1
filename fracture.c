#include <stdio.h>
#include <math.h>

int main(int argc, char**argv)
{
        float PI = 3.14159;
    
        int x1 = printf("What is your Point 1 x-value?\n");
            scanf("%d", &x1);
        int y1 = printf("What is your Point 1 y-value?\n");
            scanf("%d", &y1);
    
        int x2 = printf("What is your Point 2 x-value?\n");
            scanf("%d", &x2);
        int y2 = printf("What is your Point 2 y-value?\n");
            scanf("%d", &y2);

    double calculateDistance;
         {
            int d = (sqrt((y2-y1)^(2) + (x2-x1)^(2)));
        
            printf("The distance between two points is %d\n", d);

            return d;
         };

        double calculatePerimeter;
        {
            int d = (sqrt((y2-y1)^(2) + (x2-x1)^(2)));
            
            int p = (PI*d);

                printf(" The perimeter of the city encompassed by your request is %d\n", p);

            return 1.5;
        };
        
        double calculateArea;
        {
            int d = (sqrt((y2-y1)^(2) + (x2-x1)^(2)));
        
            int a = (float)PI*(d^2/4);

                printf ("The area of the city encompassed by your request is %d\n", a);

            return 2;
        };
        
        double calculateWidth;
        {
            int w = (sqrt((y2-y1)^(2) + (x2-x1)^(2)));

                printf("The width of the city encompassed by your request is %d\n", w);

        return 2;
        };
        
        double calculateHeight;
        {
            int d = (sqrt((y2-y1)^(2) + (x2-x1)^(2)));
            int a = (float)PI*(d^2/4);
            int r = d/2;
            
            int h = (a)/(float)PI*(r^2);

                printf("The height of the city encompassed by your request is %d\n", h);

        return 3.5;
        };
        
return 0;
}

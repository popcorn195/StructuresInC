//WAC to calculate area and perimeter of rectangle using structure and function

#include <stdio.h>

typedef struct rectangle
{
    float x;
}rec;

void calc(rec *,rec *);

int main()
{
    int n,i,res,j,n1;
    rec r1,r2;
    printf("Enter Length of the rectangle: ");
    scanf("%f",&r1.x);
    printf("\nEnter breadth of the rectangle: ");
    scanf("%f",&r2.x);
    
    calc(&r1,&r2);
    return 0;
}

void calc(rec *r1,rec *r2)
{
    float area,peri;
    area=(r1->x)*(r2->x);
    peri=2*((r1->x)+(r2->x));
    printf("\nArea of the rectangle: %0.3f\nPerimeter of the rectangle: %0.3f\n",area,peri);
}

//Program to find distance between two cordinates

#include <stdio.h>
#include <math.h>


typedef struct distance
{
    int x;
    int y;
}dis;

float calc(dis *,dis *);

int main()
{
    float res;
    dis r1,r2;
    printf("Enter corodinate 1: ");
    scanf("%d %d",&r1.x,&r1.y);
    printf("Enter cordinate 2: ");
    scanf("%d %d",&r2.x,&r2.y);
    
    res=calc(&r1,&r2);
    printf("The distances between the two cordinates is: %f units",res);
    return 0;
}

float calc(dis *r1,dis *r2)
{
    float x1,y1,dist;
    x1=pow((r1->x-r2->x),2);
    y1=pow((r1->y-r2->y),2);
    dist=sqrt(x1+y1);
    return dist;
}

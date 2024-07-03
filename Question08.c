//WAC to add two distances that are in terms of km and m, and display the converted result using structure and function

#include <stdio.h>

typedef struct distance
{
    int km;
    int m;
}dis;

int calc(dis *,dis *);

int main()
{
    int res;
    dis r1,r2;
    printf("Enter distance 1 in terms of km and m: ");
    scanf("%d %d",&r1.km,&r1.m);
    printf("Enter distance 2 in terms of km and m: ");
    scanf("%d %d",&r2.km,&r2.m);
    
    res=calc(&r1,&r2);
    printf("The sum of distances after conversion is: %d meters",res);
    return 0;
}

int calc(dis *r1,dis *r2)
{
    int t1,t2,sum;
    r1->km=(r1->km)*1000;
    r2->km=(r2->km)*1000;
    t1=(r1->km)+(r1->m);
    t2=(r2->km)+(r2->m);
    sum=t1+t2;
    return sum;
}

//Program to find sum, difference, product, and quotient of two fractions using switch case

#include <stdio.h>
#include <math.h>


typedef struct fraction
{
    int n;
    int d;
}frac;

void calc(frac *,frac *);

int main()
{
    float res;
    frac r1,r2;
    printf("Enter fraction 1: ");
    scanf("%d %d",&r1.n,&r1.d);
    printf("Enter fraction 2: ");
    scanf("%d %d",&r2.n,&r2.d);
    calc(&r1,&r2);
    return 0;
}

void calc(frac *r1,frac *r2)
{
    float add,s,m,d;
    int choice;
    char ch;
    printf("\nEnter 1 for addition\nEnter 2 for subtration\nEnter 3 for multiplication\nEnter 4 for division\n");
    printf("Enter any key to exit\n");
    do{
        printf("\nEnter choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: 
                add=((r1->n/(float)r1->d))+((r2->n/(float)r2->d));
                printf("Sum: %0.2f",add);
                break;
            case 2: 
                s=((r1->n/(float)r1->d))-((r2->n/(float)r2->d));
                printf("Difference: %0.2f",s);
                break;
            case 3: 
                m=((r1->n/(float)r1->d))*((r2->n/(float)r2->d));
                printf("Product: %0.2f",m);
                break;
            case 4: 
                d=((r1->n/(float)r1->d))/(float)((r2->n/(float)r2->d));
                printf("Quotient: %0.2f",d);
                break;
            default:
                break;
        }
        printf("\nEnter Y to repeat, else N: ");
        scanf(" %c", &ch); // Notice the space before %c to consume any whitespace characters
    } while(ch=='Y'||ch=='y');
}

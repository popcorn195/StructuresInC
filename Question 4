//WAC to input details of n employees and print details of oldest employee using structures and fucntion

#include <stdio.h>

typedef struct employee
{
    char name[100];
    int age;
    int empID;
}emp;

int ageCalc(emp *, int);

int main()
{
    int n,i,res;
    printf("Enter number of employees: ");
    scanf("%d",&n);
    emp E[n];
    printf("\nEnter name, age and ID of employees respectively");
    for(i=0;i<n;i++)
    {
        printf("\nname: ");
        scanf("%s",E[i].name);
        printf("age: ");
        scanf("%d",&E[i].age);
        printf("ID: ");
        scanf("%d",&E[i].empID);
    }
    res=ageCalc(E,n);
    printf("\nDetails of OLdest Employee(s):\n");
    for(i=0;i<n;i++)
    {
        if(E[i].age==res)
        {
            printf("Employee %d\n",i+1);
            printf("Name: %s\n",E[i].name);
            printf("Age: %d\n",E[i].age);
            printf("ID: %d\n",E[i].empID);
        }
        printf("\n");
    }
    return 0;
}

int ageCalc(emp E[], int n)
{
    int oemp,i;
    oemp=E[0].age;
    for(i=0;i<n;i++)
    {
        if(E[i].age>oemp)
        {
            oemp=E[i].age;
        }
        
    }
    return oemp;
}

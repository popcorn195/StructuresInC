//WAC to input details of n emplyees and calculate age difference between youngest and oldest employee using structures and fucntion

#include <stdio.h>

typedef struct employee
{
    char name[100];
    int age;
    int empID;
}emp;

int diff(emp *, int);

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
    res=diff(E,n);
    printf("Age difference between the youngest and oldest employee is: %d",res);
    return 0;
}

int diff(emp E[], int n)
{
    int yemp,oemp,d,i;
    yemp=oemp=E[0].age;
    for(i=0;i<n;i++)
    {
        if(E[i].age<yemp)
        {
            yemp=E[i].age;
        }
        if(E[i].age>oemp)
        {
            oemp=E[i].age;
        }
        
    }
    d=oemp-yemp;
    return d;
}

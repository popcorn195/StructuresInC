//Program to sort employees according to their age

#include <stdio.h>

typedef struct employee
{
    char name[100];
    int age;
    int empID;
}emp;

void ageCalc(emp *, int);
void swap(emp *, emp *) ;
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
    ageCalc(E,n);
    printf("\nDetails of sorted Employee(s):\n");
    for(i=0;i<n;i++)
    {
        //if(E[i].age==res)
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

void ageCalc(emp E[], int n)
{
    int oemp,i,j;
    oemp=E[0].age;
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(E[i].age>E[j].age)
            {
                swap(&E[i],&E[j]);
                
            }
        }
     }
}


void swap(emp *emp1, emp *emp2) 
{
    emp temp = *emp1;
    *emp1 = *emp2;
    *emp2 = temp;
}







void ageCalc(emp E[], int n)
{
    int oemp,i,j;
    oemp=E[0].age;
    emp temp;
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(E[i].age>E[j].age)
            {
                //swap(&E[i],&E[j]);
                 temp = E[i];
    E[i] = E[j];
    E[j] = temp;
                
            }
        }
     }
}

//WAC to input details of a student and print it using structure and function

#include <stdio.h>

typedef struct student
{
    char name[100];
    int age;
    int ID;
}stu;
struct marks
{
    float m;
};

void details(stu,struct marks *,int,float);

int main()
{
    int n,i,res,j,n1;
    stu S;
    printf("Enter details of the student:\n");
    printf("\tName: ");
    scanf("%s",S.name);
    printf("\tAge: ");
    scanf("%d",&S.age);
    printf("\tID: ");
    scanf("%d",&S.ID);
    
    printf("Enter number of subjects: ");
    scanf("%d",&n);
    struct marks M[n];
    float avg,sum;
    printf("Enter student's marks in each subject respectively\n");
    sum=0;
    for(j=0;j<n;j++)
    {
        printf("\tMarks in subject %d: ",j+1);
        scanf("%f",&M[j].m);
        sum=sum+M[j].m;
    }
    avg=(float)(sum/n);
        
    details(S,M,n,avg);
    return 0;
}

void details(stu S,struct marks M[],int n,float avg)
{
    int j;
    printf("\nDetails of the student are:\n");
    printf("\tName: %s\n",S.name);
    printf("\tAge: %d\n",S.age);
    printf("\tID: %d\n",S.ID);
    
    printf("\tStudent's marks in each subject respectively:\n");
    for(j=0;j<n;j++)
    {
        printf("\t\tMarks in subject %d: %f",j+1,M[j].m);
        printf("\n");
    }
    printf("\tAverage: %f",avg);
}

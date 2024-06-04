//WAC to input details of n students and print highest and lowest average marks using nested structures

#include <stdio.h>

// Define the marks structure before student structure
struct marks {
    float m;
};

typedef struct student {
    char name[100];
    int age;
    int ID;
    struct marks mr[10];
} stu;

int main() 
{
    int n, i, j, n1;
    printf("Enter number of students: ");
    scanf("%d", &n);
    stu S[n];
    printf("Enter number of subjects: ");
    scanf("%d", &n1);
    //struct marks M[n1];
    float avg[10], sum;
    printf("\nEnter name, age, ID of students and their marks in each subject respectively");
    for (i = 0; i < n; i++) 
    {
        printf("\nStudent %d", i + 1);
        printf("\nname: ");
        scanf("%s", S[i].name);
        printf("age: ");
        scanf("%d", &S[i].age);
        printf("ID: ");
        scanf("%d", &S[i].ID);
        sum = 0;
        for (j = 0; j < n1; j++) 
        {
            printf("\tMarks in subject %d: ", j + 1);
            scanf("%f", &S[i].mr[j].m);
            sum = sum + S[i].mr[j].m;
        }
        avg[i] = (float)(sum / n1);
        printf("Average: %f", avg[i]);
    }
    float hm, lm;
    hm = lm = avg[0];
    for (i = 0; i < n; i++) {
        if (avg[i] < lm) {
            lm = avg[i];
        }
        if (avg[i] > hm) {
            hm = avg[i];
        }
    }
    printf("\nHighest average marks: %f\nLowest average marks: %f", hm, lm);
    return 0;
}


//Program to enter two dates and check which date comes first.
 

#include<stdio.h> 
#include<stdlib.h>

struct date
{
    int dd,mm,yy;
};

int validDate(int,int,int);
void dateCompare(struct date,struct date);

int main()
{
    struct date d1,d2;
    printf("Enter date 1 (dd mm yyyy): ");
    scanf("%d %d %d",&d1.dd,&d1.mm,&d1.yy);
    printf("\nEnter date 2 (dd mm yyyy): ");
    scanf("%d %d %d",&d2.dd,&d2.mm,&d2.yy);

    if(!validDate(d1.dd, d1.mm, d1.yy))
    {
        printf("First date is invalid.\n");        
    }
    if(!validDate(d2.dd, d2.mm, d2.yy))
    {
        printf("Second date is invalid.\n");
        exit(0);
    }       
    
    dateCompare(d1,d2);
    
    return 0;
}

int validDate(int day,int mon,int year)    
{
    int is_valid=1,is_leap=0;
    if (year>=1800&&year<=9999) 
    {
        if((year%4==0&&year%100!=0)||(year%400==0)) 
        {
            is_leap=1;
        }
        if(mon>=1&&mon<=12)
        {
            if (mon==2)
            {
                if(is_leap&&day==29) 
                {
                    is_valid=1;
                }
                else if(day>28) 
                {
                    is_valid=0;
                }
            }
            else if(mon==4||mon==6||mon==9||mon==11) 
            {
                if (day>30)
                {
                    is_valid=0;
                }
            }
            else if(day>31)
            {            
                is_valid=0;
            }        
        }
        else
        {
            is_valid = 0;
        }

    }
    else
    {
        is_valid = 0;
    }
    return is_valid;
}

void dateCompare(struct date d1,struct date d2)
{
    if(d1.yy!=d2.yy)
    {
        if(d1.yy<d2.yy)
        {
            printf("%d/%d/%d comes earlier than %d/%d/%d\n",d1.dd,d1.mm,d1.yy,d2.dd,d2.mm,d2.yy);
        }
        if(d1.yy>d2.yy)
        {
            printf("%d/%d/%d comes earlier than %d/%d/%d\n",d2.dd,d2.mm,d2.yy,d1.dd,d1.mm,d1.yy);
        }
    }
    else if(d1.mm!=d2.mm)
    {
        if(d1.mm<d2.mm)
        {
            printf("%d/%d/%d comes earlier than %d/%d/%d\n",d1.dd,d1.mm,d1.yy,d2.dd,d2.mm,d2.yy);
        }
        if(d1.mm>d2.mm)
        {
            printf("%d/%d/%d comes earlier than %d/%d/%d\n",d2.dd,d2.mm,d2.yy,d1.dd,d1.mm,d1.yy);
        }
    }
    else
    {
        if(d1.dd<d2.dd)
        {
            printf("%d/%d/%d comes earlier than %d/%d/%d\n",d1.dd,d1.mm,d1.yy,d2.dd,d2.mm,d2.yy);
        }
        else if(d1.dd>d2.dd)
        {
            printf("%d/%d/%d comes earlier than %d/%d/%d\n",d2.dd,d2.mm,d2.yy,d1.dd,d1.mm,d1.yy);
        }
        else
        {
            printf("%d/%d/%d and %d/%d/%d are equal\n",d2.dd,d2.mm,d2.yy,d1.dd,d1.mm,d1.yy);
        }
    }
    
}

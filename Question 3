//Program to calculate the number of days, months and years between two dates dates
 

#include<stdio.h> 
#include<stdlib.h>

struct date
{
    int dd,mm,yy;
};

int valid_date(int date, int mon, int year);

int main()
{
    struct date d1,d2;
    printf("Enter date 1 (dd mm yyyy): ");
    scanf("%d %d %d",&d1.dd,&d1.mm,&d1.yy);
    printf("\nEnter date 2 (dd mm yyyy): ");
    scanf("%d %d %d",&d2.dd,&d2.mm,&d2.yy);
    
    
    int day_diff, mon_diff, year_diff;         


    if(!valid_date(d1.dd, d1.mm, d1.yy))
    {
        printf("First date is invalid.\n");        
    }

    if(!valid_date(d2.dd, d2.mm, d2.yy))
    {
        printf("Second date is invalid.\n");
        exit(0);
    }       

    if(d2.dd < d1.dd)
    {      
        // borrow days from february
        if (d2.mm==3)
        {
            //  check whether year is a leap year
            if((d2.yy%4==0&&d2.yy%100!=0)||(d2.yy%400==0)) 
            {
                d2.dd+=29;
            }
            else
            {
                d2.dd+=28;
            }                        
        }
        // borrow days from April or June or September or November
        else if(d2.mm==5||d2.mm==7||d2.mm==10||d2.mm==12) 
        {
           d2.dd+=30; 
        }
        // borrow days from Jan or Mar or May or July or Aug or Oct or Dec
        else
        {
           d2.dd+=31;
        }
        d2.mm=d2.mm-1;
    }

    if (d2.mm<d1.mm)
    {
        d2.mm+=12;
        d2.yy-=1;
    }       

    day_diff=d2.dd-d1.dd;
    mon_diff=d2.mm-d1.mm;
    year_diff=d2.yy-d1.yy;

    printf("Difference: %d years %02d months and %02d days.", year_diff, mon_diff, day_diff);

    return 0; // return 0 to operating system
}

// function to check whether a date is valid or not

int valid_date(int day, int mon, int year)    
{
    int is_valid = 1, is_leap = 0;

    if (year >= 1800 && year <= 9999) 
    {

        //  check whether year is a leap year
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
        {
            is_leap = 1;
        }

        // check whether mon is between 1 and 12
        if(mon >= 1 && mon <= 12)
        {
            // check for days in feb
            if (mon == 2)
            {
                if (is_leap && day == 29) 
                {
                    is_valid = 1;
                }
                else if(day > 28) 
                {
                    is_valid = 0;
                }
            }

            // check for days in April, June, September and November
            else if (mon == 4 || mon == 6 || mon == 9 || mon == 11) 
            {
                if (day > 30)
                {
                    is_valid = 0;
                }
            }

            // check for days in rest of the months 
            // i.e Jan, Mar, May, July, Aug, Oct, Dec
            else if(day > 31)
            {            
                is_valid = 0;
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

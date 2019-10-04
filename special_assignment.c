#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Date{
    int day;
    int month;
    int year;
}D1,D2;

int normal_year[12] = {1,32,60,91,121,152,182,213,244,274,305,335};
int leap_year[12]   = {1,32,61,92,122,153,183,214,245,275,306,336};

int diffyear(){
    int day1y1=0, day2y2=0, day_diff1=0;
    if((D1.year)%4==0){
        day1y1 = 366 - (leap_year[D1.month-1] + (D1.day-1));
    }
    else{
        day1y1 = 365 - (normal_year[D1.month-1] + (D1.day-1));
    }

    for(int i=D1.year+1;i<D2.year;i++){
        if(i%4!=0){
            day1y1 += 365;
        }
        else {
            day1y1 += 366;
        }
    }

    if((D2.year)%4==0){
        day2y2 = leap_year[D2.month-1] + (D2.day-1);
    }
    else {
        day2y2 = normal_year[D2.month-1] + (D2.day-1);
    }

    day_diff1 = day1y1 + day2y2;
    return day_diff1;
    
}

int sameyear(){
    int day1,day2,day_diff;
   
    if((D1.year)%4==0 && (D2.year)%4==0){
        day1 = leap_year[D1.month-1] + (D1.day-1);
        day2 = leap_year[D2.month-1] + (D2.day-1);
    }
    else {
        day1 = normal_year[D1.month-1] + (D1.day-1);
        day2 = normal_year[D2.month-1] + (D2.day-1);
    }
    day_diff = day2 - day1;
    return day_diff;
}

void calculateDayDiff(){
    int result;

    if(D1.year <= D2.year){
        if(D1.year != D2.year){
            result = diffyear();
            printf("\nSo day difference b/w these two date is: %d",result);
        }
        else {
            result = sameyear();
            printf("\nSo day difference b/w these two date is: %d",result);
        }
    }
    else{
        printf("start date should be less than end date......");
        printf("\nSo day difference b/w these two date is: 0 days");
    }    
}

int main()
{
    printf("Enter Start Date (dd mm yyyy) : ");
    scanf("%d %d %d",&D1.day,&D1.month,&D1.year);

    printf("Enter End Date (dd mm yyyy) : ");
    scanf("%d %d %d",&D2.day,&D2.month,&D2.year);

    calculateDayDiff();

    //printf("Start Date : %d %d %d \nEnd Date : %d %d %d\n",D1.day,D1.month,D1.year,D2.day,D2.month,D2.year);
       
    return 0;
}

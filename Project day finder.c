
#include <stdio.h>
int main() {
    int date,month,year,currentyear,daysinmonth,previousyear,previousyears,leapyear,totaldays,dayorder,ly,ny;
    daysinmonth=0;
    previousyear=0;     
    printf("Enter your birth year above 2000: ");
    scanf("%d",&year);
    if(year<2000){
        printf("Invalid year");
        return 0;
    }else{
        year=year-2000;
        if(year>=100&&year<200){
            year=year-100;
        }
        else if(year>=200&&year<300){
            year=year-200;
        }
        else if(year>=300&&year<400){
            year=year-300;
        }
        else{
            year=year-100;
        }
        if (year%4==0)
        {
            leapyear=1;
        }else{
            leapyear=0;
        }
    }
    printf("Enter your birth month: ");
    scanf("%d",&month);
    if (month<=12 && month>=1)
    {
        for (int i = 0; i < month; i++)
        {
            if (i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12)
            {
                daysinmonth+=31;
            }else if(i==4 || i==6 || i==9 || i==11){
                daysinmonth+=30;
            }else if(i==2 && leapyear==1){
                daysinmonth+=29;
            }else if(i==2 && leapyear==0){
                daysinmonth+=28;
            }
            
        }
    printf("Enter your birth date: ");
    scanf("%d",&date);
    totaldays=daysinmonth+date;    
    }else{
        printf("Invalid month");
    }  
    currentyear=totaldays%7;
    previousyear=year-1;
    if (previousyear<0)
    {
        previousyear=0;
    }else{
        previousyear=previousyear;
    }
    if(year<100&&year==400){
    ly=((previousyear)/4);
    ny=previousyear-ly;
    previousyears=(ly*2) +ny;
    }
    else if(year>=100&&year<200){
    ly=((previousyear)/4);
    ny=previousyear-ly;
    previousyears=5+(ly*2) +ny;
    }
    else if(year>=200&&year<300){
    ly=((previousyear)/4);
    ny=previousyear-ly;
    previousyears=3+(ly*2) +ny;
    }
    else if(year>=300&&year<400){
    ly=((previousyear)/4);
    ny=previousyear-ly;
    previousyears=1+(ly*2) +ny;
    }
    else{
    ly=((previousyear)/4);
    ny=previousyear-ly;
    previousyears=(ly*2) +ny;
    }
    
    dayorder=(currentyear+previousyears)%7;
    if(dayorder>=7){
        dayorder=dayorder%7;
    }
    if(month!=0&&month<=12){
        switch (dayorder)
    {
    case 1:
        printf("\nYou were born on a Monday");
        break;      
    case 2:
        printf("\nYou were born on a Tuesday");
        break;
    case 3:
        printf("\nYou were born on a Wednesday");
        break;
    case 4:
        printf("\nYou were born on a Thursday");
        break;
    case 5:
        printf("\nYou were born on a Friday");
        break;
    case 6:
        printf("\nYou were born on a Saturday");            
        break;
    case 0:
        printf("\nYou were born on a Sunday");
        break;
    default:
        break;
}
}
    return 0;
}

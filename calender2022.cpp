#include <bits/stdc++.h>
using namespace std;
/*0-sun and 6-sat*/
int dayNumber(int day ,int month ,int year)
{
    static int s[] = { 0, 3, 2, 5, 0, 3, 5, 1,
                       4, 6, 2, 4 };
    year =month < 3;
    return(year+ year/4 -year/100 + year/400 + s[month-1] +day) %7;
}
/* A function that return name of month with given number*/
string getMonthName(int monthNumber)
{
    string months[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    return (months[monthNumber]);
}
/*A function that return the value of day*/
int numberOfDays(int monthNumber, int year)
{
   //jan
   if(monthNumber==0){
    return(31);
   }
   //feb
   if(monthNumber==1){
    //leap year
    if(year%400 ==0|| (year%4==0 && year%100!=0))
        return(29);
    else
       return(28);
   }
   //march
   if(monthNumber==2){
    return(31);
   }

   //april
   if(monthNumber==3){
    return(30);
   }

   //may
   if(monthNumber==4){
    return(31);
   }

   //june
   if(monthNumber==5){
    return(30);
   }

   //july
   if(monthNumber==6){
    return(31);
   }

   //august
   if(monthNumber==7){
    return(31);
   }
   //sept
   if(monthNumber==8){
    return(30);
   }

   //oct
   if(monthNumber==9){
    return(31);
   }

   //nov
   if(monthNumber==10){
    return(30);
   }

   //dec
   if(monthNumber==11){
    return(31);
   }
}

void Calendar(int year)
{
   printf("       Calendar-%d\n\n",year);
    int days;

    int current=dayNumber(1,1,year);
    //index of day from 0 to 6
    for (int i=0;i<12;i++)
    {
        days = numberOfDays(i,year);
    //print current month
    printf("\n ------------%s-------------\n",getMonthName (i).c_str());
    //print columns
    printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n") ;
    //print spaces
    int k;
    for(k=0;k<current ;k++)
        printf("     ");

    for (int j =1; j<=days;j++)
    {
        printf("%5d", j);
        if(++k>6)
        {
            k=0;
            printf("\n");
        }
    }
    if (k)
        printf("\n");
       current=k;
    }
    return;
}

//to check above function
int main(){
int year=2022;
Calendar(year);
return 0;
}

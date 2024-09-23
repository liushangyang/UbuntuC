//2024.9.22
//刘阳阳
#include<stdio.h>

#define MUN_PATES ((int) sizeof(values)/sizeof(values[0]))
#define BASE_MONEY 100.0

int main(void){
    int i,low_rate,mum_years,year=1000,month;
    double values[5];
 
    //because i don't know Dynamic storage Share so it's ont prefct
    
    printf("Please input rate：");
    scanf("%d",&low_rate);
    printf("\n");
    printf("Enter years: ");
    scanf("%d",&mum_years);

    double month_values[MUN_PATES][12][year];
    double value_year[i][year];

    printf("\nYears");
    for ( i = 0; i < MUN_PATES ; i++)
    {
        printf("%6d%%",low_rate+i);
        values[i]=BASE_MONEY;
    }
    printf("\n");
    

    for (year=0;year<mum_years;year++)
    {
        printf("%3d   ",year+1);
        for ( i = 0; i < MUN_PATES; i++)
        {
            values[i]+=(i+low_rate)/100.0*values[i];
            value_year[i][year]=values[i];
            printf("%7.2f",values[i]);
        }
        printf("\n");
        
    }
    //builder : SunCanHelpU
    for ( i = 0; i < MUN_PATES; i++)
    {
        for (month=0; month<12;month++)
        {   
            for(year=0;year<12;year++){
            month_values[i][month][year]=value_year[i][year]*(i+low_rate)/100.0/12.0+value_year[i][year];
            }
            //We need a new group

        }
        
    }

    //builder : SunCanHelpU Chang : Make it possible to output month in years;
    for (year=0;year<12;year++)
    {
        printf("%3d   ",year);
        for(i=0;i<MUN_PATES;i++){
            printf("rate:%2d   ",i+low_rate);
            for(month=0;month<12;month++){
                printf("%7.2f",month_values[i][month][year]);
            }
        }
        printf("\n");
    }
    
    
    
    return 0;   
    
}
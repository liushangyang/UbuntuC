//2024.9.22
//刘阳阳
#include<stdio.h>

#define MUN_PATES ((int) sizeof(values)/sizeof(values[0]))
#define BASE_MONEY 100.0

int main(void){
    int i,low_rate,mum_years,year;
    double values[5];
    
    printf("Please input rate：");
    scanf("%d",&low_rate);
    printf("\n");
    printf("Enter years: ");
    scanf("%d",&mum_years);

    printf("\nYears");
    for ( i = 0; i < MUN_PATES ; i++)
    {
        printf("%6d%%",low_rate+i);
        values[i]=BASE_MONEY;
    }
    printf("\n");

    for (year=1;year<=mum_years;year++)
    {
        printf("%3d   ",year);
        for ( i = 0; i < MUN_PATES; i++)
        {
            values[i]+=(i+low_rate)/100.0*values[i];
            printf("%7.2f",values[i]);
        }
        printf("\n");
        
    }
    return 0;   
    
}
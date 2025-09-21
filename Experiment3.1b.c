#include<stdio.h>
int main()
{
    float w,h,bmi;
    printf("Enter Weight in kilograms:");
    scanf("%f",&w);
    printf("Enter Height in meters:");
    scanf("%f",&h);
    bmi = w / (h * h);
     printf("Your BMI is: %.2f\n", bmi);
    if ( bmi < 15 )
    {
        printf("Starvation");
    }
    else if ( bmi>=15 && bmi<= 17.5 )
    { 
        printf("Anorexic");
    }
    else if ( bmi>17.5 && bmi<=18.5)
    {
        printf("Underweight");
    }
    else if ( bmi>18.5 && bmi<=24.9)
    {
        printf("Ideal");
    }
    else if ( bmi>=25 && bmi<=29.9)
    {
        printf("Overweight");
    }
     else if ( bmi>=30 && bmi<=39.9)
    {
        printf("Obese");
    }
     else if ( bmi>=40)
    {
        printf("Morbidity Obesity");
    }
    return 0;
}



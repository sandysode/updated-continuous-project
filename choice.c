#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
/**
* this is bmi calculator that calculates the weight and height of and individual
* if (BMI <= 18.5)
* printf("You are underweight
* else if (BMI >= 18.5 && BMI <= 24.9)
* Your weight is normal\n", BMI
* else if BMI >= 24.9 && BMI <= 29.9
* You are overweight\n", BMI
* else if BMI > 30
* You are obese
* else
* Invalid
*return 0 */

void BMICAl()
{
    float weight = 0.00;
    float height = 0.00;
    float BMI = 0.00;
    printf("Enter your weight: ");
    scanf("%f", &weight);
    printf("Enter your height: ");
    scanf("%f", &height);
    BMI = weight * 703 /(height * height);
    if (BMI <= 18.5)
        printf("You are underweight\n", BMI);
    else if (BMI >= 18.5 && BMI <= 24.9)
        printf("Your weight is normal\n", BMI);
    else if (BMI >= 24.9 && BMI <= 29.9)
        printf("You are overweight\n", BMI);
    else if (BMI > 30)
        printf("You are obese");
    else
        printf("Invalid");
}

int main()
{
     int h,m,s;
int d = 1000;
int choice;
printf("Pick 2 for BMI\n");
printf("Pick 1 for Timer\n");
printf("Pick your choice: \n");
scanf("%d", &choice);
if (choice == 1)
{



printf("set the time: \n ");
scanf("%d%d%d", &h,&m,&s);
if (h > 12, m > 60, s > 60)
{
   printf("ERROR");
 exit(0);
}

while (1)
{
    s++;
    if (s>60)
    {
        m++;
        s=0;
    }
    if(m>60)
    {
        h++;
        m=0;
    }
    if(h>12)
    {
        h=1;
    }
     printf("Sandra's clock: \n");
    printf("%02d: %02d: %02d", h,m,s);
    Sleep(d);
    system("cls");

}
}
else if (choice == 2)
{
    BMICAl();
}
return 0;
}




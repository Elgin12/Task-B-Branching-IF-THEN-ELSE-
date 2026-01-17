//Elgin Gjyzeli AI25
#include <stdio.h>
int main()
{
	float weight;
	float height;
    float BMI;
   
   printf("Input your weight in kg: ");
   scanf("%f",&weight);
   printf("Input your height in m: ");
   scanf("%f",&height);
   
   BMI = weight / (height*height);
   printf("%f\n",BMI);
   if(BMI <18.5){
   	printf("You are underweight!");//Arsyeja pse nuk e bera limitin e siperm dhe te ulet te kushteve sic e kerkuat eshte 
   }                               //sepse kishte probleme me vlerat e bmi si pshm 24.93 e cila dilte ne kategorine e gabuar
   else if (BMI >= 18.5 && BMI <25){ // si dhe per vlerat 18.41 deri .49
   	printf("You are at a normal weight!");
   }
	else if (BMI >= 25 && BMI <40){
   	printf("You are overweight!");
   }
   else
   {
   	printf("You are obese!");
   }
   return 0;
}

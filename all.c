#include<stdio.h>

int main()
{
//	a simple cheatsheet of c

	/* simple hello world
    printf("Hello World!\n");
    */
/*	drawing a triangle
	printf("   /|\n");
	printf("  / |\n");
	printf(" /  |\n");
	printf("/___|\n");
	*/
	
//Data Types
//char name[20] = "Muhammad_Ahmad";
//int class = 10;
//int age = 15;
//float height = 5.4;
//printf("Bio Data of Student is given below:\n Name %s \n Class %d \n Age %d \n Height %f", name, class, age, height); 

	
//	How to use variables
//char name[] = "Ahmad";
//int age = 15;   
//printf("My Name is %s\n", name );
//printf("My age is %d\n", age);
//printf("I Love making animations in CSS\n");

//how to take multiple character input in c Language
int age;
float percentage;
char grade;
printf("Type your age here:");
scanf("%d", &age);
printf("Type your percentage here:");
scanf("%f", &percentage);
printf("Type your grade here:");
scanf("%c", &grade);
printf("Your age %d, percentage %f, grade is %c", age, percentage, grade);

//how to take multiple character input in c Language
//char name[10];
//printf("Type your name here:");
//scanf("%s", &name);
//printf("Your Good name is %s\n", name);

//For taking double in input 
//double gpa;
//printf("Enter your GPA ");
//scanf("%lf", &gpa);
//lf = looking for
//printf("Your GPA is %f\n", gpa);
 

//Constants
//const int num = 8;
//After using const I cannot modify the value of num
//printf("The num is %d", num);
    return 0;
}

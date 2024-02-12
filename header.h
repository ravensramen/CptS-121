#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

//Function Name: double read_double(FILE* infile)
//Description: reads double values from the input data file.
//Parameters: Double values from the input data file. 
//Output: Applies retreived data files to variables for weight and height.

double read_double(FILE* infile);

//Function Name: int read_integer(FILE* infile)
//Description: Reads integer values from the input data file. 
//Parameters: Integer values from the input data file. 
//Output: Applies retreived data files to the variable for age. 

int read_integer(FILE* infile);  

//Function Name: char read_character(FILE* infile)
//Description: Reads character files from the input data file.  
//Parameters: Character values from the input data file. 
//Output: Applies retreived data files to the variable for gender. 

char read_character(FILE* infile); 

//Function Name: double calculate_men_bmr(double weight, double height, int age);
//Description: Inputs weight in pounds, height in inches, and age to the bmr function to find BMR.  
//Parameters: Weight, height, and age values. 
//Output: BMR for men. 

double calculate_men_bmr(double weight, double height, int age);

//Function Name: double calculate_women_bmr(double weight, double height, int age);
//Description: Inputs weight in pounds, height in inches, and age to the bmr function to find BMR.  
//Parameters: Weight, height, and age values. 
//Output: BMR for women. 

double calculate_women_bmr(double weight, double height, int age);

//Function Name: activity_level(double BMR)
//Description: Asks the user a series of yes or no questions to determine actitivy level.  
//Parameters: BMR of user.
//Output: Calories based on activity level.

double activity_level(double BMR);
#include "header.h"
//Function Name: double read_double(FILE* infile)
//Description: reads double values from the input data file.
//Parameters: Double values from the input data file. 
//Output: Applies retreived data files to variables for weight and height. 

double read_double(FILE* infile) {
	double value = 0.0; 
	fscanf(infile, "%lf", &value);
	return value; 
}

//Function Name: int read_integer(FILE* infile)
//Description: Reads integer values from the input data file. 
//Parameters: Integer values from the input data file. 
//Output: Applies retreived data files to the variable for age. 

int read_integer(FILE* infile) {
	int value = 0;
	fscanf(infile, "%d", &value);
	return value;
}

//Function Name: char read_character(FILE* infile)
//Description: Reads character files from the input data file.  
//Parameters: Character values from the input data file. 
//Output: Applies retreived data files to the variable for gender. 

char read_character(FILE* infile) {
	char value = "\0";
	fscanf(infile, "%c", &value);
	return value;
}


//Function Name: double calculate_men_bmr(double weight, double height, int age);
//Description: Inputs weight in pounds, height in inches, and age to the bmr function to find BMR.  
//Parameters: Weight, height, and age values. 
//Output: BMR for men. 

double calculate_men_bmr(double weight, double height, int age) {
	return 66 + (6.23 * weight) + (12.7 * height) - (6.8 * age);

}
//Function Name: double calculate_women_bmr(double weight, double height, int age);
//Description: Inputs weight in pounds, height in inches, and age to the bmr function to find BMR.  
//Parameters: Weight, height, and age values. 
//Output: BMR for women. 

double calculate_women_bmr(double weight, double height, int age){
	return 655 + (4.35 * weight) + (4.7 * height) - (4.7 * age);
}

//Function Name: activity_level(double BMR, char activity_answer)
//Description: Asks the user a series of yes or no questions to determine actitivy level.  
//Parameters: BMR of user.
//Output: Calories based on activity level.

double activity_level(double BMR, char activity_answer){
	printf("Is the person sedentary?\nEnter Y for 'yes' and N for 'NO'\n");
	scanf(" %c", &activity_answer);

	if (activity_answer == 'Y') {
		return BMR * 1.2;
	}
	else if (activity_answer == 'N') {
		printf("Does the person partake in low activity?\nEnter Y for 'yes' and N for 'NO'\n");
		scanf(" %c", &activity_answer);
	}
	if (activity_answer == 'Y') {
		return BMR * 1.375;
	}
	else if (activity_answer == 'N') {
		printf("Does the person partake in moderate activity?\nEnter Y for 'yes' and N for 'NO'\n");
		scanf(" %c", &activity_answer);
	}
	if (activity_answer == 'Y') {
		return BMR * 1.55;
	}
	else if (activity_answer == 'N') {
		printf("Does the person partake in high activity?\nEnter Y for 'yes' and N for 'NO'\n");
		scanf(" %c", &activity_answer);
	}
	if (activity_answer == 'Y') {
		return BMR * 1.725;
	}
	else if (activity_answer == 'N') {
		printf("Does the person partake in extra activity?\nEnter Y for 'yes' and N for 'NO'\n");
		scanf(" %c", &activity_answer);
	}
	if (activity_answer == 'Y') {
		return BMR * 1.9;
	}
}


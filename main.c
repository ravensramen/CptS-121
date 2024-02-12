#include "header.h"

int main() {
	FILE* input_data = fopen("input.dat", "r");

	FILE* output_data = fopen("output.dat", "w");

	double weight = 0.0, height = 0.0, BMR = 0.0, Calories = 0.0;
	int age = 0;
	char gender = "\0", activity_answer = "\0";
	
	weight = read_double(input_data);
	height = read_double(input_data);
	age = read_integer(input_data);
	gender = read_character(input_data);

	if (gender == "m") {
		BMR = calculate_men_bmr(weight, height, age);
	}
	else {
		BMR = calculate_women_bmr(weight, height, age);
	}
	//After calculating BMR for male and female users, specify activity level
	//to determine daily calorie intake.

	Calories = activity_level(BMR, activity_answer);

	printf("Your recommended daily calorie intake is %.2lf calories.", Calories);

	output_data = fopen("output.dat", "w");
	fprintf(output_data,"%.2lf", Calories);

	fclose(input_data);

	return 0;
}
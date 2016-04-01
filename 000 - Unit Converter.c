//000 - Unit Converter - weight, area, length, etc

#include <stdio.h>
#include <iostream.h>

char start_value_type
int start_value
int result

int main()
{
	printf("This program can convert from metres to feet\n");
	printf("Is your start value in feet or metres? (f/m):\n");
	scanf("%c", &start_value_type);
	
	if (start_value_type = "f") {
		printf("Please enter your value in feet:");
		scanf("%d", &start_value);
		result = (start_value / 3.2808)
		printf("%d foot = %d metres.", start_value, result);
		exit(0)
	}
	else if (start_value_type = "m") {
	
	}
	else {
		printf("Please use a valid input (f/m).\n")
	}
}


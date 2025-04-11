/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Apuntes.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmateo-h <jmateo-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 11:00:23 by jmateo-h          #+#    #+#             */
/*   Updated: 2025/02/25 17:49:52 by jmateo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int main()
{
	// Variable = 	Allocated space in memory to store a value.
	//				We refer to a variable's name to access the stored value.
	//				That variable now behaves as if it was the value it contains.
	//				BUT we need to declare what type of data we are storing.

	int x;		//declaration
	x = 123;	//initialization
	int y = 321; 	//declaration + initialization

	// Data Types
	
	int age = 24;		//integer
	float pip = 3,141592;	//floating point number %f  6-7 digits
	double pi = 3.141592653589793;	// floating point number larger %lf	15-16 digits
	char grade = 'C';	//single character %c
	char name[] = "Reda"; //array of characters %s

	
	char f = 120;		//1 byte (-128 to +127) %d or %c
	unsigned char g = 255;		//1 byte (0 to +255) %d or %c
	
	short int h = 32767;		//2 bytes (-32,768 to +32,767) %d
	unsigned short int i = 65535;	//2 bytes (0 to +65,535) %d
	
	int j = 2147483647;		//4 bytes (-2,147,648 to +2,147,483,647) %d
	unsigned int k = 4294967295;	//4 bytes (0 to +4,294,967,295) %u
	
	long long int 1 = 36783836728632976;	//8 bytes (-9 quintillion to +9 quintillion) %lld
	unsigned long long int m = 6728521658252675327; //8 bytes (0 to +18 quintillion) %llu

	// Format specifier % = defines and formats a type of data to be displayed

		// %c = character
		// %s = string (array of characters)
		// %f = float
		// %lf = double
		// %d = integer

		// %.1 = decimal precision
		// %1 = minimum field width
		// %- = left align
		
	// Constant = fixed value that cannot be altered by the program during it's execution
	
		const float PI = 3.14159;  // Now this number will not change

	// Arithmetic operators
	
		// + (addition)
		// - (subtraction)
		// * (multiplication)
		// / (division)
		// % (modulus)
		// ++ (increment)
		// -- (decrement)
	
	// Augmented assignment operators = used to replace a statement where an operator takes
	// a variable as one of its arguments and then assigns the result back to the same variable
	
	int x = 10;
	
	x = x + 1;
	x+=1;

	x = x * 4;
	x*=4;

	// Switch = A more efficient  alternative to using many "else if" statements
	// allows a value to be tested for equality against many cases

	char grade;

	printf("\nEnter a letter grade: ");
	scanf("%c", &grade);

	switch (grade)
	{
	case 'a':
		prinft("perfect!\n");
		break;
	case 'b':
		printf("you did good!\n");
		break;
	case 'c':
		printf("you did okay!\n");
		break;
	case 'd':
		printf("at least it's not an F!\n");
		break;
	case 'f':
		printf("YOU FAILED!\n");
		break;
	default:
		printf("Please enter a vaid grade\n");
	}

	
}
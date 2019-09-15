/* Student ID: 260762942      */
/* Student Name: Talha Riaz   */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) /* Argument functions used */
{

int Argument_Input; /* Variable which represents the base-10 number we want to convert */
int Required_Base; /* Variable which will be the base we want to convert in */
int Input_Number; /* Variable which will use the base-10 number in calculations */
int Stored_Remainders[50]; /* an array which stores all the remainders */
int ref=0; /* simple reference program counter for number conversion */
int index; /* Varible used to indicate letter location in 'Result' array */
char Result[26]= {'A', 'B', 'C', 'D', 'E', 'F', 'G' , 'H' , 'I' , 'J' , 'K', 'L' , 'M' , 'N' , 'O' ,
		'P' , 'Q' , 'R' , 'S' , 'T' , 'U' , 'V' , 'W' , 'X' , 'Y' , 'Z' }; /* An array which stores all the
		alphabets which represent value of ten and greater for other bases*/


	if(argc==2){
		Argument_Input= strtol(argv[1], argv, 10); /* Converts string value to be stored in an integer variable */
		Required_Base=2; /* An 'if' condition which states if 2 arguments are input, the second argument will
		represent the base-10 number we need to convert to. The base will be set to base-2 by default */
	}
	if(argc==3){
		Argument_Input= strtol(argv[1], argv, 10); /* Converts string value to be stored in an integer variable */
		Required_Base= strtol(argv[2], argv, 10); /* Converts string value to be stored in an integer variable */
		/* An 'if' statement to take the second argument as
		the base-10 number that needs to be converted and the third argument as the required base we need
		to convert in. */
	}
	if(!(argc == 2 || argc == 3)){
		printf("Incorrect number of arguments\n"); /* Program prints the statement if correct number of
		arguments are not input. */
	}

	if(argc==2 || argc==3){  /* Program only runs if correct arguments are input */
		Input_Number=Argument_Input; /* Using different variable for calculation */
		while (Input_Number > 0){ /* Loop continues to run until the integer divides to reach zero */
		Stored_Remainders[ref]= Input_Number%Required_Base; /* Computes the remainder of the numbers and stores them in the set array */
		Input_Number= Input_Number/Required_Base; /* Continues the conversion algorithm by further division */
		ref=ref+1; /* Loop counter which is also used as a reference to addresses in the remainders array */
		}
		printf("\nThe Base-%d form of %d is: ", Required_Base, Argument_Input); /* Prints the answer statement with the required base and the number input */
		   while(ref>0){
				 ref=ref-1; /* Remainders printed in backward order */
				if (Stored_Remainders[ref]<10) { /* Runs for the remainders that are less than 10 */
				 printf("%i", Stored_Remainders[ref]); /*Prints the remainders if less than 10 */
				}
				if (Stored_Remainders[ref] >= 10){ /*Runs for the remainders that are greater than 10 */
							index=Stored_Remainders[ref]-10; /* Subtracts 10, as address position in array starts from zero */
							printf("%c", Result[index]); /* Prints the alphabets corresponding to the index value */
				}


		   }
		   	   	   printf("\n\n"); /* Used for clearity in the CLI */
		   }

		   }


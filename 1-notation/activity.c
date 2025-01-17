#include <stdio.h>        // printf
#include <stdlib.h>       // free  
#include <limits.h>       // named constants for min, max of C integer data types
#include <assert.h>       // assert
#include <string.h>       // strcmp

// include declarations for functions in binary_convert.c
#include "binary_convert.h"

/** TODO TASK 1:
    * Write print statements to print the max values and sizes of each unsigned
    * integer type (short, int, long), based on the example of unsigned char.
    * 
    * References: printf format specifier, limits.h
    */
void utype_sizes() {

	printf("unsigned char | max: %hhu | size: %zu\n", 
	    (unsigned char) UCHAR_MAX,
	    sizeof(unsigned char));
}

/** TODO TASK 2:
    * Write a function called 'stype_sizes()' to print the *min and max* values
    * of each signed integer type (char, short, int, long), based on similar to
    * the function above.
    * 
    * References: printf format specifier, limits.h
    */



/** TODO TASK 3:
    * Fill in the body of the function so that it prints both the hex *and*
    * binary values for all values represented by and unsigned char.
    * This will encompass hex values from 0x00 to 0xFF
    *
    * References: binary_convert.c, printf format specifier for print hex and
    * strings
    */
void print_all_pos_bytes() {

    // Loop counter, to be turned to binary and hex
    unsigned char i;
    
    // String variable to contain binary string
    char *bin_str; 

    printf("\nUNSIGNED CHARS IN HEX AND BINARY\n\n");      // a header line

    for(i=0x00; i<=0xFF; i++) {              // no need to change this

	/* TODO: add to this print statement to print both hex and binary
	 * Try also:
	 * - printing the hex value in uppercase!
	 * - Adding padding so that the spacing is consistent!
	 *
	 * Make sure you use bin_str!
	 */
	
	printf("Decimal: %hhu | Hex:  | Binary:  \n",
	  i
	  );

	// We need this to manage memory--remember that each memory allocation
	// requires a matching free()!
	free(bin_str);

	// DO NOT REMOVE THIS:
	if (i == 0xFF) break;
	// Remember our good friend overflow?

    }
}

int main() {

    // TASK 1: function call
    utype_sizes();
    
    // TASK 2: place your function call here


    // TASK 3: uncomment to test your function!
    //print_all_pos_bytes();

    return 0;
}

/*  Vocab tool for different study books by Patrick Pedersen (ctx.xda@gmail.com) */

/*
 * The following books are currently supported
 * 
 * Test-book 
 *
*/

#include "vocabtool.h"

// Set variables that convert the cmdline paramaters from main into public variables
string book_cmdline;	// for book selection
string lesson_cmdline;	// for lesson selection
string word_cmdline;	// for word selection

int main (int argc, char *argv[])
{
	// Convert cmdline parameters to work with any function that is local in main
	book_cmdline = argv[1];	// convert parameter 1 to book_cmdline
	lesson_cmdline = argv[2];	// convert parameter 2 to lesson_cmdline
	word_cmdline = argv[3];	// convert parameter 3 to word_cmdline
	search(); // Start search function
}


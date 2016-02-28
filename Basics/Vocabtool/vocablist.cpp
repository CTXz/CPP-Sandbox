/* Patrick Pedersen (ctx.xda@gmail.com) */

#include <iostream>
#include "vocabtool.h"

void search()
{
	if (book_cmdline == "test-book")	// Add test-book here
	{
		if (lesson_cmdline == "1")
		{
			if (word_cmdline == "ayylmao"){cout << "hello world" << endl;}
			else if (word_cmdline == "kek"){cout << "lol" << endl;}
			else	{cout << "sorry, this word isn't present" << endl;}	// If the word doesn't exist, it will output "sorry, this word isn't present"
		}
		else 
		{
			cout << "sorry, this lesson isn't present" << endl;	// If the lesson doesn't exist, it will output "sorry, this lesson isn't present"
		}
	}	// End test-book here
	else
	{
		cout << "sorry, this book isn't supported" << endl;	// If the book doesn't exist, it will output "sorry, this book isn't supported"
	}
}

/*
 * Phone Specs Tool by CTXz (ctx.xda@gmail.com)
 */

#include <iostream>

#include "phonetool.h"

using namespace std;

string space = " ";

/* Input related strings */
string input_phone;
string menu_input;

string *menu_input_ptr = &menu_input;

/* Menu related loop strings */
int *loop1_choice = new int;
int *loop = new int (1);
int *loop2 = new int (0);


bool *device_exists = new bool;	//Check if device exist in source code. If not, then it will skip all devices and trigger the device doesn't exist function.

/* Specs output function. phone_name gets replace by the parameter which is defined by a object (the phone model in this case) */
void out_phone (phone phone_name)
{
	cout << "Name : " << phone_name.name << endl;
	
	cout << "Brand : " << phone_name.brand << endl;
	
	cout << "Codename : " << phone_name.codename << endl;
	
	cout << "Model : " << phone_name.model << endl;

	cout << "Available colors : " << phone_name.color << endl;
			
	cout << "Operating System : " << phone_name.os << endl;
		
	cout << "Chipset  : " << phone_name.chipset << endl;
	
	cout << "CPU : " << phone_name.cpu <<
	endl;
	
	cout << "Battery in mAh : " << phone_name.battery << endl;
	
	cout << "Device type : " <<
	phone_name.type << endl;
	
	cout << "Size in inches : " << phone_name.size << endl;
}

/* Device not exist function */
void device_not_exist ()
{
	if (*device_exists != true || *device_exists == false)
	{
		cout << "Sorry, this device doesn't exist in the database. Make sure that you entered the exact model number" << endl;
	}
	*device_exists = false;
}

/* Search function that will run all give functions inside it */
void search_phone(string selected_phone)
{
	G800F(selected_phone);
	T710(selected_phone);
	device_not_exist();	// If all functions above are not present, it will run trough this code.
}

/* Main starts here */
int main ()
{
	
	cout << "Phone Specs Tool by CTXz" << endl;
	
	/* Menu starts here */
	while (*loop > 0)
	{
		 cout << endl << "1. Search phone by model" << endl << "0. Exit " << endl << "Select Option : ";
		 
		 cin >> *loop1_choice;	//	Check if option 1. has been chosen.
		 		 
		  if (*loop1_choice == 1)
		  {
		  	*loop2 = 1;	// If 1. has been selected, deference to heap 1.
		  }
		  
		  if (*loop1_choice == 0)
		  {
		  	break;	// If option 0 has been selected, break the loop and exit the application.
		  }
		   
	    if (*loop2 == 1);	// If deferenced heap of *loop2 is 1 / Line 113 has passed, run option 1.
		{
			cout << "Enter Phone : ";
			cin >> input_phone;	// Model number gets stored into input_phone.
			cout << endl;
		search_phone(input_phone);	// Finally, execute the the search_phone function with the input_phone string.
		}	
	}
}

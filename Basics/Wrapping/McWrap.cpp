/* Me working on wrappers */
/* Yes these are usefull when working on android */
/* WARNING: You might get hungry after running this or reading the source code */

#include <iostream>

using namespace std;

/* Define class */
class wrap
{
	public :
		
		enum food {meat, salad, tomatoes, mayonaise}; // Make enumaration food
		
		wrap (wrap::food recipe); // Prototype constructor with type/enum food parameter
		
		/* Function to output enums into strings */
		string unwrap ()
		{
			cout << "let's unwrap this thing" << endl;
			
			/* Switch Statement that outputs if recipe fits with the case */
			switch (recipe)
			{
				case meat : return "mmm... Fresh meat";
				case salad : return "Salad. So this thing is healthy, right?";
				case tomatoes : return "Tomatoes... get them out of here!";
				case mayonaise : return "Mayonaise! But I need to stay fit!";
				default : return "Unfortunately this isn't stuffed into the wrap";
			}
		}
		
		food recipe; // Define variable recipe of type/enum food
		
};

/* Class wrap constructor */		
wrap::wrap(wrap::food foodrecipe)
{
	recipe = foodrecipe; // Trick to be able to define object of wrap with enum from wrap
}
		
int main ()
{
	wrap inside = wrap::meat; // Define object as enum meat
	cout << inside.unwrap() << endl; // Run switch function
	return 0;
}

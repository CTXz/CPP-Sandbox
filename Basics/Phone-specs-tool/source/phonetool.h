#include <iostream>

using namespace std;

/* Model pone class */
class phone
{
	public:
	string color;
	string os;
	string type;	
	string brand;
	string name;
	string chipset;
	string cpu;
	string model;
	string codename;
	float size;
	int battery;
};

extern bool *device_exists;

void out_phone (phone phone_name); // Call out_phone prototype for specs.cpp

/* Samsung */
void G800F (string selected_phone);	// Samsung Galaxy S5 mini LTE
void T710 (string selected_phone);	// Samsung Galaxy Tab S2 8.0 Wifi

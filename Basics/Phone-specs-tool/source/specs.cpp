#include <iostream>

#include "phonetool.h"

using namespace std;

enum supported_vendors {Samsung};	// Add supported vendors here for organization purpouses.

/* Check if vendor is supported */
void call_phone (supported_vendors call_brand, phone call_phonename)
{
	/*Supported vendors*/
	if (call_brand == Samsung)
	{
		out_phone (call_phonename);	// Call out_phone function
	}
}
	
/* Samsung */

/* Samsung Galaxy S5 mini LTE */
void G800F (string selected_phone)
{
	if (selected_phone == "SM-G800F")
	{
	 
	phone G800F;

	G800F.name = "Samsung Galaxy S5 Mini LTE";
	G800F.brand = "Samsung";
	G800F.codename = "kminilte";
	G800F.model = "SM-G800F";
	G800F.color = "black, white, blue, gold";
	G800F.os = "Android 4.4.2 KitKat";
	G800F.chipset = "Exynos 3470";
	G800F.cpu = "1.4 GHz quad-core Cortex-A7";
	G800F.battery = 2100;
	G800F.type = "Phone";
	G800F.size = 4.5;

	*device_exists = true;

	call_phone(Samsung, G800F);
	}
}

/* Samsung Galaxy Tab S2 8.0 Wifi*/
void T710 (string selected_phone)
{
	if (selected_phone == "SM-T710")
	{
	 
	phone T710;

	T710.name = "Samsung Galaxy Tab S2 8.0 Wifi";
	T710.brand = "Samsung";
	T710.codename = "gts28wifi";
	T710.model = "SM-T710";
	T710.color = "black, white";
	T710.os = "Android 5.0.2 Lollipop (Upgradable to 5.1.1)";
	T710.chipset = "Exynos 5433";
	T710.cpu = "1.9 GHz quad-core Cortex-A57 + 1.3 GHz quad-core ARM Cortex-A53";
	T710.battery = 4000;
	T710.type = "Tablet";
	T710.size = 8.0;

	*device_exists = true;

	call_phone(Samsung, T710);
	}
}

#include "Graphics.h"
#include "panel.h"
#include "EventEngine.h"
#include "Control.h"
#include <iostream>

using namespace std;


int main(int argc, char** argv)
{
	
	INPUT_RECORD recordIn;
	EventEngine e;
	Control c;
	cout << "[####################################### Walcome to the Customer Form ################################] " << endl;
	panel L(1, 1, 100, 40);
	L.ActivateObjects();

	e.run(c);
	


}
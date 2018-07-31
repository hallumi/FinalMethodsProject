#pragma once
#include <string>
#include "Control.h"
#include "Graphics.h"

class TextBox : public Control
{

private:
	int width, height;
	int left, bottom;

public:

	TextBox(int left, int bottom, int width, int height) ;
	


	//void draw(int left, int bottom,  int width, int height);

	
	~TextBox();
};


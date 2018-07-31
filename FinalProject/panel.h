#pragma once
#include "Control.h"
#include "Graphics.h"
#include "EventEngine.h"
#include "TextBox.h"




class panel : public Control
{

private:

	int width, height;

public:
	panel(int x, int y, int width, int height);
	void ActivateObjects();
	~panel();
	// getters and setters

	/*void setHeight(int height) { this->height = height; }
	void setWidth(int width) { this->width = width; }
	int getWidth() {return width;}
	int getHeight() {return height;}*/




};

	

	
	


	








#pragma once
#include "Control.h"
#include "Graphics.h"
#include "EventEngine.h"
#include <vector>
#include <string>

class Label: public Control ,public Graphics
{
private:
	int _left, _bottom, _width, _height;

public:
	Label(int left, int bottom, int width, int height);
	~Label();

	//void draw(Graphics& g, int x, int y);
};


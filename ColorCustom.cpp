#include "ColorCustom.h"
#include <vector>

// create the color
ColorCustom::ColorCustom() {
	colorComponents = std::vector<double>();
	colorComponents.push_back(0.5);
	colorComponents.push_back(0.5);
	colorComponents.push_back(0.5);
	colorComponents.push_back(1.0);
}

// delete the color
ColorCustom::~ColorCustom()
{
}

// gets vector of the color components
std::vector<double>* ColorCustom::getColorComponents()
{

	return &colorComponents;
}

// set the red color component value
void ColorCustom::setRed(double newValue) {
	if (newValue < 0.0) {
		newValue = 0.0;
	}
	else if (newValue > 1.0) {
		newValue = 1.0;
	}
	colorComponents[0] = newValue;
}

// set the green color component value
void ColorCustom::setGreen(double newValue) {
	if (newValue < 0.0) {
		newValue = 0.0;
	}
	else if (newValue > 1.0) {
		newValue = 1.0;
	}
	colorComponents[1] = newValue;
}

// set the blue color component value
void ColorCustom::setBlue(double newValue) {
	if (newValue < 0.0) {
		newValue = 0.0;
	}
	else if (newValue > 1.0) {
		newValue = 1.0;
	}
	colorComponents[2] = newValue;
}

// set the alpha component value
void ColorCustom::setAlpha(double newValue) {
	if (newValue < 0.0) {
		newValue = 0.0;
	}
	else if (newValue > 1.0) {
		newValue = 1.0;
	}
	colorComponents[3] = newValue;
}

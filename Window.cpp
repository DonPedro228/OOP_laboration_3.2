#define CRT_SECURE_NO_WARNINGS
#include "Window.h"
#include <string>
#include <iostream>
#include <sstream>
using namespace std;

Window::Window() : Top_L_X(0), Top_L_Y(0), Bottom_R_X(100), Bottom_R_Y(100)
{
	bg_color = new char[strlen("White") + 1];
	strcpy_s(bg_color, strlen("White") + 1, "White");
}

Window::Window(int tlX, int tlY, int brX, int brY, const char* bgColor) : Top_L_X(tlX), Top_L_Y(tlY), Bottom_R_X(brX), Bottom_R_Y(brY)
{
	bg_color = new char[strlen(bgColor) + 1];
	strcpy_s(bg_color, strlen(bgColor) + 1, bgColor);
}

Window::~Window() {
	delete[] bg_color; 
}

void Window::set_Background_Color(const char* BG_color)
{
	delete[] bg_color;
	bg_color = new char[strlen(BG_color) + 1];
	strcpy_s(bg_color, strlen(BG_color) + 1, BG_color);
}

istream& operator >>(istream& in, Window& window)
{
	cout << "Enter top left X coordinate: "; in >> window.Top_L_X;
	cout << "Enter top left Y coordinate: "; in >> window.Top_L_Y;
	cout << "Enter bottom right X coordinate: "; in >> window.Bottom_R_X;
	cout << "Enter bottom right Y coordinate: "; in >> window.Bottom_R_Y;

	cout << "Enter background color: "; in >> window.bg_color;

	return in;
}

ostream& operator << (ostream& out, const Window& window)
{
	out << "Top left Coordinate: (" << window.Top_L_X << ", " << window.Top_L_Y << ") " << endl;
	out << "Bottom Right Coordinate: (" << window.Bottom_R_X << ", " << window.Bottom_R_Y << ") " << endl;
	out << "Background Color: " << window.bg_color << endl;
	return out;
}

Window::operator string() const
{
	stringstream ss;
	ss << string(bg_color) << endl;
	return ss.str();
}


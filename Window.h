#pragma once
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class Window
{
protected:
	int Top_L_X;
	int Top_L_Y;
	int Bottom_R_X;
	int Bottom_R_Y;
	char* bg_color;
public:
	Window();
	Window(int tlX, int tlY, int brX, int brY, const char* bgColor);
	~Window();


	int get_Top_L_X() const
	{
		return Top_L_X;
	}
	int get_Top_L_Y() const
	{
		return Top_L_Y;
	}
	int get_Bottom_R_X() const
	{
		return Bottom_R_X;
	}
	int get_Bottom_R_Y() const
	{
		return Bottom_R_Y;
	}
	const char* get_bg_color() const
	{
		return bg_color;
	}

	void set_Top_L_X(int t_l_x)
	{
		Top_L_X = t_l_x;
	}
	void set_Top_L_Y(int t_l_y)
	{
		Top_L_Y = t_l_y;
	}
	void set_Bottom_R_X(int b_r_x)
	{
		Bottom_R_X = b_r_x;
	}
	void set_Bottom_R_Y(int b_r_y)
	{
		Bottom_R_Y = b_r_y;
	}

	void set_Background_Color(const char* BG_color);
	friend istream& operator >>(istream& in, Window& window);
	friend ostream& operator<<(ostream& out, const Window& window);
	
	operator string() const;
};
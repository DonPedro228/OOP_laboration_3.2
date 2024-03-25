#pragma once
#include "Window.h"
#include <string>
using namespace std;

class Menu_W : public Window
{
private:
	string menu;
public:
	Menu_W();
	Menu_W(int tlX, int tlY, int brX, int brY, const char* bgColor, const string& m);
	~Menu_W();

	const string& get_Menu() const { return menu; }
	void set_menu(const string& m) { menu = m; }
	void set_Background_Color(const char* bgColor);
	friend ostream& operator<<(ostream& out, const Menu_W& window);
};
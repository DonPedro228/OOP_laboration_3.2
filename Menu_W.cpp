#include "Menu_W.h"
#include <string>
#include <iostream>
using namespace std;

Menu_W::Menu_W() : Window(), menu("Default Menu") {}

Menu_W::Menu_W(int tlX, int tlY, int brX, int brY, const char* bgColor, const std::string& m)
    : Window(tlX, tlY, brX, brY, bgColor), menu(m) {}

Menu_W::~Menu_W() {}

ostream& operator<<(std::ostream& out, const Menu_W& window) {
    out << "Top left Coordinate: (" << window.get_Top_L_X() << ", " << window.get_Top_L_Y() << ")" << endl;
    out << "Bottom Right Coordinate: (" << window.get_Bottom_R_X() << ", " << window.get_Bottom_R_Y() << ")" << endl;
    out << "Background Color: " << window.get_bg_color() << endl;
    out << "Menu: " << window.menu << endl;
    return out;
}

void Menu_W::set_Background_Color(const char* bgColor) {
    Window::set_Background_Color(bgColor);
}
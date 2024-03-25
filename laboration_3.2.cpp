#include "Menu_W.h"
#include <iostream>
using namespace std;

int main() {

	Window w;
	cout << "Input W: " << endl; cin >> w;
	cout << w << endl;



	Menu_W w2;
	cout << "Change W" << endl; cin >> w2;
	string new_menu;
	cout << "Input new string menu: " << endl;
	cin >> new_menu;
	w2.set_menu(new_menu);
	cout << w2 << endl;


	return 0;
}
#include <gtkmm.h>
#include <iostream>
#include "BombClockWindow.h"

BombClockWindow::BombClockWindow()
{
	set_title("Bomb Clock");

	_grid = Gtk::Grid();
	add(_grid);

	_timemenu = Gtk::Entry();
	_timemenu.set_text("6:00:00");
	_datemenu = Gtk::Entry();
	_datemenu.set_text("TOMORROW BITCH");
	_timeuntil = Gtk::Label("Umm idk\nDISARMED");
	_armButton = Gtk::Button("Arm");

	_grid.attach(_timemenu, 0, 0, 1, 1);
	_grid.attach(_datemenu, 1, 0, 1, 1);
	_grid.attach(_timeuntil, 0, 1, 2, 1);
	_grid.attach(_armButton, 0, 2, 2, 1);

	show_all_children();
}

BombClockWindow::~BombClockWindow()
{
}

void BombClockWindow::armedToggled()
{

}

void BombClockWindow::windowClosed()
{

}

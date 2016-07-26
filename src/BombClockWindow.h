#ifndef BOMBCLOCK_H
#define BOMBCLOCK_H

#include <gtkmm.h>

class BombClockWindow : public Gtk::Window
{
public:
	BombClockWindow();
	virtual ~BombClockWindow();
	Gtk::Grid _grid;
	Gtk::Entry _timemenu;
	Gtk::Entry _datemenu;
	Gtk::Label _timeuntil;
	Gtk::Button _armButton;
private:
	void armedToggled();
	void windowClosed();
};

#endif

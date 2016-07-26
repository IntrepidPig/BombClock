#include <gtkmm.h>

class BombClockWindow : public Gtk::Window
{
private:
	void initUI();
	void armedToggled()
public:
	BombClockWindow();
}

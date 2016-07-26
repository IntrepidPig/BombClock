#include <iostream>
#include <gtkmm.h>
#include "BombClockWindow.h"
#include <thread>
#include <gtkmm/application.h>

int main(int argc, char *argv[])
{
	auto app = Gtk::Application::create(argc, argv, "org.gtkmm.examples.base");

	BombClockWindow window;

	return app->run(window);
}

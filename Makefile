all:
	g++ -g -c -o bin/BombClock.o src/BombClock.cpp `pkg-config gtkmm-3.0 --cflags --libs`
	g++ -g -c -o bin/BombClockWindow.o src/BombClockWindow.cpp `pkg-config gtkmm-3.0 --cflags --libs`
	g++ -g -o bin/BombClock bin/BombClock.o bin/BombClockWindow.o `pkg-config gtkmm-3.0 --libs`

	rm bin/BombClock.o
	rm bin/BombClockWindow.o

all:
	g++ src/BombClock.cpp -o bin/bombclock `pkg-config gtkmm-3.0 --cflags --libs`

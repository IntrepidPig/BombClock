all:
	echo "Compiling..."
	g++ -g -c -o bin/BombClock.o src/BombClock.cpp `pkg-config gtkmm-3.0 --cflags --libs`
	echo "Yay made it past that"
	g++ -g -c -o bin/BombClockWindow.o src/BombClockWindow.cpp `pkg-config gtkmm-3.0 --cflags --libs`
	echo "Alrighty lets keep the streak going"
	g++ -g -o bin/BombClock bin/BombClock.o bin/BombClockWindow.o `pkg-config gtkmm-3.0 --libs`
	echo "Damn we did it!"
	rm bin/BombClock.o
	rm bin/BombClockWindow.o
	echo "Look, I cleaned up after myself! Take notes."

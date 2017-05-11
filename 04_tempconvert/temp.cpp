#include <iostream>
#include <stdlib.h>

using namespace std;

int x, y;
int main( int argc, char *argv[] ) {
	x = atoi(argv[1]);
	y = (x * 9/5) + 32;
	cout << x << " Celsius converts to..." <<  y << " Fahrenheit" << endl;
	return 0;
}

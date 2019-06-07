#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <ctime>
#include <cstdlib>
#include <typeinfo>
#include "Funciones.h"
using namespace std;



int main() {
	int Selec;
	char M_ingles[7][7] = { {' ',' ','O','O','O',' ',' '},
							{' ',' ','O','O','O',' ',' '},
							{'O','O','O','O','O','O','O'},
							{'O','O','O','+','O','O','O'},
							{'O','O','O','O','O','O','O'},
							{' ',' ','O','O','O',' ',' '},
							{' ',' ','O','O','O',' ',' '}};

	char M_aleman[9][9] = { {' ',' ',' ','O','O','O',' ',' ',' '},
							{' ',' ',' ','O','O','O',' ',' ',' '},
							{' ',' ',' ','O','O','O',' ',' ',' '},
							{'O','O','O','O','O','O','O','O','O'},
							{'O','O','O','O','+','O','O','O','O'},
							{'O','O','O','O','O','O','O','O','O'},
							{' ',' ',' ','O','O','O',' ',' ',' '},
							{' ',' ',' ','O','O','O',' ',' ',' '},
							{' ',' ',' ','O','O','O',' ',' ',' '}};

	char M_frances[7][7] = {{' ',' ','O','O','O',' ',' '},
							{' ','O','O','O','O','O',' '},
							{'O','O','O','+','O','O','O'},
							{'O','O','O','O','O','O','O'},
							{'O','O','O','O','O','O','O'},
							{' ','O','O','O','O','O',' '},
							{' ',' ','O','O','O',' ',' '} };
	Selec = Menu();
	switch (Selec) {
	case 1:
		Juego_Frances(M_frances);
		break;
	case 2:
		Juego_Aleman(M_aleman);
		break;
	case 3:
		Juego_Ingles(M_ingles);
		break;
	case 0:
		return 0;
		break;
	}
}
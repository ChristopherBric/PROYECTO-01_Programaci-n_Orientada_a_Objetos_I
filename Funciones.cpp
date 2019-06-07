//
// Created by Christopher on 23/04/2019.
//
#include <iostream>
#include "Funciones.h"
using namespace std;

int Menu() {
	int Selec;
	cout << "  Menu - Juego senku" << endl;
	cout << "  ----------------------------" << endl;
	cout << "  1. Estilo Frances" << endl;
	cout << "  2. Estilo Aleman" << endl;
	cout << "  3. Estilo Ingles" << endl;
	cout << "  ----------------------------" << endl;
	cout << "  0. Salir del programa" << endl << endl;
	cout << "     Seleccionar la opcion:" << endl;
	cin >> Selec;
	switch (Selec) {
	case 1:case 2:case 3:case 0:
		return Selec;
		break;
	default:
		cout << "   ***********************\n";
		cout << "   * > Opcion invalida < *\n";
		cout << "   ***********************\n\n";
		Menu();
	}
}

//INGLES
int Juego_Ingles(char Matriz[7][7]) {
	int ZZZ = 0, Cont1, Cont2,Xi,Yi,Xf,Yf;
	while(ZZZ != 1) {
		for (int i = 1; i <= 7; i++) { cout << "  " << i << "   "; }
		cout << endl;
		for (int y = 1; y <= 7; y++) {
			cout << (y) << " ";
			switch (y) {
			case 1:case 2:case 6:case 7:
				Cont1 = 2;
				break;
			default:
				Cont1 = 6;
			}
			for (int x = 1; x <= 7; x++) {
				cout << Matriz[y - 1][x - 1];
				if (Matriz[y - 1][x - 1] == ' ') {
					cout << "     ";
				}
				else if (Cont1 > 0) {
					cout << "-----";
					Cont1--;
				}
			}
			if (y != 7) {
				cout << endl << "  ";

				switch (y) {
				case 1:case 2:case 5:case 6:
					Cont2 = 3;
					cout << "            ";
					break;
				default:
					Cont2 = 7;
				}
				for (int k = 1; k <= Cont2; k++) {
					cout << "|     ";
				}
			}
			cout << endl;
		}
		//En proceso (Moviento) >>>
		bool V1 = true;
		while (V1 == true) {
			cout << endl << "Ingrese la posicion de origen (fila, columna): " << endl;
			cin >> Yi >> Xi;
			if (Matriz[Yi - 1][Xi - 1] == 'O') {
				V1 = false;
			}
			else { cout << ">>>Movimiento invalido<<<" << endl; }
		}
		V1 = true;
		while (V1 == true) {
			cout << "Ingrese la posicion de destino (fila, columna): " << endl;
			cin >> Yf >> Xf;
			if (Matriz[Yf - 1][Xf - 1] == '+') {
				if (Xi + 2 == Xf || Xi - 2 == Xf || Xi == Xf) {
					if (Yi + 2 == Yf || Yi - 2 == Yf || Yi == Yf) {
						V1 = false;
					}
				}
			}
			else { cout << ">>>Movimiento invalido<<<" << endl; }
		}
		V1 = true;
		Matriz[Yi - 1][Xi - 1] = '+';
		Matriz[Yf - 1][Xf - 1] = 'O';
		if (Yi == Yf) {
			if (Xf > Xi) {
				Matriz[Yi - 1][Xi] = '+';
			}
			else if (Xf < Xi) {
				Matriz[Yi - 1][Xi - 2] = '+';
			}
		}
		if (Xi == Xf) {
			if (Yf > Yi) {
				Matriz[Yi][Xi - 1] = '+';
			}
			else if (Yf < Yi) {
				Matriz[Yi - 2][Xi - 1] = '+';
			}
		}

		// <<< En proceso (Movimiento)
	}
	return 0;
}


//ALEMAN
int Juego_Aleman(char Matriz[9][9]) {
	int ZZZ = 0, Cont1, Cont2, Xi, Yi, Xf, Yf;
	while (ZZZ != 1) {
		for (int i = 1; i <= 9; i++) { cout << "  " << i << "   "; }
		cout << endl;
		for (int y = 1; y <= 9; y++) {
			cout << (y) << " ";
			switch (y) {
			case 1:case 2:case 3:case 7:case 8:case 9:
				Cont1 = 2;
				break;
			default:
				Cont1 = 8;
			}
			for (int x = 1; x <= 9; x++) {
				cout << Matriz[y - 1][x - 1];
				if (Matriz[y - 1][x - 1] == ' ') {
					cout << "     ";
				}
				else if (Cont1 > 0) {
					cout << "-----";
					Cont1--;
				}
			}
			if (y != 9) {
				cout << endl << "  ";

				switch (y) {
				case 1:case 2:case 3:case 6:case 7:case 8:
					Cont2 = 3;
					cout << "                  ";
					break;
				default:
					Cont2 = 9;
				}
				for (int k = 1; k <= Cont2; k++) {
					cout << "|     ";
				}
			}
			cout << endl;
		}
		//En proceso (Moviento) >>>
		bool V1 = true;
		while (V1 == true) {
			cout << endl << "Ingrese la posicion de origen (fila, columna): " << endl;
			cin >> Yi >> Xi;
			if (Matriz[Yi - 1][Xi - 1] == 'O') {
				V1 = false;
			}
			else { cout << ">>>Movimiento invalido<<<" << endl; }
		}
		V1 = true;
		while (V1 == true) {
			cout << "Ingrese la posicion de destino (fila, columna): " << endl;
			cin >> Yf >> Xf;
			if (Matriz[Yf - 1][Xf - 1] == '+') {
				if (Xi + 2 == Xf || Xi - 2 == Xf || Xi == Xf) {
					if (Yi + 2 == Yf || Yi - 2 == Yf || Yi == Yf) {
						V1 = false;
					}
				}
			}
			else { cout << ">>>Movimiento invalido<<<" << endl; }
		}
		V1 = true;
		Matriz[Yi - 1][Xi - 1] = '+';
		Matriz[Yf - 1][Xf - 1] = 'O';
		if (Yi == Yf) {
			if (Xf > Xi) {
				Matriz[Yi - 1][Xi] = '+';
			}
			else if (Xf < Xi) {
				Matriz[Yi - 1][Xi - 2] = '+';
			}
		}
		if (Xi == Xf) {
			if (Yf > Yi) {
				Matriz[Yi][Xi - 1] = '+';
			}
			else if (Yf < Yi) {
				Matriz[Yi - 2][Xi - 1] = '+';
			}
		}

		// <<< En proceso (Movimiento)
	}
	return 0;
}


//FRANCES	
int Juego_Frances(char Matriz[7][7]) {
	int ZZZ = 0, Cont1, Cont2, Xi, Yi, Xf, Yf;
	while (ZZZ != 1) {
		for (int i = 1; i <= 7; i++) { cout << "  " << i << "   "; }
		cout << endl;
		for (int y = 1; y <= 7; y++) {
			cout << (y) << " ";
			switch (y) {
			case 1:case 7:
				Cont1 = 2;
				break;
			case 2:case 6:
				Cont1 = 4;
				break;
			default:
				Cont1 = 6;
			}
			for (int x = 1; x <= 7; x++) {
				cout << Matriz[y - 1][x - 1];
				if (Matriz[y - 1][x - 1] == ' ') {
					cout << "     ";
				}
				else if (Cont1 > 0) {
					cout << "-----";
					Cont1--;
				}
			}
			if (y != 7) {
				cout << endl << "  ";

				switch (y) {
				case 1:case 6:
					Cont2 = 3;
					cout << "            ";
					break;
				case 2:case 5:
					Cont2 = 5;
					cout << "      ";
					break;
				default:
					Cont2 = 7;
				}
				for (int k = 1; k <= Cont2; k++) {
					cout << "|     ";
				}
			}
			cout << endl;
		}
		//En proceso (Moviento) >>>
		bool V1 = true;
		while (V1 ==true) {
			cout << endl << "Ingrese la posicion de origen (fila, columna): " << endl;
			cin >> Yi >> Xi;
			if (Matriz[Yi - 1][Xi - 1] == 'O') {
				V1=false;
			}
			else { cout << ">>>Movimiento invalido<<<" << endl; }
		}
		V1 = true;
		while (V1 ==true) {
			cout << "Ingrese la posicion de destino (fila, columna): " << endl;
			cin >> Yf >> Xf;
			if (Matriz[Yf - 1][Xf - 1] == '+') {
				if (Xi + 2 == Xf|| Xi - 2 == Xf ||Xi==Xf){
					if (Yi + 2 == Yf || Yi - 2 == Yf||Yi==Yf) {
						V1 = false;
					}
				}
			}
			else { cout << ">>>Movimiento invalido<<<" << endl; }
		}
		V1 = true;
		Matriz[Yi - 1][Xi - 1] = '+';
		Matriz[Yf - 1][Xf - 1] = 'O';
		if (Yi == Yf) {
			if (Xf > Xi) {
				Matriz[Yi - 1][Xi] = '+';
			}
			else if (Xf<Xi) {
				Matriz[Yi - 1][Xi - 2] = '+';
			}
		}
		if (Xi == Xf) {
			if (Yf > Yi) {
				Matriz[Yi][Xi - 1] = '+';
			}
			else if (Yf < Yi) {
				Matriz[Yi-2][Xi - 1] = '+';
			}
		}

		// <<< En proceso (Movimiento)
	}
	return 0;
}

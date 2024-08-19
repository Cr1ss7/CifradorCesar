#include <iostream>
#include <string>

using namespace std;

char desplazador(char l1, char t) {
	int ValorASCII = static_cast<int>(l1);
	if(t == 'c')
		ValorASCII += 2;
	else
		ValorASCII -= 2;
	char CharNuevo = static_cast<char>(ValorASCII);
	return CharNuevo;
}

string cifradorCesar(string data, int t) {
	bool bandera = false;
	int i = 0;
	string dataN = "";
	switch (t)
	{
	case 1:
		while (bandera == false) {
			if (data[i] != '\s' && data[i] == '\0')
				bandera = true;
			else
				dataN += desplazador(data[i],'c');
				i++;
		}
		break;
	case 2:
		while (bandera == false) {
			if (data[i] != '\s' && data[i] == '\0')
				bandera = true;
			else
				dataN += desplazador(data[i],'d');
				i++;
		}
		break;
	}
	return dataN;
}


//Funcion principal
int main() {
	string dato;
	int i;
	bool state = false;
	while (state == false) {
		cout << ("Que desea realizar?\n\t1. Cifrar\n\t2. Descifrar\n\t3. Salir\n");
		cin >> i;
		switch (i)
		{
		case 1:
			cout << ("Dijite el texto a cifrar\n");
			cin >> dato;
			cout << ("El dato cifrado es:\n");
			cout << (cifradorCesar(dato, 1))+"\n\n";
			break;
		case 2:
			cout << ("Dijite el texto a descrifrar\n");
			cin >> dato;
			cout << ("El dato descifrado es:\n");
			cout << (cifradorCesar(dato, 2))+"\n\n";
			break;
		case 3:
			cout << "saliendo del programa.";
		default:
			cout << "Seleccione un valor valido";
			state = true;
			break;
		}
	}
	return 0;
}



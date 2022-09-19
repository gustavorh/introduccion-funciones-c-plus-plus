#include <time.h>
#include <iostream>

using namespace std;

double calcular_uf(int);
bool calcular_factibilidad(int, int, bool, bool);

double valor_uf = 30052.36;

int main() {
	int valor_pesos = 0;
	int sueldo = 0;
	bool nueva = true;
	bool casa_departamento = true;
	
	cout << "Introduce el valor en pesos de la vivienda: "; cin >> valor_pesos;
	cout << "Introduce tu sueldo liquido: "; cin >> sueldo;
	cout << "Si es una casa nueva, escribe 1, si es usada, escribe 0: "; cin >> nueva;
	cout << "Si es una casa, escribe 1, si es un departamento, escribe 0: "; cin >> casa_departamento;
	
	double uf = calcular_uf(valor_pesos);
	bool fac = calcular_factibilidad(valor_pesos, sueldo, nueva, casa_departamento);
	
	if(fac) { // Factibilidad
		cout << endl << "¡Felicidades! Su credito fue aprobado, el valor UF de su vivienda es: " << uf << endl;
	} else {
		cout << endl << "Por el momento no es posible atender su requerimiento." << endl;
	}
	system("pause");
}

double calcular_uf(int valor_peso) { // Funcion que calculará el valor en UF de la vivienda, como parametros es valor_pesos
	double total = valor_peso / valor_uf; // Conversion de pesos a UF
	return total; // Devolvemos el valor total en UF
}

bool calcular_factibilidad(int valor_peso, int sueldo, bool nueva, bool casa_departamento) { // Funcion que comprobará la factibilidad del credito hipotecario
	double uf = calcular_uf(valor_peso); // ?????
	int sueldo_30 = sueldo * 30; // Se calcular el 30% del sueldo
	bool credito_aceptado = true; // Se espera la promesa de que el credito siempre sera aprobado, hasta demostrado lo contrario
	
	if (nueva && uf > 1200) { // Si la vivienda es nueva y la UF es mayor a 1200
		if (casa_departamento) { // Si la vivienda es casa (1)
			if (sueldo_30 > 400000) { // Si el 30% del sueldo es mayor a 400.000
				cout << endl << "Credito aprobado" << endl;
			} else { // De lo contrario rechaza
				cout << endl << "Credito rechazado" << endl;
				credito_aceptado = false;
			}
		} else if (sueldo_30 < 300000) { // Si el 30% del sueldo es menor a 300.000
			cout << endl << "Credito aprobado" << endl;
		} else { // De lo contrario rechaza
			cout << endl << "Credito rechazado" << endl;
			credito_aceptado = false;
		}
	} else if (nueva && uf < 1200) { // Si la vivienda es nueva y la UF es mayor
		if (casa_departamento) { // Si la vivienda es casa (1)
			if (sueldo_30 < 200000) { // Si el 30% del sueldol es menor a 200.000
				cout << endl << "Credito aprobado" << endl;
			} else { // De lo contraio rechaza
				cout << endl << "Credito rechazado" << endl;
				credito_aceptado = false;
			}
		} else if (sueldo_30 < 100000) { // Si el 30% del sueldo es mayor a 100.000
			cout << endl << "Credito aprobado" << endl;
		} else { // De lo contrario rechaza
			cout << endl << "Credito rechazado" << endl;
			credito_aceptado = false;
		}
	} else if (!nueva) { // Si la vivienda no es nueva, rechaza
		cout << endl << "El banco no da creditos para viviendas usadas por el momento." << endl;
		credito_aceptado = false;
	}
	// Retorna el estado del credito (aprobado o rechazado, true o false)
	return credito_aceptado;
}

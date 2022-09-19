#include <iostream>

using namespace std;

bool calcular_factibilidad(int, int, bool);

int main() {
	int valor = 0;
	int sueldo = 0;
	bool nuevo = true;
	
	cout << "Introduce el valor del vehiculo: "; cin >> valor;
	cout << "Introduce tu sueldo liquido: "; cin >> sueldo;
	cout << "Si el vehiculo es nuevo, escribe 1. Si el vehiculo es usado, escribe 0: "; cin >> nuevo;
	
	bool fac = calcular_factibilidad(valor, sueldo, nuevo);
	
	if(fac) { // Factibilidad
		cout << endl << "¡Felicidades! Su credito automotriz fue aprobado.";
		cout << endl << "El valor del vehiculo es: " << valor << endl;
	} else { // Si el crédito es rechazado,
		cout << endl << "Lamentablemente su credito automotriz fue rechazado ya que no cumple con los requisitos." << endl;
	}
	system("pause");
}

bool calcular_factibilidad(int valor, int sueldo, bool nuevo) { // Funcion que comprobará la factibilidad del credito automotriz
	int sueldo_30 = sueldo * 30; // Se calcula el 30% del sueldo
	bool credito_aceptado = true; // Se espera la promesa de que el credito siempre sera aprobado, hasta demostrado lo contrario
	
	if (nuevo && valor > 5000000) { // Si el vehiculo es nuevo y el valor es mayor a 5 millones
		if (sueldo_30 > 500000) { // Si el 30% del sueldo es mayor a 500.000
			cout << endl << "Credito aprobado." << endl;
		} else { // De lo contrario, rechaza el crédito
			cout << endl << "Credito rechazado." << endl;
			credito_aceptado = false;
		}
	} else if (nuevo && valor < 5000000) { // Si el vehiculo es nuevo y el valor es menor a 5 millones
		if (sueldo_30 > 350000) { // Si el 30% del sueldo es mayor a 350.000
			cout << endl << "Credito aprobado." << endl;
		} else { // De lo contrario rechaza el crédito
			cout << endl << "Credito rechazado" << endl;
			credito_aceptado = false;
		}
	} else if (!nuevo) { // Si el vehiculo NO es nuevo
		if (sueldo_30 > 200000) { // Si el 30% del sueldo es mayor a 200.000
			cout << "Credito aprobado." << endl;
		} else { // De lo contrario rechaza el crédito
			cout << "Credito rechazado." << endl;
			credito_aceptado = false; 
		}
	}
	// Retorna el estado del credito (aprobado o rechazado, true o false)
	return credito_aceptado;
}

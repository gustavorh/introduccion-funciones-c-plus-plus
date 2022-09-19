#include <time.h>
#include <iostream>

using namespace std;

int calcular_edad(int, int, int, int, int, int);

int main() {
	int diaActual = 0, mesActual = 0, anioActual = 0, diaNacimiento = 0, mesNacimiento = 0, anioNacimiento = 0, edad = 0, edad2 = 0;
	
	// Pedimos la fecha actual
	cout << "Introduce la fecha actual: " << endl;
	cout << "Día: "; cin >> diaActual;
	cout << "Mes: "; cin >> mesActual;
	cout << "A" << (char)164 << "o: "; cin >> anioActual;
	
	// Pedimos la fecha de nacimiento
	cout << "Introduce la fecha de nacimiento: " << endl;
	cout << "Día: "; cin >> diaNacimiento;
	cout << "Mes: "; cin >> mesNacimiento;
	cout << "A" << (char)164 << "o: "; cin >> anioNacimiento;
	
	// Pasamos los valores a la funcion calcular_edad y calculamos la edad
	edad = calcular_edad(diaActual, mesActual, anioActual, diaNacimiento, mesNacimiento, anioNacimiento);
	// Pasamos los valores a la funcion calcular_edad y calculamos la edad al año 2000
	edad2 = calcular_edad(diaActual, mesActual, 2000, diaNacimiento, mesNacimiento, anioNacimiento);
	
	return 0;
}

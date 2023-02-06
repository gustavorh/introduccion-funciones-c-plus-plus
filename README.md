## Introducción
Este código permite calcular la edad de una persona y verificar la factibilidad de un crédito automotriz.

## Funciones
### `calcular_edad`
Calcula la edad de una persona basándose en su fecha de nacimiento y la fecha actual.

Parámetros:
- `diaActual`: Día actual
- `mesActual`: Mes actual
- `anioActual`: Año actual
- `diaNacimiento`: Día de nacimiento
- `mesNacimiento`: Mes de nacimiento
- `anioNacimiento`: Año de nacimiento

Retorno:
- Edad en años.

### `calcular_factibilidad`
Determina la factibilidad de un crédito automotriz basándose en el valor del vehículo, el sueldo de la persona y si el vehículo es nuevo o usado.

Parámetros:
- `valor`: Valor del vehículo
- `sueldo`: Sueldo de la persona
- `nuevo`: Verdadero si el vehículo es nuevo, falso si es usado.

Retorno:
- Verdadero si es factible, falso si no es factible.

## Flujo del código
1. Se pedirá al usuario la fecha actual y su fecha de nacimiento.
2. Se pasarán los valores a la función `calcular_edad` para calcular la edad.
3. Se pedirá al usuario el valor del vehículo, su sueldo y si el vehículo es nuevo o usado.
4. Se pasarán los valores a la función `calcular_factibilidad` para determinar la factibilidad del crédito.
5. Si el crédito es factible, se mostrará un mensaje de éxito. Si no es factible, se mostrará un mensaje de fracaso.

## Consideraciones
- El cálculo de la edad se realiza en años y no tiene en cuenta meses o días.
- La factibilidad del crédito se basa en una regla simplista y puede ser necesario ajustarla en función de cada caso en particular.

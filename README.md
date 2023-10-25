<h1>Simulador Pico 3.1</h1>
<h1>Tabla de contenidos</h1>

1.Simulador pico 3.1\
  *Descripcion\
  *Codigo en C para mensaje "Hola mundo"\
  *Evaluacion\
  *Recursos\
2.Simulador pico 3.3\
  *Descripcion\
  *Reflexion\
  *Codigos\
   -Ejemplo de Hola Mundo en Wokwi\
   -Ejemplo de ASCII-Table de la PICOW via Arduino IDE\
   -Programa que despliegue en su consola via Arduino IDE\
  *Evaluacion\
  *Recursos\
  







<h1>Simulador Pico 3.1</h1>
<h2>Descripcion</h2>
<p>El objetivo de este trabajo es adentrarnos en el mundo de la programación y la electrónica a través del uso de dos herramientas clave: el simulador de Wokwi y el entorno de desarrollo Arduino IDE. En nuestra primera práctica, nos sumergiremos en este emocionante viaje, que comenzará con la creación de un clásico "Hola Mundo" digital.

En primer lugar, es importante entender la relevancia de estas dos herramientas. El simulador de Wokwi nos proporciona un entorno virtual en el que podemos diseñar, construir y probar circuitos electrónicos en tiempo real. Esto nos permite experimentar con conceptos de electrónica sin necesidad de hardware físico, lo que es especialmente útil para principiantes. Por otro lado, el Arduino IDE es el entorno de programación que utilizaremos para escribir y cargar código en nuestro dispositivo Arduino, el cual controlará el comportamiento de nuestros circuitos.</p>

<h2>Codigo en C para mensaje "Hola mundo"</h2>

```C
/*
 * Nombre del Archivo: main.c
 * Autor:   JOCELYN LEYVA GARAY
 * Correo:  L21210388@tectijuana.edu.mx
 * Fecha:   24/10/2023
 * Curso:   Lenguajes de Interfaz, TECNM Campus ITT
 * 
 * Objetivo:
 * Programar el "Hola Mundo" mensaje en la consola serial con el Blink del LED interno
 *
 * Historial de Revisiones:
 * [23/10/2023]        [Jocelyn] - Creado
 * [23/10/2023]        [Jocelyn] - Documentacion y subida de programas
 * 
 * Codigo proporcionado en la clase para visualizar el funcionamiento del simulador de PicoW llamado wokwi, el cual se encuentra en lenguaje C
 */

#include <stdio.h>
#include "pico/stdlib.h"

int main() {
  stdio_init_all();
  while (true) {
    printf("Hola mundo\n");
    sleep_ms(250);
  }
}



//Este codigo nos permite visualizar la programacion del Hardware

{
  "version": 1,
  "author": "Jocelyn Leyva Garay",
  "editor": "wokwi",
  "parts": [
    {
      "type": "board-pi-pico-w",
      "id": "pico",
      "top": 0,
      "left": 0,
      "attrs": { "builder": "pico-sdk" }
    }
  ],
  "connections": [ [ "pico:GP0", "$serialMonitor:RX", "", [] ], [ "pico:GP1", "$serialMonitor:TX", "", [] ] ],
  "dependencies": {}
}

```


<h2>Evaluacion</h2>
-Criterio1: 1100% DEPOSTAR EL URL de su Wokwi funcionando Incluir el templete del código sin el no se recibirán las practicas.

<h2>Recursos</h2>
1.[Recurso 1]Link para Wowi funcionando en C: ( https://wokwi.com/projects/379507925030427649)
________________________________________________________________________________________________________________________________

<h1>Simulador Pico 3.3</h1>
<h2>Descripcion</h2>
<p>El objetivo de este trabajo es adentrarnos en el mundo de la programación y la electrónica a través del uso de dos herramientas clave: el simulador de Wokwi y el entorno de desarrollo Arduino IDE. En nuestra primera práctica, nos sumergiremos en este emocionante viaje, que comenzará con la creación de un clásico "Hola Mundo" digital.

En primer lugar, es importante entender la relevancia de estas dos herramientas. El simulador de Wokwi nos proporciona un entorno virtual en el que podemos diseñar, construir y probar circuitos electrónicos en tiempo real. Esto nos permite experimentar con conceptos de electrónica sin necesidad de hardware físico, lo que es especialmente útil para principiantes. Por otro lado, el Arduino IDE es el entorno de programación que utilizaremos para escribir y cargar código en nuestro dispositivo Arduino, el cual controlará el comportamiento de nuestros circuitos.</p>

<h2>Reflexion</h2>
<p>Desarrollar la actividad que implicaba ejecutar el ejemplo "Hola Mundo" en Wokwi, correr el ejemplo de la ASCII-Table en la PICOW a través 
de la Arduino IDE y elaborar un programa que desplegara información en la consola vía Arduino IDE resultó ser una tarea desafiante en un 
principio. Sin embargo, a medida que fui avanzando, pude comprender la lógica subyacente de cómo utilizar Wokwi y lograr que mi PICOW 
interactuara con la Arduino IDE de manera efectiva.

En primer lugar, incluir el encabezado del templete de microcontroladores fue esencial. Esto no solo aseguraba que tenía un punto de 
partida consistente, sino que también me permitía familiarizarme con las configuraciones iniciales del proyecto y establecer una 
estructura organizada para mi trabajo.

El siguiente paso fue ejecutar el programa a través del templete de Wokwi. Esto requería comprender la plataforma y cómo cargar el
código en el simulador. Fue un proceso que me llevó tiempo y algunas pruebas, pero finalmente logré que el ejemplo "Hola Mundo" 
funcionara en Wokwi. Esto me ayudó a apreciar la importancia de familiarizarse con las herramientas y plataformas que estamos 
utilizando, ya que puede ahorrar mucho tiempo y frustración en el futuro.

Luego, enfrenté el desafío de hacer que el ejemplo de la ASCII-Table se ejecutara en la PICOW a través de la Arduino IDE. 
Esta parte del proceso me hizo darme cuenta de la importancia de la compatibilidad entre las diferentes plataformas y cómo 
configurar adecuadamente el entorno de desarrollo. Tuve que investigar y ajustar configuraciones para lograr que el código 
se cargara y se ejecutara sin problemas.</p>

<h2>Codigos</h2>


<h3>Ejemplo de Hola Mundo en Wokwi</h3>

```C
/*
 * Nombre del Archivo: main.c
 * Autor:   JOCELYN LEYVA GARAY
 * Correo:  L21210388@tectijuana.edu.mx
 * Fecha:   25/10/2023
 * Curso:   Lenguajes de Interfaz, TECNM Campus ITT
 * 
 * Objetivo:
 * Programar el "Hola Mundo" mensaje en la consola serial con el Blink del LED interno
 *
 * Historial de Revisiones:
 * [25/10/2023]        [Jocelyn] - Creado
 * [25/10/2023]        [Jocelyn] - Documentacion y subida de programas
 * 
 * Codigo proporcionado en la clase para visualizar el funcionamiento del simulador de PicoW llamado wokwi, el cual se encuentra en lenguaje C
 */

#include <stdio.h>
#include "pico/stdlib.h"

int main() {
  stdio_init_all();
  while (true) {
    printf("Hola mundo\n");
    sleep_ms(250);
  }
}



//Este codigo nos permite visualizar la programacion del Hardware

{
  "version": 1,
  "author": "Jocelyn Leyva Garay",
  "editor": "wokwi",
  "parts": [
    {
      "type": "board-pi-pico-w",
      "id": "pico",
      "top": 0,
      "left": 0,
      "attrs": { "builder": "pico-sdk" }
    }
  ],
  "connections": [ [ "pico:GP0", "$serialMonitor:RX", "", [] ], [ "pico:GP1", "$serialMonitor:TX", "", [] ] ],
  "dependencies": {}
}

```
<h3>Ejemplo de Poblacion del libro en Wokwi</h3>

```C
/*
 * Nombre del Archivo: poblacion
 * Autor:   JOCELYN LEYVA GARAY
 * Correo:  L21210388@tectijuana.edu.mx
 * Fecha:   25/10/2023
 * Curso:   Lenguajes de Interfaz, TECNM Campus ITT
 * 
 * Objetivo
 *El objetivo del programa es desplegar número de años que se necesitan para que una población inicial se duplique y alcance una población final
 *
 * Historial de Revisiones:
 * [25/10/2023]        [Jocelyn] - Creado
 * [25/10/2023]        [Jocelyn] - Documentacion y subida de programas
 * 
 * Codigo proporcionado en la clase para visualizar el funcionamiento del simulador de PicoW llamado wokwi, el cual se encuentra en lenguaje C
 */

#include <stdio.h>
#include "pico/stdlib.h"
#include <math.h>

int main() {
  stdio_init_all();
  while (true) {
   double poblacionInicial = 3.0;  // Población inicial en millones
    double poblacionFinal = 300.0;  // Población final en millones

    // Calcular los años necesarios
    double a = (poblacionFinal / poblacionInicial) / 2.0;

    printf("Se necesitan %.2f años para que una población de %.2f millones se duplique y alcance %.2f millones.\n", a, poblacionInicial, poblacionFinal);

    return 0;
  }
}

/*
 * Nombre del Archivo: poblacion
 * Autor:   JOCELYN LEYVA GARAY
 * Correo:  L21210388@tectijuana.edu.mx
 * Fecha:   25/10/2023
 * Curso:   Lenguajes de Interfaz, TECNM Campus ITT
 * 
 * Objetivo:
 * Programar que arroja el simulador de wokwi  
 *
 * Historial de Revisiones:
 * [25/10/2023]        [Jocelyn] - Creado
 * [25/10/2023]        [Jocelyn] - Documentacion y subida de programas
 * 
 * Codigo proporcionado en la clase para visualizar el funcionamiento del simulador de PicoW llamado wokwi, el cual se encuentra en lenguaje C
 */

{
  "version": 1,
  "author": "Jocelyn Leyva Garay",
  "editor": "wokwi",
  "parts": [
    {
      "type": "wokwi-pi-pico",
      "id": "pico",
      "top": 0,
      "left": 0,
      "attrs": { "builder": "pico-sdk" }
    }
  ],
  "connections": [ [ "pico:GP0", "$serialMonitor:RX", "", [] ], [ "pico:GP1", "$serialMonitor:TX", "", [] ] ],
  "dependencies": {}
}

```

<h3>Ejemplo de ASCII-Table de la PICOW via Arduino IDE</h3>

```ino
/*
 * Nombre del Archivo: ascii table
 * Autor:   JOCELYN LEYVA GARAY
 * Correo:  L21210388@tectijuana.edu.mx
 * Fecha:   25/10/2023
 * Curso:   Lenguajes de Interfaz, TECNM Campus ITT
 * 
 * Objetivo:
 *El objetivo de este código en Arduino IDE es crear un programa que imprima una tabla ASCII
 *que muestra los valores de bytes de caracteres ASCII en diferentes formatos. La tabla ASCII es
 *una representación de caracteres en el lenguaje de las computadoras,   *donde cada carácter se
 *asocia a un valor numérico (byte). 
 *
 * Historial de Revisiones:
 * [25/10/2023]        [Jocelyn] - Creado
 * [25/10/2023]        [Jocelyn] - Documentacion y subida de programas
 * 
 * Codigo proporcionado en la clase para visualizar el funcionamiento del simulador de PicoW llamado wokwi, el cual se encuentra en lenguaje C
 */


/*
  ASCII table

  Prints out byte values in all possible formats:
  - as raw binary values
  - as ASCII-encoded decimal, hex, octal, and binary values

  For more on ASCII, see http://www.asciitable.com and http://en.wikipedia.org/wiki/ASCII

  The circuit: No external hardware needed.

  created 2006
  by Nicholas Zambetti <http://www.zambetti.com>
  modified 9 Apr 2012
  by Tom Igoe

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/ASCIITable
*/

void setup() {
  //Initialize serial and wait for port to open:
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }

  // prints title with ending line break
  Serial.println("ASCII Table ~ Character Map");
}

// first visible ASCIIcharacter '!' is number 33:
int thisByte = 33;
// you can also write ASCII characters in single quotes.
// for example, '!' is the same as 33, so you could also use this:
// int thisByte = '!';

void loop() {
  // prints value unaltered, i.e. the raw binary version of the byte.
  // The Serial Monitor interprets all bytes as ASCII, so 33, the first number,
  // will show up as '!'
  Serial.write(thisByte);

  Serial.print(", dec: ");
  // prints value as string as an ASCII-encoded decimal (base 10).
  // Decimal is the default format for Serial.print() and Serial.println(),
  // so no modifier is needed:
  Serial.print(thisByte);
  // But you can declare the modifier for decimal if you want to.
  // this also works if you uncomment it:

  // Serial.print(thisByte, DEC);


  Serial.print(", hex: ");
  // prints value as string in hexadecimal (base 16):
  Serial.print(thisByte, HEX);

  Serial.print(", oct: ");
  // prints value as string in octal (base 8);
  Serial.print(thisByte, OCT);

  Serial.print(", bin: ");
  // prints value as string in binary (base 2) also prints ending line break:
  Serial.println(thisByte, BIN);

  // if printed last visible character '~' or 126, stop:
  if (thisByte == 126) {    // you could also use if (thisByte == '~') {
    // This loop loops forever and does nothing
    while (true) {
      continue;
    }
  }
  // go on to the next character
  thisByte++;
}

```

<h3>Programa que despliegue en su consola via Arduino IDE </h3>

```ino
/*
 * Nombre del Archivo: poblacion
 * Autor:   JOCELYN LEYVA GARAY
 * Correo:  L21210388@tectijuana.edu.mx
 * Fecha:   25/10/2023
 * Curso:   Lenguajes de Interfaz, TECNM Campus ITT
 *


 * Objetivo:
 *El objetivo de este código en el entorno de desarrollo Arduino IDE es calcular y mostrar en
 *el monitor serie el número de años que se necesitan para que una población inicial se duplique y alcance una población final
 *
 * Historial de Revisiones:
 * [25/10/2023]        [Jocelyn] - Creado
 * [25/10/2023]        [Jocelyn] - Documentacion y subida de programas
 * 
 * Codigo proporcionado en la clase para visualizar el funcionamiento del simulador de PicoW llamado wokwi, el cual se encuentra en lenguaje C
 */

void setup() {
  Serial.begin(9600); // Inicializar la comunicación serial a 9600 baudios
  double poblacionInicial = 3.0;  // Población inicial en millones
  double poblacionFinal = 300.0;  // Población final en millones

  // Calcular los años necesarios
  double a = (poblacionFinal / poblacionInicial) / 2.0;

  Serial.print("Se necesitan ");
  Serial.print(a, 2); // Imprimir la variable 'a' con 2 decimales
  Serial.print(" años para que una población de ");
  Serial.print(poblacionInicial, 2); // Imprimir la variable 'poblacionInicial' con 2 decimales
  Serial.print(" millones se duplique y alcance ");
  Serial.print(poblacionFinal, 2); // Imprimir la variable 'poblacionFinal' con 2 decimales
  Serial.println(" millones.");
}

void loop() {
  // Código de repetición (si es necesario) iría aquí
}

```


<h2>Evaluacion</h2>
-Criterio 1: 25%  Incluir el encabezado de nuestro templete de microcontroladores. (procure tener uno propio lo usara constatemente)
-Criterio 2: 50% Corriendo el programa via el templete de WOKWI https://wokwi.com/projects/new/pi-pico-sdk
-Criterio 3: 25% Programa corriendo en su PicoW via Arduino IDE (o SDK manual de consola-powershell) o tambien VSCode
<h2>Recursos</h2>
1.[Recurso 1]Link para Wowi funcionando en C: ( https://wokwi.com/projects/379507925030427649)
2.[Recursos 2]Link para Wokwi del ejercicio de poblacion: (https://wokwi.com/projects/379507925030427649)





<h1>Simulador Pico 3.1</h1>
<h1>Tabla de contenidos</h1>

*Descripcion\
*Codigo en C para mensaje "Hola mundo"\
*Evaluacion\
*Recursos

<h1>Descripcion</h1>
<p>El objetivo de este trabajo es adentrarnos en el mundo de la programación y la electrónica a través del uso de dos herramientas clave: el simulador de Wokwi y el entorno de desarrollo Arduino IDE. En nuestra primera práctica, nos sumergiremos en este emocionante viaje, que comenzará con la creación de un clásico "Hola Mundo" digital.

En primer lugar, es importante entender la relevancia de estas dos herramientas. El simulador de Wokwi nos proporciona un entorno virtual en el que podemos diseñar, construir y probar circuitos electrónicos en tiempo real. Esto nos permite experimentar con conceptos de electrónica sin necesidad de hardware físico, lo que es especialmente útil para principiantes. Por otro lado, el Arduino IDE es el entorno de programación que utilizaremos para escribir y cargar código en nuestro dispositivo Arduino, el cual controlará el comportamiento de nuestros circuitos.</p>
<h1>Codigo en C para mensaje "Hola mundo"</h1>


```C
/*
 * Nombre del Archivo: main.c
 * Autor:   JOCELYN LEYVA GARAY
 * Correo:  L21210388@tectijuana.edu.mx
 * Fecha:   24/10.2023
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


<h1>Evaluacion</h1>
-Criterio1: 1100% DEPOSTAR EL URL de su Wokwi funcionando Incluir el templete del código sin el no se recibirán las practicas.

<h1>Recursos</h1>
1.[Recurso 1]Link para Wowi funcionando en C: ( https://wokwi.com/projects/379507925030427649)



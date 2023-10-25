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
  // Tu código de repetición (si es necesario) iría aquí
}

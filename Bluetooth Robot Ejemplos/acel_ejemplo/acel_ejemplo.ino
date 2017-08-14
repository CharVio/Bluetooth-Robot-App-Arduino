void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0){
    char data= Serial.read();
    //Serial.print(data);
    
    switch(data){
      
      // ===== ** Detección del Acelerometro ** ===== //
      case '1':
        Serial.println("Inclinado Arriba Izquierda");
        break;
      case '2':
        Serial.println("Inclinado Arriba Centro");
        break;
      case '3':
        Serial.println("Inclinado Arriba Derecha");
        break;
        
      case '4':
        Serial.println("Inclinado Centro Izquierda");
        break;
      case '5':
        Serial.println("Inclinado Centro Centro");
        break;
      case '6':
        Serial.println("Inclinado Centro Derecha");
        break;
        
      case '7':
        Serial.println("Inclinado Abajo Izquierda");
        break;
      case '8':
        Serial.println("Inclinado Abajo Centro");
        break;
      case '9':
        Serial.println("Inclinado Abajo Derecha");
        break;
        
        
      // ===== ** Detección de Botones ** ===== //
      case 'A':
        Serial.println("Boton 1 presionado");
        break;
      case 'a':
        Serial.println("Boton 1 liberado");
        break;
        
      case 'B':
        Serial.println("Boton 2 presionado");
        break;
      case 'b':
        Serial.println("Boton 2 liberado");
        break;
        
        
      case 'C':
        Serial.println("Boton 3 presionado");
        break;
      case 'c':
        Serial.println("Boton 3 liberado");
        break;
        
        
      case 'D':
        Serial.println("Boton 4 presionado");
        break;
      case 'd':
        Serial.println("Boton 4 liberado");
        break;
    }
  }

}

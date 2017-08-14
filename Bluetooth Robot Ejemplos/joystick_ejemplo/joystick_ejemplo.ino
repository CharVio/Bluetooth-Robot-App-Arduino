


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0){
    char data = Serial.read();
    
    // ===== ** Procesado de los comandos recibidos por la APP ** ===== //
    switch(data){
      
      //===== ** BOTONES DE COLORES ** ===== //
      
      case 'Q':
          Serial.println("Btn VERDE presionado");  
        break;
      case 'q':
          Serial.println("Btn VERDE liberado");
        break; 
        
      case 'R':
          Serial.println("Btn ROJO presionado");  
        break;
      case 'r':
          Serial.println("Btn ROJO liberado");
        break;
      
      case 'W':
          Serial.println("Btn AZUL presionado");  
        break;
      case 'w':
          Serial.println("Btn AZUL liberado");
        break; 
      
      case 'E':
          Serial.println("Btn AMARILLO presionado");  
        break;
      case 'e':
          Serial.println("Btn AMARILLO liberado");
        break;   
        
        
      // ===== ** BOTONES DE FLECHA ** =====//
      
      case 'S':
          Serial.println("Btn ARRIBA presionado");  
        break;
      case 's':
          Serial.println("Btn ARRIBA liberado");
        break; 
        
      case 'C':
          Serial.println("Btn DERECHA presionado");  
        break;
      case 'c':
          Serial.println("Btn DERECHA liberado");
        break; 
        
      case 'X':
          Serial.println("Btn ABAJO presionado");  
        break;
      case 'x':
          Serial.println("Btn ABAJO liberado");
        break; 
        
      case 'Z':
          Serial.println("Btn IZQUIERDA presionado");  
        break;
      case 'z':
          Serial.println("Btn IZQUIERDA liberado");
        break; 
        
      // ===== ** STICK IZQUIERDO ** ===== //
      case '1':
          Serial.println("Stick izquierdo. Arriba Izquierda");
        break;
      case '2':
          Serial.println("Stick izquierdo. Arriba Centro");
        break;
      case '3':
          Serial.println("Stick izquierdo. Arriba Derecha");
        break;
        
      case '4':
          Serial.println("Stick izquierdo. Centro Izquierda");
        break;
      case '5':
          Serial.println("Stick izquierdo. Centro Centro");
        break;
      case '6':
          Serial.println("Stick izquierdo. Centro Derecha");
        break;
        
      case '7':
          Serial.println("Stick izquierdo. Abajo Izquierda");
        break;
      case '8':
          Serial.println("Stick izquierdo. Abajo Centro");
        break;
      case '9':
          Serial.println("Stick izquierdo. Abajo Derecha");
        break;
        
        
        
      // ===== ** JOYSTICK DERECHO ** ===== //
      case 't':
          Serial.println("Stick derecho. Arriba Izquierda");
        break;
      case 'y':
          Serial.println("Stick derecho. Arriba Centro");
        break;
      case 'u':
          Serial.println("Stick derecho. Arriba Derecha");
        break;
        
      case 'i':
          Serial.println("Stick derecho. Centro Izquierda");
        break;
      case 'o':
          Serial.println("Stick derecho. Centro Centro");
        break;
      case 'p':
          Serial.println("Stick derecho. Centro Derecha");
        break;
        
      case 'g':
          Serial.println("Stick derecho. Abajo Izquierda");
        break;
      case 'h':
          Serial.println("Stick derecho. Abajo Centro");
        break;
      case 'j':
          Serial.println("Stick derecho. Abajo Derecha");
        break;
      
    }
  }
}

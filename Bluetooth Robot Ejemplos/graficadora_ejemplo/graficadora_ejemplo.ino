

int val1=0;
int val2=0;
int val3=0;

float volt1,volt2,volt3;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  //Con esto esperamos a que se presione la tecla start de la APP
  do{
  }while(Serial.available()==0);
  Serial.read();
}

void loop() {
  
  if(Serial.available()>0){ //Preguntamos si llego un ato. Quiere decir que se ha presionado el Boton de la APP.
    Serial.read();
    
    //Con esto esperamos a que se presione la tecla start de la APP para reanudar el muestreo.
    do{
    }while(Serial.available()==0);
    Serial.read();
  }
  
  val1=analogRead(A0);
  val2=analogRead(A1);
  val3=analogRead(A2);
  
  volt1=val1*0.00488;
  volt2=val2*0.00488;
  volt3=val3*0.00488;
  delay(10);
  
  Serial.print("R:");
  Serial.println(volt1);
  
  
  Serial.print("G:");
  Serial.println(volt2);
  
  Serial.print("B:");
  Serial.println(volt3);
  
  delay(20); //Con un delay menor a 20ms la APP puede tener retrasos para reaccionar.
}

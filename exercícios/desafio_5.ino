// C++ code
//
int contadorpar = 60;
int contadorimpar = 81;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
    while(contadorpar <= 80 && contadorimpar <= 101){
    Serial.println("contadorpar:"+ String(contadorpar));
    Serial.println("contadorimpar: " + String(contadorimpar));
    contadorpar += 2;
    contadorimpar += 2;  
  } 
    delay(1000); 


  }  

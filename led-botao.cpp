int led1 = 13;
int botao = 12;
int valor;
int contador;

void setup(){
  pinMode(13, OUTPUT); //SAÍDA 
  pinMode(12, INPUT); //ENTRADA
}

void loop(){
  valor = digitalRead(botao);
  
  if(valor == HIGH){ //SE

  digitalWrite(13, HIGH);//TENSÃO ALTA
  

}
  else{
   digitalWrite(13, LOW);//TENSÃO BAIXA
  }
}

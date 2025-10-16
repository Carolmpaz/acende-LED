A atividade proposta tinha como objetivo testar a placa Arduino UNO, por meio da ligação de seu LED interno, também conhecido como LED_BUILTIN. Para esse teste o LED foi ligado por 1s e ficou 1s desligado para que fosse visível a oscilação de estado. 

O código utilizado para tal aplicação está exemplificado abaixo: 
```
void setup() {

  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
 
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); 

  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); 
}
```
Abaixo segue o vídeo de ilustração da aplicação:

<video src="Video_LED.mp4" width="320" height="240" controls></video>
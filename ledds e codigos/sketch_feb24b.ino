const int led1 = 9;  // Pino do primeiro LED
const int led2 = 10; // Pino do segundo LED

unsigned long tempoAnterior1 = 0;
unsigned long tempoAnterior2 = 0;

const long intervalo1 = 500;  // Tempo para o LED1 piscar (500ms = 0.5s)
const long intervalo2 = 1000; // Tempo para o LED2 piscar (1000ms = 1s)

bool estadoLed1 = false;
bool estadoLed2 = false;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  unsigned long tempoAtual = millis(); // Obtém o tempo atual

  // Verifica se é hora de alternar o estado do LED1
  if (tempoAtual - tempoAnterior1 >= intervalo1) {
    tempoAnterior1 = tempoAtual;
    estadoLed1 = !estadoLed1; // Inverte o estado do LED
    digitalWrite(led1, estadoLed1);
  }

  // Verifica se é hora de alternar o estado do LED2
  if (tempoAtual - tempoAnterior2 >= intervalo2) {
    tempoAnterior2 = tempoAtual;
    estadoLed2 = !estadoLed2;
    digitalWrite(led2, estadoLed2);
  }
}

const int TRIG = 3;
const int ECHO = 2;
const int BUZZER = 7;
const int LEDS[] = {8, 9, 10, 11, 12, 13};

int distancia = 0;
int intervalo = 0;

void setup() {
  Serial.begin(9600);
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  pinMode(BUZZER, OUTPUT);
  noTone(BUZZER);

  for (int i = 0; i < 6; i++) {
    pinMode(LEDS[i], OUTPUT);
    digitalWrite(LEDS[i], LOW);
  }
}

void loop() {
  distancia = medirDistancia();

  Serial.print("Distância: ");
  Serial.print(distancia);
  Serial.println(" cm");

  // Leitura inválida
  if (distancia < 0 || distancia > 400) {
    desligarLeds();
    noTone(BUZZER);
    delay(300);
    return;
  }

  // Muito próximo - pisca todos os LEDs + buzzer rápido
  if (distancia <= 10) {
    piscarLeds(6, 100);
    tone(BUZZER, 1750);
    delay(100);
    noTone(BUZZER);
    delay(100);
  }

  // Muito longe - tudo desligado
  else if (distancia > 60) {
    desligarLeds();
    noTone(BUZZER);
  }

  // Média distância - pisca LEDs e buzzer proporcional
  else {
    if (distancia <= 20) {
      intervalo = 100; piscarLeds(5, intervalo);
    } else if (distancia <= 30) {
      intervalo = 150; piscarLeds(4, intervalo);
    } else if (distancia <= 40) {
      intervalo = 200; piscarLeds(3, intervalo);
    } else if (distancia <= 50) {
      intervalo = 250; piscarLeds(2, intervalo);
    } else if (distancia <= 60) {
      intervalo = 300; piscarLeds(1, intervalo);
    }

    tone(BUZZER, 1750);
    delay(intervalo);
    noTone(BUZZER);
    delay(intervalo);
  }
}

// Mede a distância com o sensor ultrassônico
int medirDistancia() {
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);

  long duracao = pulseIn(ECHO, HIGH, 30000); // timeout 30ms

  if (duracao == 0) return -1;
  return duracao / 58;
}

// Desliga todos os LEDs
void desligarLeds() {
  for (int i = 0; i < 6; i++) {
    digitalWrite(LEDS[i], LOW);
  }
}

// Pisca os primeiros N LEDs
void piscarLeds(int quantidade, int tempo) {
  for (int i = 0; i < 6; i++) {
    if (i < quantidade) {
      digitalWrite(LEDS[i], HIGH);
    } else {
      digitalWrite(LEDS[i], LOW);
    }
  }
  delay(tempo);
  for (int i = 0; i < quantidade; i++) {
    digitalWrite(LEDS[i], LOW);
  }
  delay(tempo);
}

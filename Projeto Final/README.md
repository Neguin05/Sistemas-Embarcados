
![Captura de Tela (35)](https://github.com/user-attachments/assets/d11ea3fb-0202-4ee9-b5a0-6050e99dd7e8)

# 🚗 Projeto: Sensor de Ré com Arduino
Este projeto simula o funcionamento de um sensor de ré automotivo, utilizando um sensor ultrassônico, um buzzer e LEDs. Ele é capaz de detectar a proximidade de um objeto e fornecer alertas visuais e sonoros com intensidade proporcional à distância.

---

## 📌 Funcionamento do Sistema

O sistema funciona em três etapas principais:

### 📡 1. Medição de Distância

O sensor ultrassônico envia um sinal através do pino TRIG e escuta o retorno no pino ECHO. A duração entre envio e recepção é usada para calcular a distância de um objeto à frente do sensor.

Se a distância for inválida (menor que 0 cm ou maior que 35 cm), o sistema desliga os LEDs e o buzzer e aguarda a próxima leitura.

### 💡 2. Sinalização com LEDs

Os LEDs representam a aproximação do obstáculo:

- Quando o objeto está **muito próximo** (até 10 cm), **todos os LEDs piscam rapidamente**.
- Quando o objeto está a **distâncias intermediárias** (entre 15 e 35 cm), **uma quantidade proporcional de LEDs pisca**.
- Quando o objeto está **distante** (acima de 35 cm), **todos os LEDs permanecem desligados**.

A função `piscarLeds(quantidade, tempo)` controla a quantidade de LEDs que piscam e por quanto tempo.

### 🔊 3. Alerta Sonoro com Buzzer

O buzzer emite sons cuja frequência de repetição também depende da distância:

- **Até 10 cm:** Bipes muito rápidos.
- **Entre 15 e 35 cm:** Bipes com intervalos maiores.
- **Acima de 35 cm:** O buzzer permanece desligado.

A frequência do som é constante (`1750 Hz`), mas o tempo entre os toques varia de acordo com a distância.

---

## 🔁 Lógica do Código

O código está estruturado da seguinte forma:

- `setup()`: Define os pinos como entrada ou saída, inicializa o serial e desliga os LEDs e o buzzer.
- `loop()`: Mede a distância e define o comportamento dos LEDs e do buzzer conforme a distância detectada.
- `medirDistancia()`: Calcula a distância com base no tempo do eco.
- `desligarLeds()`: Desliga todos os LEDs.
- `piscarLeds(quantidade, tempo)`: Acende uma quantidade de LEDs proporcional à distância e depois os desliga.

---

## 🧠 Comportamento por Distância

| Distância (cm) | Ação do Sistema                          |
|----------------|------------------------------------------|
| ≤ 10           | 6 LEDs piscando + buzzer muito rápido    |
| ≤ 15           | 5 LEDs piscando + buzzer rápido          |
| ≤ 20           | 4 LEDs piscando + buzzer moderado        |
| ≤ 25           | 3 LEDs piscando + buzzer mais lento      |
| ≤ 30           | 2 LEDs piscando + buzzer ainda mais lento|
| ≤ 35           | 1 LED piscando + buzzer lento            |
| > 35           | Tudo desligado                           |
| < 0 ou > 35   | Tudo desligado (leitura inválida)        |

---

## 📝 Considerações Finais

Este projeto é ideal para aplicações de automação e segurança veicular. O uso conjunto de sinalização visual e sonora permite ao usuário identificar com precisão o nível de proximidade de um obstáculo, aumentando a segurança durante manobras.

## 🧰 Componentes Utilizados no Circuito

| Quantidade | Componente                     | Descrição                                                                 |
|------------|--------------------------------|---------------------------------------------------------------------------|
| 1          | Arduino Uno                    | Microcontrolador principal do projeto                                     |
| 1          | Protoboard grande              | Usada para montar o circuito com LEDs, buzzer e resistores                |
| 1          | Protoboard pequena             | Usada para conectar o sensor ultrassônico                                 |
| 1          | Sensor Ultrassônico HC-SR04    | Mede a distância de objetos à frente                                      |
| 6          | LEDs                           | Indicadores visuais (3 verdes, 2 amarelos, 1 vermelho)                    |
| 6          | Resistores                     | Limitam a corrente dos LEDs                                               |
| 1          | Buzzer (ativo)                 | Emite som para alertas                                                    |
| 1          | Cabo USB                       | Alimenta o Arduino e permite comunicação com o computador                 |
| Vários     | Jumpers (fios de conexão)      | Conectam os pinos do Arduino aos componentes da protoboard                |

---

### 🔌 Conexões dos Componentes

| Componente       | Pino Arduino | Observações                   |
|------------------|--------------|-------------------------------|
| HC-SR04 (TRIG)   | D3           |                                |
| HC-SR04 (ECHO)   | D2           |                                |
| Buzzer           | D7           | Saída de tom (tone)           |
| LED 1 (vermelho) | D8           | Com resistor de 220Ω          |
| LED 2 (vermelho) | D9           | Com resistor de 220Ω          |
| LED 3 (amarelo)  | D10          | Com resistor de 220Ω          |
| LED 4 (verde)    | D11          | Com resistor de 220Ω          |
| LED 5 (verde)    | D12          | Com resistor de 220Ω          |
| LED 6 (verde)    | D13          | Com resistor de 220Ω          |
| GND (comum)      | GND          | Em todos os negativos         |
| VCC (sensor)     | 5V           | Para o HC-SR04                |


---




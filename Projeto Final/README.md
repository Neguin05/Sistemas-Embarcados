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

## 🔌 Conexões dos Pinos no Arduino

| Pino Digital | Componente Conectado      |
|--------------|----------------------------|
| D2           | LED vermelho               |
| D3           | LED vermelho               |
| D4           | LED vermelho               |
| D5           | LED amarelo                |
| D6           | LED verde                  |
| D7           | LED verde                  |
| D8           | Buzzer                     |
| D9           | Pino Trigger do HC-SR04    |
| D10          | Pino Echo do HC-SR04       |
| GND          | Terra (protoboards e sensor) |
| 5V           | Alimentação para os sensores |

---

## 🧠 Função Geral do Circuito

Este projeto provavelmente tem como objetivo:

- **Detectar a presença ou distância de um objeto** usando o **sensor HC-SR04**.
- **Acender os LEDs em sequência ou nível** com base na distância medida.
- **Emitir alerta sonoro** com o buzzer quando um limite de proximidade é atingido (ex: objeto muito perto).

O circuito é bastante comum em **sistemas de estacionamento**, **medidores de distância visuais**, ou **alertas de aproximação**.



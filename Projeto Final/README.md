
![Captura de Tela (35)](https://github.com/user-attachments/assets/d11ea3fb-0202-4ee9-b5a0-6050e99dd7e8)


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




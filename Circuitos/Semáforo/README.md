![Captura de Tela (3)](https://github.com/user-attachments/assets/7f9ab6a5-8c23-42b9-be13-1d1b345cd4b7)

##  Componentes Utilizados

| Quantidade | Componente                | Descrição                                      |
|------------|---------------------------|------------------------------------------------|
| 1          | Arduino Uno               | Microcontrolador principal do projeto          |
| 1          | Protoboard (Breadboard)   | Para montagem do circuito sem solda            |
| 7          | LEDs                      | 3 vermelhos, 3 verdes e 1 amarelo              |
| 9          | Resistores de 100Ω        | Limitam corrente para LEDs e botões            |
| 2          | Push Buttons (Botões)     | Usados como entrada digital                    |
| 1          | Cabo USB                  | Alimentação e comunicação com o Arduino        |
| Vários     | Jumpers (Fios de conexão) | Conectam os pinos do Arduino aos componentes   |


## 🚦 Descrição do Funcionamento do Projeto

Este projeto simula um **sistema de semáforo para pedestres e carros**, controlado por um **Arduino Uno** com dois botões de solicitação de travessia (um para cada lado da rua).

### 🔧 Lógica de Funcionamento

- **Inicialização (`setup`)**
  - O semáforo do carro começa com o **LED verde aceso**.
  - Os pedestres começam com **LED vermelho aceso**, impedindo a travessia.
  - Os botões dos pedestres utilizam **resistores de pull-up internos** do Arduino.

---

### 🚶‍♂️ Travessia de Pedestres

Quando **qualquer botão é pressionado** (`botaoPedestre1` ou `botaoPedestre2`):

1. 🟡 **Carro recebe sinal amarelo por 2 segundos**.
2. 🔴 **Carro recebe sinal vermelho**.
3. 🟢 **Ambos os pedestres recebem sinal verde** (LED verde aceso).
4. ⏱️ Pedestres têm **5 segundos para atravessar**.
5. ⚠️ Nos 2,5 segundos finais, os LEDs verdes dos pedestres piscam (alerta).
6. 🔴 LEDs vermelhos dos pedestres acendem novamente.
7. 🟢 O carro recebe sinal verde de novo.

---


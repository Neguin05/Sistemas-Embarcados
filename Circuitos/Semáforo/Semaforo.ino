const int ledVermelhoCarro = 12;
const int ledVerdeCarro = 9;
const int ledAmareloCarro = 11;

const int ledVerdePedestre1 = 4;
const int ledVermelhoPedestre1 = 3;

const int ledVerdePedestre2 = 5;
const int ledVermelhoPedestre2 = 6;

const int botaoPedestre1 = 2;
const int botaoPedestre2 = 7;

void setup()
{
    pinMode(ledVerdeCarro, OUTPUT);
    pinMode(ledAmareloCarro, OUTPUT);
    pinMode(ledVermelhoCarro, OUTPUT);

    pinMode(ledVerdePedestre1, OUTPUT);
    pinMode(ledVermelhoPedestre1, OUTPUT);
    pinMode(ledVerdePedestre2, OUTPUT);
    pinMode(ledVermelhoPedestre2, OUTPUT);

    pinMode(botaoPedestre1, INPUT_PULLUP);
    pinMode(botaoPedestre2, INPUT_PULLUP);

    digitalWrite(ledVerdeCarro, HIGH);
    digitalWrite(ledVermelhoPedestre1, HIGH);
    digitalWrite(ledVermelhoPedestre2, HIGH);
}

void loop()
{
    int estadoBotao1 = digitalRead(botaoPedestre1);
    int estadoBotao2 = digitalRead(botaoPedestre2);

    if(estadoBotao1 == LOW || estadoBotao2 == LOW)
    {
        digitalWrite(ledVerdeCarro, LOW);
        digitalWrite(ledAmareloCarro, HIGH);
        delay(2000);
        digitalWrite(ledAmareloCarro, LOW);
        digitalWrite(ledVermelhoCarro, HIGH);

        digitalWrite(ledVermelhoPedestre1, LOW);
        digitalWrite(ledVermelhoPedestre2, LOW);
        digitalWrite(ledVerdePedestre1, HIGH);
        digitalWrite(ledVerdePedestre2, HIGH);
        delay(5000);

        for(int i = 0; i < 5; i++)
        {
            digitalWrite(ledVerdePedestre1, LOW);
            digitalWrite(ledVerdePedestre2, LOW);
            delay(250);
            digitalWrite(ledVerdePedestre1, HIGH);
            digitalWrite(ledVerdePedestre2, HIGH);
            delay(250);
        }

        digitalWrite(ledVerdePedestre1, LOW);
        digitalWrite(ledVerdePedestre2, LOW);
        digitalWrite(ledVermelhoPedestre1, HIGH);
        digitalWrite(ledVermelhoPedestre2, HIGH);

        delay(1500);

        digitalWrite(ledVermelhoCarro, LOW);
        digitalWrite(ledVerdeCarro, HIGH);
    }

    delay(1000);
}

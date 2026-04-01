
#define Green 7
#define Yellow 9 
#define Red 10

bool isConfigured = false;

int input_pin = 0;

void setup() {
// настройка последовательного порта
Serial.begin(9600);
Serial.println("\nНастройка пина для диода. Введите номер пина:");


while (Serial.available() == 0) {
}
input_pin = Serial.parseInt();

if (input_pin != 0) {

pinMode(Green, OUTPUT);
pinMode(Red, OUTPUT);
pinMode(Yellow, OUTPUT);

isConfigured = true;
} 


}


void loop() {
if (isConfigured) {

digitalWrite(Red, LOW);
digitalWrite(Yellow, HIGH);

delay(input_pin);

digitalWrite(Yellow, LOW);
digitalWrite(Green, HIGH);

delay(input_pin);

digitalWrite(Green, LOW);
digitalWrite(Red, HIGH);

delay(input_pin);

}


}

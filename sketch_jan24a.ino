//Типи даних
// bool x = true;
// bool x = 0;
// byte y = 200
// int digit = 1984
// long chyslo = 40000000
// float
// double // те саме що і float, проте зберігає більше щначень після коми
// char words = 'slova' // зберігає символи
// цифровий сигнал - 0 фбо 1, високий/низький рівень, . Аналоговий - змінюється з часом і здатен набувати різних значень в діапазоні
// byte зберігає значення від 0 до 275
// int набуває значення від -32000 до 32000
// long може набувати більших значень (+- 2 мільярди)

// const int GREEN_LED = 11;
// const int YELLOW_LED = 12;
// const int RED_LED = 13;
// int COUNTER_RED = 0;
// void setup() {
//   Serial.begin(9600);
//   pinMode(RED_LED, OUTPUT);
//   pinMode(YELLOW_LED, OUTPUT);
//   pinMode(GREEN_LED, OUTPUT);
  
//   // pinMode(RED_LED, INPUT);
// }

// void loop() {
//   digitalWrite(RED_LED, HIGH);
//   Serial.println("RED is ON");
//   delay(1000); //delay - затримка
//   digitalWrite(RED_LED, LOW);
//   Serial.println("RED is OFF");
//   delay(1000);
//   digitalWrite(YELLOW_LED, HIGH);
//   Serial.println("RED is ON");
//   delay(1000); //delay - затримка
//   digitalWrite(YELLOW, LOW);
//   Serial.println("RED is OFF");
//   delay(1000);
//     digitalWrite(RED_LED, HIGH);
//   Serial.println("RED is ON");
//   delay(1000); //delay - затримка
//   digitalWrite(RED_LED, LOW);
//   Serial.println("RED is OFF");
//   delay(1000);
// }
// int x;
// void setup() {
//   Serial.begin(115200);
// }
// void loop() {
//   if(Serial.available()){
//   x = Serial.parseInt();
//   }
//   Serial.println(x);
// }

// void setup() {
//   Serial.begin(9600);

// }

// void loop() {
//   for(int i = 0; i < 10; i++){
//     Serial.print(i);

//   }
//   delay(1000);
//   Serial.println();
// }

// int i;
// int x;
// void setup() {
//   Serial.begin(9600);

// }

// void loop() {

//   if(Serial.available()){
//     x = Serial.parseInt();
//   }

//   i = pow(x, 2);

//   while(i < 100){
//     if(Serial.available()){
//       x = Serial.parseInt();
//       }
//     i = pow(x, 2);
//     Serial.println("Ми в циклі");

//   }
//   Serial.println("Ми вйшли з цикла");
// }
void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(12, INPUT);

}

void loop() {
  int buttonState = digitalRead(13);
  while(buttonState == LOW){
    digitalWrite(13, HIGH);
  }
  
}
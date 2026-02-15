const int Pins[7] = {2, 3, 4, 5, 6, 7, 8};
const int digits[10][7] = {
  //A  B  C  D  E  F  G
  { 0, 0, 0, 0, 0, 0, 1 },  // 0
  { 1, 0, 0, 1, 1, 1, 1 },  // 1
  { 0, 0, 1, 0, 0, 1, 0 },  // 2
  { 0, 0, 0, 0, 1, 1, 0 },  // 3
  { 1, 0, 0, 1, 1, 0, 0 },  // 4
  { 0, 1, 0, 0, 1, 0, 0 },  // 5
  { 0, 1, 0, 0, 0, 0, 0 },  // 6
  { 0, 0, 0, 1, 1, 1, 1 },  // 7
  { 0, 0, 0, 0, 0, 0, 0 },  // 8
  { 0, 0, 0, 0, 1, 0, 0 }   // 9
};

void setup() {
  for (int i = 0; i < 7; i++) {
    pinMode(Pins[i], OUTPUT);
  }
}

void loop() {
  for (int digit = 0; digit < 10; digit++) {
    for (int seg = 0; seg < 7; seg++) {
      digitalWrite(Pins[seg], digits[digit][seg]);
    }
    delay(1000);
  }
}
const int left = 3;
const int forward = 6;
const int right = 10;
const int backward = 11;

// Key mapping:
// F - Forward
// G - Backward
// L - Left
// R - Right
// S - Stop (no button pressed)
// Q - Forward Left
// E - Forward Right
// Z - Backward Left
// C - Backward Right

void setup() {
  Serial.begin(9600);
  pinMode(left, OUTPUT);
  pinMode(forward, OUTPUT);
  pinMode(right, OUTPUT);
  pinMode(backward, OUTPUT);
  digitalWrite(left, HIGH);
  digitalWrite(forward, HIGH);
  digitalWrite(right, HIGH);
  digitalWrite(backward, HIGH);
}

void loop() {
  if (Serial.available() > 0) {
    char data = Serial.read();
    Serial.print(data);

    switch (data) {
      case 'F':
        carGoesForward();
        break;
      case 'G':
        carGoesBackward();
        break;
      case 'L':
        carGoesLeft();
        break;
      case 'R':
        carGoesRight();
        break;
      case 'S':
        carStops();
        break;
      case 'Q':
        carGoesForwardLeft();
        break;
      case 'E':
        carGoesForwardRight();
        break;
      case 'Z':
        carGoesBackwardLeft();
        break;
      case 'C':
        carGoesBackwardRight();
        break;
    }
  }
}

void carGoesLeft() {
  digitalWrite(left, LOW);
  digitalWrite(forward, HIGH);
  digitalWrite(right, HIGH);
  digitalWrite(backward, HIGH);
}

void carGoesRight() {
  digitalWrite(left, HIGH);
  digitalWrite(forward, HIGH);
  digitalWrite(right, LOW);
  digitalWrite(backward, HIGH);
}

void carStops() {
  digitalWrite(left, HIGH);
  digitalWrite(forward, HIGH);
  digitalWrite(right, HIGH);
  digitalWrite(backward, HIGH);
}

void carGoesForward() {
  digitalWrite(left, HIGH);
  digitalWrite(forward, LOW);
  digitalWrite(right, HIGH);
  digitalWrite(backward, HIGH);
}

void carGoesBackward() {
  digitalWrite(left, HIGH);
  digitalWrite(forward, HIGH);
  digitalWrite(right, HIGH);
  digitalWrite(backward, LOW);
}

void carGoesForwardLeft() {
  digitalWrite(left, LOW);
  digitalWrite(forward, LOW);
  digitalWrite(right, HIGH);
  digitalWrite(backward, HIGH);
}

void carGoesForwardRight() {
  digitalWrite(left, HIGH);
  digitalWrite(forward, LOW);
  digitalWrite(right, LOW);
  digitalWrite(backward, HIGH);
}

void carGoesBackwardLeft() {
  digitalWrite(left, LOW);
  digitalWrite(forward, HIGH);
  digitalWrite(right, HIGH);
  digitalWrite(backward, LOW);
}

void carGoesBackwardRight() {
  digitalWrite(left, HIGH);
  digitalWrite(forward, HIGH);
  digitalWrite(right, LOW);
  digitalWrite(backward, LOW);
}

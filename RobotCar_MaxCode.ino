int rightMotorFront = 2;
int rightMotorRear = 3;
int leftMotorFront = 4;
int leftMotorRear = 5;

void setup() {
  // put your setup code here, to run once:
  pinMode(rightMotorFront, OUTPUT);
  pinMode(rightMotorRear, OUTPUT);
  pinMode(leftMotorFront, OUTPUT);
  pinMode(leftMotorRear, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:  
  // Below code is for the RIGHT side of the Robot Car. 
  digitalWrite(rightMotorFront, HIGH);
  digitalWrite(rightMotorRear, LOW);

  // Below code is for the LEFT side of the Robot Car.
  digitalWrite(leftMotorFront, LOW);
  digitalWrite(leftMotorRear, HIGH);
  delay(2500);
  
  digitalWrite(rightMotorFront, HIGH);
  digitalWrite(rightMotorRear, LOW);

  // Below code is for the LEFT side of the Robot Car.
  digitalWrite(leftMotorFront, LOW);
  digitalWrite(leftMotorRear, HIGH);
  delay(2500);
}

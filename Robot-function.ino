int incomingByte;

int pwm1 = 3;
int dir1 = 2;
int pwm2 = 5;
int dir2 = 4;
int pwm3 = 9;
int dir3 = 8;

void setup() {
  Serial.begin(9600);

  //pin mode
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  if(Serial.available() > 0){

    incomingByte = Serial.read();

    if(incomingByte == 'F'){
      //Left
      digitalWrite(2, LOW);
      analogWrite(3, 180);
      //Right
      digitalWrite(4, LOW);
      analogWrite(5, 180);
      //Waepon
      digitalWrite(8, HIGH);
      analogWrite(9, 180);
    }
    if(incomingByte == 'B'){
      //Left
      digitalWrite(2, HIGH);
      analogWrite(3, 180);
      //Right
      digitalWrite(4, HIGH);
      analogWrite(5, 180);
      //Waepon
      digitalWrite(8, HIGH);
      analogWrite(9, 180);
    }
    if(incomingByte == 'R'){
      //Left
      digitalWrite(2, LOW);
      analogWrite(3, 180);
      //Right
      digitalWrite(4, HIGH);
      analogWrite(5, 180);
      //Waepon
      digitalWrite(8, HIGH);
      analogWrite(9, 180);
    }
    if(incomingByte == 'L'){
      //Left
      digitalWrite(2, HIGH);
      analogWrite(3, 180);
      //Right
      digitalWrite(4, LOW);
      analogWrite(5, 180);
      //Waepon
      digitalWrite(8, HIGH);
      analogWrite(9, 180);
    }
    if(incomingByte == 'S'){
      //Left
      digitalWrite(2, LOW);
      analogWrite(3, 0);
      //Right
      digitalWrite(4, LOW);
      analogWrite(5, 0);
      //Waepon
      digitalWrite(8, LOW);
      analogWrite(9, 0);
    }
    //Weapon
  /*  if(incomingByte == 'A'){
      digitalWrite(8, LOW);
      analogWrite(9, 180);
    }
    if(incomingByte == 'B'){
      digitalWrite(8, HIGH);
      analogWrite(9, 180);
    }
    if(incomingByte == 'C'){
      digitalWrite(8, HIGH);
      analogWrite(9, 0);
    } */
  }
}

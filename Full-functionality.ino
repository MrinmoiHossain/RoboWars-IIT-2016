int incomingByte;

//Left-Side
int pwm1 = 3;
int dir1 = 2;
//Right-Side
int pwm2 = 5;
int dir2 = 4;

void setup() {
 Serial.begin(9600);

 pinMode(2, OUTPUT);
 pinMode(3, OUTPUT);
 pinMode(4, OUTPUT);
 pinMode(5, OUTPUT);
}

void loop() {
  if(Serial.available() > 0){
    incomingByte = Serial.read();

    //Forwar for all motor
    if(incomingByte == 'L'){
      //Left-Side
      digitalWrite(2, LOW);
      analogWrite(3, 180);
      //Right-Side
      digitalWrite(4, LOW);
      digitalWrite(5, 180);
    }

    //Reverse for all motor
    if(incomingByte == 'H'){
      //Left-Side
      digitalWrite(2, HIGH);
      analogWrite(3, 180);
      //Right-Side
      digitalWrite(4, HIGH);
      analogWrite(5, 180);
    }

    //360 Degree: Left-Forward and Right-Reverse
    if(incomingByte == 'M'){
      //Left-Side
      digitalWrite(2, LOW);
      analogWrite(3, 180);
      //Right-Side
      digitalWrite(4, HIGH);
      analogWrite(5, 180);
    }

    //360 Degree: Left-Reverse and Right-Forward
    if(incomingByte == 'N'){
      //Left-Side
      digitalWrite(2, HIGH);
      analogWrite(3, 180);
      //Right-Side
      digitalWrite(4, LOW);
      analogWrite(5, 180);
    }

    //Left: Stop and Right: Forward
    if(incomingByte == 'A'){
      //Left-Side
      digitalWrite(2, LOW);
      analogWrite(3, 0);
      //Right-Side
      digitalWrite(4, LOW);
      analogWrite(5, 180);
    }

    //Left: Stop and Right: Reverse
    if(incomingByte == 'B'){
      //Left-Side
      digitalWrite(2, LOW);
      analogWrite(3, 0);
      //Right-Side
      digitalWrite(4, HIGH);
      analogWrite(5, 180);
    }

    //Left: Foward and Right: Stop
    if(incomingByte == 'C'){
      //Left-Side
      digitalWrite(2, LOW);
      analogWrite(3, 180);
      //Right-Side
      digitalWrite(4, LOW);
      analogWrite(5, 0);
    }

    //Left: Reverse and Right: Stop
    if(incomingByte == 'C'){
      //Left-Side
      digitalWrite(2, HIGH);
      analogWrite(3, 180);
      //Right-Side
      digitalWrite(4, LOW);
      analogWrite(5, 0);
    }

    //Stop Motor
    if(incomingByte == 'S'){
      //Left-Side
      digitalWrite(2, LOW);
      analogWrite(3, 0);
      //Right-Side
      digitalWrite(4, LOW);
      analogWrite(5, 0);
    }
    
  }
  
}

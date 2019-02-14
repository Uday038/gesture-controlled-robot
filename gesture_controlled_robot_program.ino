

const int analogInPin1 = A0;  // Analog input pin that the potentiometer is attached to

const int analogInPin2 = A1;

const int analogOutPin =13; // Analog output pin that the LED is attached to



int sensorValue1 = 0;        // value read from the pot

int sensorValue2 = 0;        // value output to the PWM (analog out)



void setup() {

  pinMode(13, OUTPUT);

  pinMode(8, OUTPUT);

  pinMode(9, OUTPUT);

  pinMode(10, OUTPUT);

  pinMode(11, OUTPUT);

}



void loop() {

  // read the analog in value:

  sensorValue1 = analogRead(analogInPin1);            

  sensorValue2 = analogRead(analogInPin2);       



  

  if(sensorValue1 > 400)

  {

      digitalWrite(8, HIGH);   

  digitalWrite(9, LOW); //right

  digitalWrite(10, HIGH);   

  digitalWrite(11, LOW);

    delay(1000);



  }

  else if(sensorValue1 < 300)

  {

      digitalWrite(9, HIGH);//   back

  digitalWrite(8, LOW); 

  digitalWrite(11, HIGH);   

  digitalWrite(10, LOW);

    delay(1000);

  }

  else if(sensorValue2 > 400)

  {

  digitalWrite(8, HIGH);   //left

  digitalWrite(9, LOW); 

  digitalWrite(11, HIGH);   

  digitalWrite(10, LOW);

    delay(1000);

  }

  else  if(sensorValue2 < 300)

  {

      digitalWrite(9, HIGH);   //right

  digitalWrite(8, LOW); 

  digitalWrite(10, HIGH);   

  digitalWrite(11, LOW);

    delay(1000);

  }

  else

  {

  digitalWrite(8, LOW);   

  digitalWrite(9, LOW); 

  digitalWrite(11, LOW);  

  digitalWrite(10, LOW);

    digitalWrite(13, HIGH); 

    delay(500);

    digitalWrite(13, LOW);

  }

                    

}

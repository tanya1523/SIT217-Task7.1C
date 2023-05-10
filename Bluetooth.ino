
// Starting of Program
//Defining the pins for motor driver 
int m1a = 4;
int m1b = 5;
int m2a = 6;
int m2b = 7;
char temp;

void setup() 
{  
pinMode(m1a,OUTPUT);  // Digital pin 10 set as output Pin
pinMode(m1b,OUTPUT);  // Digital pin 11 set as output Pin
pinMode(m2a,OUTPUT);  // Digital pin 12 set as output Pin
pinMode(m2b,OUTPUT);  // Digital pin 13 set as output Pin
Serial.begin(9600);
}

void loop()
{
  while (Serial.available() > 0)
  {
  temp = Serial.read();
  Serial.println(temp);
  }

  if( temp == 'F') // Forward
    {
       digitalWrite(m1a,LOW);
    digitalWrite(m1b,HIGH);
    digitalWrite(m2a,HIGH);
    digitalWrite(m2b,LOW);
       
    }
else if(temp == 'B') // Backward
    {
      digitalWrite(m1a,LOW);
      digitalWrite(m1b,HIGH);
      digitalWrite(m2a,LOW);
      digitalWrite(m2b,HIGH); 
    }
  
    else if(temp == 'L') //Left
    {
     digitalWrite(m1a,HIGH);
    digitalWrite(m1b,LOW);
    digitalWrite(m2a,LOW);
    digitalWrite(m2b,HIGH);
    }
    else if(temp == 'R') //Right
    {
       digitalWrite(m1a,HIGH);
      digitalWrite(m1b,LOW);
      digitalWrite(m2a,HIGH);
      digitalWrite(m2b,LOW); 
   
    }
     else if(temp == 'S') //Stop
    {
    digitalWrite(m1a,LOW);
    digitalWrite(m1b,LOW);
    digitalWrite(m2a,LOW);
    digitalWrite(m2b,LOW); 
    }
  else if(temp == 'I') //Forward Right
    {
    digitalWrite(m1a,HIGH);
    digitalWrite(m1b,LOW);
    digitalWrite(m2a,LOW);
    digitalWrite(m2b,LOW);
    }
  else if(temp == 'J') //Backward Right
    {
    digitalWrite(m1a,LOW);
    digitalWrite(m1b,HIGH);
    digitalWrite(m2a,LOW);
    digitalWrite(m2b,LOW);
    }
   else if(temp == 'G') //Forward Left
    {
    digitalWrite(m1a,LOW);
    digitalWrite(m1b,LOW);
    digitalWrite(m2a,HIGH);     
    digitalWrite(m2b,LOW);
    }
  else if(temp == 'H') //Backward Left
    {
    digitalWrite(m1a,LOW);
    digitalWrite(m1b,LOW);
    digitalWrite(m2a,LOW);
    digitalWrite(m2b,HIGH);
}
}

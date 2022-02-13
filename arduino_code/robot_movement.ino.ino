
const int buzzer = 12;
const int sensor = A0;
const int rightforward  = 11;  
const int rightbackward  = 10;  

const int leftforward  = 6; 
const int leftbackward  = 5;
const int value  = 255;

 int start = 'g';    
 int sens = 0;
// int check=0;
void setup() {
  Serial.begin(9600);

    pinMode(rightforward, OUTPUT);
    pinMode(rightbackward, OUTPUT);
    pinMode(leftforward, OUTPUT);
    pinMode(leftbackward, OUTPUT);
  //  pinMode(sensor,INPUT);
    pinMode(buzzer,OUTPUT);
}

void loop() {

  if (Serial.available()>0){

    start = Serial.read();
  }
 sens=analogRead(sensor);
  
  if(start=='a'){
                  //forward
   
    analogWrite(rightforward, value);
    analogWrite(rightbackward, 0);
    analogWrite(leftforward, value);
    analogWrite(leftbackward, 0);
     if(sens == 0)
  {
    digitalWrite(buzzer,HIGH);
    
    analogWrite(rightforward, 0);
    analogWrite(rightbackward, 0);
    analogWrite(leftforward, 0);
    analogWrite(leftbackward, 0);
    delay(1000);
    start='g';
     digitalWrite(buzzer,LOW);
    // check=1;
    
  }
  } 
  
   if(start=='b') {    //left

   


    analogWrite(rightforward, value*0.7);
    analogWrite(rightbackward, 0);
    analogWrite(leftforward, 0);
    analogWrite(leftbackward, 0); 
     if(sens == 0)
  {
    digitalWrite(buzzer,HIGH);
    
    analogWrite(rightforward, 0);
    analogWrite(rightbackward, 0);
    analogWrite(leftforward, 0);
    analogWrite(leftbackward, 0);
    delay(1000);
    start='g';
     digitalWrite(buzzer,LOW);
    // check=1;
    
  } 
  
}

  if(start=='c') {     //stop

   
    analogWrite(rightforward, 0);
    analogWrite(rightbackward, 0);
    analogWrite(leftforward, 0);
    analogWrite(leftbackward, 0);  
     if(sens == 0)
  {
    digitalWrite(buzzer,HIGH);
    
    analogWrite(rightforward, 0);
    analogWrite(rightbackward, 0);
    analogWrite(leftforward, 0);
    analogWrite(leftbackward, 0);
    delay(1000);
    start='g';
     digitalWrite(buzzer,LOW);
    // check=1;
    
  } 
  
}  

   if(start=='d') {   //right

   
    analogWrite(rightforward, 0);
    analogWrite(rightbackward, 0);
    analogWrite(leftforward, value*0.7);
    analogWrite(leftbackward, 0);
     if(sens == 0)
  {
    digitalWrite(buzzer,HIGH);
    
    analogWrite(rightforward, 0);
    analogWrite(rightbackward, 0);
    analogWrite(leftforward, 0);
    analogWrite(leftbackward, 0);
    delay(1000);
    start='g';
     digitalWrite(buzzer,LOW);
    // check=1;
    
  }    

     
  
} 
 
   if(start=='e') {    //backword

    
    analogWrite(rightforward, 0);
    analogWrite(rightbackward, value);   
    analogWrite(leftforward, 0);
    analogWrite(leftbackward, value);
    if(sens == 0)
  {
    digitalWrite(buzzer,HIGH);
    
    analogWrite(rightforward, 0);
    analogWrite(rightbackward, 0);
    analogWrite(leftforward, 0);
    analogWrite(leftbackward, 0);
    delay(1000);
    start='g';
     digitalWrite(buzzer,LOW);
     //check=1;
    
  }     
 
 }
  
  if(sens == 0)
  {
    digitalWrite(buzzer,HIGH);
    
    analogWrite(rightforward, 0);
    analogWrite(rightbackward, 0);
    analogWrite(leftforward, 0);
    analogWrite(leftbackward, 0);
    delay(1000);
    start='g';
    
  }
   digitalWrite(buzzer,LOW);
  
}  



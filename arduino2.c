void setup() {                
  pinMode(4, OUTPUT); 
  pinMode(5, OUTPUT); 
  pinMode(6, OUTPUT); 
  pinMode(8, OUTPUT); 
  pinMode(9, OUTPUT); 
  pinMode(10, OUTPUT); 
  pinMode(7, INPUT); 
  digitalWrite(7,HIGH); 
}
void loop(){
  if(digitalRead(7) == LOW){ 
    digitalWrite(8, HIGH); 
    delay(5000);
    digitalWrite(8, LOW); 
      for(int i=0;i<=2;i++){      
        digitalWrite(9, HIGH); 
        delay(500);
        digitalWrite(9, LOW);  
        delay(300);
      }                      
    digitalWrite(10, HIGH); 
    delay(500);
    digitalWrite(6, LOW);  
    digitalWrite(4, HIGH);  
    delay(5000);
    digitalWrite(4, LOW); 
    for(int i=0;i<=5;i++){     
      digitalWrite(5, HIGH);  
      delay(500);
      digitalWrite(5, LOW);  
      delay(300);
    }                     
    digitalWrite(6, HIGH);  
    delay (5000);
    digitalWrite(10, LOW);  
  }
  else{
    digitalWrite(9, HIGH);
    digitalWrite(6, LOW);
    delay(1000);
    digitalWrite(9, LOW);
    digitalWrite(6, HIGH);
    delay(1000);
  }
}






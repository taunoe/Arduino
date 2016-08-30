/*
 */
int switchState = 0; //muutuja

void setup() {
  pinMode(3,OUTPUT);//roheline pirn
  pinMode(4,OUTPUT);//kollane pirn
  pinMode(5,OUTPUT);//punane pirn
  pinMode(2,INPUT);//lüliti
}

// the loop function runs over and over again forever
void loop() {
  switchState = digitalRead(2);//Muutuja väärtuseks on lüliti seisund

  if(switchState == LOW){//Kui lüliti ei ole alla vajutatud
     digitalWrite(3, HIGH);//roheline
     digitalWrite(4, HIGH);//kollane
     digitalWrite(5, HIGH);//punane
   }
   else{
     digitalWrite(3, LOW);//roheline
     digitalWrite(4, LOW);//kollane
     digitalWrite(5, HIGH);//punane

     delay(1000);
     digitalWrite(4, HIGH);//kollane
     digitalWrite(5, LOW);//punane
     delay(1000);

     delay(250);
     digitalWrite(4, LOW);//kollane
     digitalWrite(5, HIGH);//punane
     delay(1000);
   }
}

//int buttons[6];//masiiv nimega buttins

//int buttons[0] = 2;//masiivi esimese elemendi väärtus 2

int notes[] = {262, 294, 339, 349};// hertsid

void setup() {
  Serial.begin(9600);//terminal arvutis näha
}

void loop() {
  int keyVal = analogRead(A0);// loeme klemmi A0
  Serial.println(keyVal);//et näeks väärtust terminalis

  if(keyVal == 1023)KJH98+{
    tone(8, notes[0]);
  }
  else if(keyVal >= 990 && keyVal <= 1010){//990 - 1010 juhuks kui on mingi müra
    tone(8, notes[1]);
  }
  else if(keyVal >= 505 && keyVal <= 515){
    tone(8, notes[2]);
  }
  else if(keyVal >= 5 && keyVal <= 10){
    tone(8, notes[3]);
  }
  else{
    noTone(8);//kui nupu ei vajuta siis vaikus
  }

}

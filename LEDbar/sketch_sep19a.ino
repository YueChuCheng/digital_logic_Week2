const int ledCount = 8;
int count=0; 
int ledPins[] = { 
  15, 16, 17, 32, 33,21,22,23}; 


void setup() {
  // put your setup code here, to run once:
pinMode(2, INPUT);
  for (int thisLed = 0; thisLed < ledCount; thisLed++) {
    pinMode(ledPins[thisLed], OUTPUT); 
  }



}

void loop() {
  // put your main code here, to run repeatedly:
  
  int buttonstate = digitalRead(2);
  if(buttonstate==HIGH){
    count++;
    if(count<=8){
    for(int i=-1; i<count; i++ ){
        digitalWrite(ledPins[i],HIGH);
      delay(100);
      }
    }

    if(count>8){
    for(int i=7 ,c=1; count-(2*c-1)>i; i--,c++ ){
        digitalWrite(ledPins[i],LOW);
      delay(100);
      }
      if(count==16)
      
      count=0;
      }
    
   
 }
    



  
}

#include <math.h>
void setup() {
  // put your setup code here, to run once:
pinMode(7,INPUT);
Serial.begin(9600); 
bool lastState = digitalRead(7);

}

void loop() {
 

int n;
if(lastState != digitalRead(7)){
  n = calc();
  
  
  }
  
    
}
int calc(){
  int a[6];
int sum = 0;
    a[0] = digitalRead(7);
  lastState = digitalRead(7);
  for(int i = 1;i < 6;i++){
     while(lastState == digitalRead(7)){
      Serial.println("waiting for next state");
      }
      if(lastState != digitalRead(7)){
        a[i] = digitalRead(7);
        lastState = digitalRead(7);
        }
        
    
    }
    for(int i = 0;i < 6; i++){
      sum += ((int)(pow(2,i)) * a[i]);
      }
      return sum;
    }

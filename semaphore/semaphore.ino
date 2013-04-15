
#include <Servo.h>

Servo right;
Servo left;

int pos = 0;
char serial_read;

char ogawa[] = {'o','g','a','w','a','h','e','l'};

void setup() {
  
  right.attach( 5 );
  left.attach( 6 );
  
  right.write( 0 );
  left.write( 180 );
  
  Serial.begin(9600);

}

void loop() {
  
 if(Serial.available() > 0){   
//    char alp = sentence[0];
    char monitor = Serial.read();
 }    
    message();
   
}

void message(){
  
   for(int i=0; i < sizeof(ogawa); ++i){
     transchar(ogawa[i]);
     delay(1000);
   }
  
}


void transchar(char serial_read){
  
  switch (serial_read){
    case 'a':
      right.write(180);
      left.write(45);
    break;
      
    case 'b':
      right.write(180);
      left.write(65);
    break;
    
    case 'c':
      right.write(180);
      left.write(145);
    break;
    
    case 'd':
      right.write(180);
      left.write(180);
    break;
    
    case 'e':
      right.write(45);
      left.write(0);
    break;
    
    case 'f':
      right.write(90);
      left.write(0);
    break;
    
    case 'g':
      right.write(145);
      left.write(0);
    break;
    
    case 'h':
      right.write(180);
      left.write(0);
    break;
    
    case 'i':
      right.write(180);
      left.write(0);
    break;
    
    case 'j':
      right.write(90);
      left.write(180);
    break;
    
    case 'k':
      right.write(0);
      left.write(45);
    break;
    
    case 'l':
      right.write(45);
      left.write(45);
    break;
    
    case 'm':
      right.write(90);
      left.write(45);
    break;
    
    case 'n':
      right.write(145);
      left.write(45);
    break;
    
    case 'o':
      right.write(180);
      left.write(0);
    break;
    
    case 'p':
      right.write(0);
      left.write(90);
    break;
    
    case 'q':
      right.write(45);
      left.write(90);
    break;
    
    case 'r':
      right.write(90);
      left.write(90);
    break;
    
    case 's':
      right.write(145);
      left.write(90);
    break;
    
    case 't':
      right.write(0);
      left.write(145);
    break;
    
    case 'u':
      right.write(45);
      left.write(145);
    break;
    
    case 'v':
      right.write(145);
      left.write(180);
    break;
    
    case 'w':
      right.write(180);
      left.write(0);
    break;
    
    case 'x':
      right.write(180);
      left.write(0);
    break;
    
    case 'y':
      right.write(90);
      left.write(145);
    break;
    
    case 'z':
      right.write(180);
      left.write(0);
    break;
      
  }
  
}



#include <Time.h>
#include <Servo.h>

Servo right;
Servo left;
char serial_read;

int sensorVal = 0;
int analogPin = 0;

//time設定で言う言葉
char set0[] = {
  'k','t','k','r','!'};
char set1[] = {
  's','l','e','e','p','!'};
char set2[] = {
  'f','u','t','u','r','e','!'};
char set3[] = {
  's','u','t','e','m','a','!'};
char set4[] = {
  'g','k','b','r','!'};
char set5[] = {
  'g','k','b','r','!'};

//センサーに反応していう言葉
char set6[] = {
  'b','y','e','b','y','e','!'};
char set7[] = {
  't','y','!'};
char set8[] = {
  'w','a','i','t','!'};

int timeMessageNumber;
int sensorMessageNumber;
char talkMassage;

void setup() {

  right.attach( 5 );
  left.attach( 6 );

  Serial.begin(9600);
  
//  right.write(10);
//  left.write(165);

}

void loop() {

  if(Serial.available() > 0){   
    //    char alp = sentence[0];
    char monitor = Serial.read();
  }

//  if(minute()%15 == 0){
//    timeMessage();
//  }
  
  sensorMessage();

}

//time

void timeMessage(){

  timeMessageNumber = random(0,5);

  if(timeMessageNumber == 0){
    for(int i=0; i < sizeof(set0); ++i){
      transchar(set0[i]);
      delay(500);
    }
  }
  else if(timeMessageNumber == 1){
    for(int i=0; i < sizeof(set1); ++i){
      transchar(set1[i]);
      delay(500);
    }
  }
  else if(timeMessageNumber == 2){
    for(int i=0; i < sizeof(set2); ++i){
      transchar(set2[i]);
      delay(500);
    }
  }
  else if(timeMessageNumber == 3){
    for(int i=0; i < sizeof(set3); ++i){
      transchar(set3[i]);
      delay(500);
    }
  }
  else if(timeMessageNumber == 4){
    for(int i=0; i < sizeof(set4); ++i){
      transchar(set4[i]);
      delay(500);
    }
  }
  else if(timeMessageNumber == 5){
    for(int i=0; i < sizeof(set5); ++i){
      transchar(set5[i]);
      delay(500);
    }
  }

}

//Sensor

void sensorMessage(){
  
  sensorMessageNumber = random(6,8);
  sensorVal = analogRead(analogPin);
  Serial.println(sensorVal);
  if(sensorVal > 100){

    if(sensorMessageNumber == 6){
      for(int i=0; i < sizeof(set6); ++i){
        transchar(set6[i]);
        delay(500);
      }
    }
    else if(sensorMessageNumber == 7){
      for(int i=0; i < sizeof(set7); ++i){
        transchar(set7[i]);
        delay(500);
      }
    }
    else if(sensorMessageNumber == 8){
      for(int i=0; i < sizeof(set8); ++i){
        transchar(set8[i]);
        delay(500);
      }
    }

  }
  
  delay(300);
}


void transchar(char serial_read){

  switch (serial_read){
  case 'a':
    right.write(165);
    left.write(45);
    break;

  case 'b':
    right.write(165);
    left.write(65);
    break;

  case 'c':
    right.write(165);
    left.write(145);
    break;

  case 'd':
    right.write(165);
    left.write(165);
    break;

  case 'e':
    right.write(45);
    left.write(10);
    break;

  case 'f':
    right.write(90);
    left.write(10);
    break;

  case 'g':
    right.write(145);
    left.write(10);
    break;

  case 'h':
    right.write(165);
    left.write(10);
    break;

  case 'i':
    right.write(165);
    left.write(10);
    break;

  case 'j':
    right.write(90);
    left.write(165);
    break;

  case 'k':
    right.write(10);
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
    right.write(165);
    left.write(10);
    break;

  case 'p':
    right.write(10);
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
    right.write(10);
    left.write(145);
    break;

  case 'u':
    right.write(45);
    left.write(145);
    break;

  case 'v':
    right.write(145);
    left.write(165);
    break;

  case 'w':
    right.write(165);
    left.write(10);
    break;

  case 'x':
    right.write(165);
    left.write(10);
    break;

  case 'y':
    right.write(90);
    left.write(145);
    break;

  case 'z':
    right.write(165);
    left.write(10);
    break;

  default:
 
    right.write(165);
    left.write(10);
    break;
  }

}






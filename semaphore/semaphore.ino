#include <Time.h>
#include <Servo.h>

Servo right;
Servo left;
char serial_read;

int sensorVal = 0;
int analogPin = 0;

//time設定で言う言葉
char set0[] = {
  'm','o','r','n','i','n','g','!'};
char set1[] = {
  'h','e','l','l','o','!'};
char set2[] = {
  's','e','e','y','o','u','!'};
char set3[] = {
  'm','o','r','n','i','n','g','!'};
char set4[] = {
  'h','e','l','l','o','!'};
char set5[] = {
  's','e','e','y','o','u','!'};
char set6[] = {
  'm','o','r','n','i','n','g','!'};
char set7[] = {
  'h','e','l','l','o','!'};

//センサーに反応していう言葉
char set8[] = {
  's','e','e','y','o','u','!'};
char set9[] = {
  'h','e','y','!'};
char set10[] = {
  'w','a','i','t','!'};

int timeMessageNumber;
int sensorMessageNumber;
char talkMassage;

void setup() {

  right.attach( 5 );
  left.attach( 6 );

  Serial.begin(9600);

}

void loop() {

  if(Serial.available() > 0){   
    //    char alp = sentence[0];
    char monitor = Serial.read();
  }

  if(second()%10 == 0){
    message();
  }

}

void message(){

  timeMessageNumber = random(0,7);
  sensorMessageNumber = random(8,10);
  //  Serial.println(timeMessageNumber);

  //time

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
  else if(timeMessageNumber == 6){
    for(int i=0; i < sizeof(set6); ++i){
      transchar(set6[i]);
      delay(500);
    }
  }
  else if(timeMessageNumber == 7){
    for(int i=0; i < sizeof(set7); ++i){
      transchar(set7[i]);
      delay(500);
    }
  }
  
  //sensor

  sensorVal = analogRead(analogPin);
  if(sensorVal < 100){


    Serial.println(sensorVal);

    if(sensorMessageNumber == 8){
      for(int i=0; i < sizeof(set8); ++i){
        transchar(set8[i]);
        delay(500);
      }
    }
    else if(sensorMessageNumber == 9){
      for(int i=0; i < sizeof(set9); ++i){
        transchar(set9[i]);
        delay(500);
      }
    }
    else if(sensorMessageNumber == 10){
      for(int i=0; i < sizeof(set10); ++i){
        transchar(set10[i]);
        delay(500);
      }
    }

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

  default:
    right.write(120);
    left.write(45);
    delay(100);
    right.write(20);
    left.write(145);
    delay(100);
    right.write(120);
    left.write(45);
    delay(100);
    right.write(20);
    left.write(145);
    break;
  }

}






#include <IRremote.h>

//- Global declerations -//
int animNum = 0;
int closeKey = 1;
int RECV_PIN = A3;

IRrecv irrecv(RECV_PIN);
decode_results results;

// ---------------------------------------------

long BUTTON_ONE = 1452207117;
long BUTTON_TWO = 378749304;
long BUTTON_THREE = 3197347044;
long BUTTON_FOUR = 841470775;
long BUTTON_FIVE = 286230856;
long BUTTON_SIX = 2335683509;
long BUTTON_SEVEN = 727798456;
long BUTTON_EIGHT = 2065345736;
long BUTTON_NINE = 4092985532;
long BUTTON_ZERO = 117062114;
long BUTTON_CLOSE = 2586515089;
long BUTTON_TURN_SIGN = 1643148896;
long BUTTON_HD = 2298376329;
long BUTTON_RED = 2319031341;
long BUTTON_GREEN = 1969982189;
long BUTTON_YELLOW = 1672214345;
long BUTTON_BLUE = 3865988176;

// ---------------------------------------------

void anim1()
{
  for(int x = 0; x < 2; x++)
  {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    
    delay(50);

 
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    
    delay(50);
  }

  for(int i = 0; i < 2; i++)
  {
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    
    delay(50);
     
    
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);   
    
    delay(50);  
  }
}

// ---------------------------------------------

void anim2()
{
  for(int x = 0; x < 2; x++)
  {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
  
    delay(50);

    for(int i = 0; i < 2; i++)
    {
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      delay(10);
      
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      delay(10);
    }
    
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    
    delay(50);
  }

  for(int i = 0; i < 2; i++)
  {
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    
    delay(50);
    
    for(int i = 0; i < 2; i++)
    {
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      delay(10);
      
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      delay(10);
    }
    
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    
    delay(50);
  }
}

// ---------------------------------------------

void anim3()
{
  for(int i = 0; i < 2; i++)
  {
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
  
    delay(50);
   
    
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    
    delay(50);
  }
}

// ---------------------------------------------

void anim4()
{
  for(int i = 0; i < 7; i++)
  {
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    
    delay(50);
    
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    
    delay(50);
  }

  for(int i = 0; i < 7; i++)
  {
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    
    delay(50);
    
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);

    delay(50);
  }
}

// ---------------------------------------------

void anim5()
{
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);

  delay(100);

  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  
  delay(100);
 
  
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);

  delay(100);

  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);

  digitalWrite(6, LOW);
  digitalWrite(7, LOW);

  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  delay(100);


  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);

  delay(100);

  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);

  delay(100);

  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  
  delay(100);


  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);

  digitalWrite(6, LOW);
  digitalWrite(7, LOW);

  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  delay(100);
}

// ---------------------------------------------

void anim6()
{
  for(int i = 2; i <= 11; i++)
  {
    digitalWrite(i, HIGH);
  }
  
  delay(75);
  
  for(int i = 2; i <= 11; i++)
  {
    digitalWrite(i, LOW);
  }

  delay(75);
}

// ---------------------------------------------

void anim7()
{
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);

  delay(100);

  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);

  delay(50);


  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  
  delay(100);

  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);

  delay(50);
  
}

// ---------------------------------------------

void anim8()
{
  digitalWrite(2, HIGH);
  digitalWrite(11, HIGH);

  delay(50);

  digitalWrite(3, HIGH);
  digitalWrite(10, HIGH);

  delay(50);

  digitalWrite(4, HIGH);
  digitalWrite(9, HIGH);
  
  delay(50);

  digitalWrite(5, HIGH);
  digitalWrite(8, HIGH);

  delay(50);

  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);

  delay(100);

  digitalWrite(2, LOW);
  digitalWrite(11, LOW);

  delay(50);
  digitalWrite(3, LOW);
  digitalWrite(10, LOW);

  delay(50);
  
  digitalWrite(4, LOW);
  digitalWrite(9, LOW);

  delay(50);

  digitalWrite(5, LOW);
  digitalWrite(8, LOW);

  delay(50);

  digitalWrite(6, LOW);
  digitalWrite(7, LOW);

  delay(100);
  
}

// ---------------------------------------------

void turnOff()
{
  for(int i = 2; i <= 11; i++)
  {
    digitalWrite(i, LOW);
  }
}

// ---------------------------------------------

void setup() {
  for(int i = 2; i <= 11; i++)
  {
    pinMode(i, OUTPUT);
  }
  pinMode(A0, INPUT);
  pinMode(A2, INPUT);

  irrecv.enableIRIn();
}

// ---------------------------------------------

void loop() {
  
  if (irrecv.decode(&results))
  {
     irrecv.resume();
     if(results.value == BUTTON_ONE){
        animNum = 0;
     }
     if(results.value == BUTTON_TWO){
        animNum = 1;
     }
     if(results.value == BUTTON_THREE){
        animNum = 2;
     }
     if(results.value == BUTTON_FOUR){
        animNum = 3;
     }
     if(results.value == BUTTON_FIVE){
        animNum = 4;
     }
     if(results.value == BUTTON_SIX){
        animNum = 5;
     }
     if(results.value == BUTTON_SEVEN){
        animNum = 6;
     }
     if(results.value == BUTTON_EIGHT){
        animNum = 7;
     }
     if(results.value == BUTTON_NINE){
        animNum = 8;
     }
     if(results.value == BUTTON_CLOSE){
        animNum = 9;
     }     
  } 

  switch (animNum){
      case 0:
        anim7();
        break;
      case 1:
        anim1();
        break;
      case 2:
        anim2();
        break;
      case 3:
        anim3();
        break;
      case 4:
        anim4();
        break;
      case 5:
        anim5();
        break;
      case 6:
        anim6();
        break;
      case 7:
        anim8();
        break;
      case 9:
        turnOff();
        break;
     }
}

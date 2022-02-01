int key = 0;
int closeKey = 0;

// ---------------------------------------------

void setup() {
  for(int i = 2; i <= 11; i++)
  {
    pinMode(i, OUTPUT);
  }
  pinMode(A0, INPUT);
  pinMode(A2, INPUT);

}

// ---------------------------------------------

void animChangeControl()
{
   if(digitalRead(A0) == true)
   {
    key++;
    if(key == 9)
    {
      key = 0;
    }
   }
}

// ---------------------------------------------

void onOffControl()
{
   if(digitalRead(A2) == true)
   {
    closeKey++;
    if(closeKey == 2)
    {
      closeKey = 0;
    }
   }
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

void loop() {

 animChangeControl();

 onOffControl();

if (closeKey == 1)
{
   switch (key){
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
   }
}
else
  kapali();
  
}

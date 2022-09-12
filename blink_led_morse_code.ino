int key = LED_BUILTIN;

void setup() {
 
  pinMode(key, OUTPUT);
}

void dot()
{
  digitalWrite(key, HIGH);  
  delay(1000);                       
  digitalWrite(key, LOW);   
  delay(500);                       

  
  }
void dash()
{
  digitalWrite(key, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(3000);                       // wait for a second
  digitalWrite(key, LOW);    // turn the LED off by making the voltage LOW
  delay(500);             
  
  }


void loop() {
  
  //for "P" :- 
  dot();
  dash();
  dash();
  dot();
  delay(2000);
  
  // for "R":-
   dot();
   dash();
   dot();
   delay(2000);
  
  // for "A" :-
   dot();
   dash();
   delay(2000);

   //for "N" :-
    dash();
    dot();
    delay(2000);

    //for "S" :-
    dot();
    dot();
    dot();
    delay(2000);

    //for "H" :-
    dot();
    dot();
    dot();
    dot();
    delay(2000);

    //for "U" :-
    dot();
    dot();
    dash();
    delay(2000);

    //for "L":-
    dot();
    dash();
    dot();
    dot();
    delay(2000);



    

  
   

   
  
}

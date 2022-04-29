byte btn;
byte pins[7]={13,12,11,10,9,8,7};
byte show[16][7]={
  {0,0,0,0,0,0,1},
  {1,0,0,1,1,1,1},
  {0,0,1,0,0,1,0},
  {0,0,0,0,1,1,0},
  {1,0,0,1,1,0,0},
  {0,1,0,0,1,0,0},
  {1,1,0,0,0,0,0},
  {0,0,0,1,1,1,1},
  {0,0,0,0,0,0,0},
  {0,0,0,1,1,0,0},
  {0, 0, 0, 1, 0, 0, 0},
  {1, 1, 0, 0, 0, 0, 0},
  {0, 1, 1, 0, 0, 0, 1},
  {1, 0, 0, 0, 0, 1, 0},
  {0, 1, 1, 0, 0, 0, 0},
  {0, 1, 1, 1, 0, 0, 0},
};

void setup()
{
  for  (byte i=0;i<7;++i){
  pinMode (pins[i],OUTPUT);
  }
    pinMode(btn, INPUT_PULLUP);
}

void loop()
{
  if(btn==HIGH){
   digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    digitalWrite(8, LOW);
    digitalWrite(7, LOW);
}
  else{
    for(byte i=0;i<16;i++){
     for(byte j=0;j<7;j++){
       digitalWrite(pins[j],show[i][j]);
      }
     delay(1000);
    }
  }
}




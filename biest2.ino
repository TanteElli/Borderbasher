//Legs UP and Down

#define FL 11  // Front Left
#define BL 9   // Back Left
#define ML 10  // Middle Left

#define FR 6   // Front Right
#define BR 4   // Back Right
#define MR 5   // Middle Right


//Legs Movement

#define MFL 12  // Move Front Left
#define MBL 14   // Move Back Left
#define MML 13  // Move Middle Left

#define MFR 17   // Move Front Right
#define MBR 16   // Move Back Right
#define MMR 15   // Move Middle Right


//Head
#define HT 8   // Tilt
#define HR 2   // Pan Right
#define HL 3   // Pan Right


// Tail
#define TL 7   // Tail UP


void setup() {

  pinMode(FL, OUTPUT);
  pinMode(BL, OUTPUT);
  pinMode(ML, OUTPUT);
  pinMode(FR, OUTPUT);
  pinMode(BR, OUTPUT);
  pinMode(MR, OUTPUT);

  pinMode(MFL, OUTPUT);
  pinMode(MBL, OUTPUT);
  pinMode(MML, OUTPUT);
  pinMode(MFR, OUTPUT);
  pinMode(MBR, OUTPUT);
  pinMode(MMR, OUTPUT);

  pinMode(HT, OUTPUT);
  pinMode(HR, OUTPUT);
  pinMode(HL, OUTPUT);
  pinMode(TL, OUTPUT);

}

void look_around() {
  digitalWrite(HT, HIGH);
  delay(500);

  digitalWrite(HR, HIGH);
  digitalWrite(TL, HIGH);
  
  delay(500);
  
  digitalWrite(HL, HIGH);
  delay(500);

  digitalWrite(HT, LOW);
  delay(500);

  digitalWrite(HR,LOW);
  digitalWrite(TL,LOW);
  
  delay(500);

  digitalWrite(HL,LOW);
  delay(1000);

}

void tap_dance(int dly) {
  digitalWrite(FL, HIGH);
  delay(dly);
  digitalWrite(FL, LOW);
  delay(dly);
   digitalWrite(ML, HIGH);
  delay(dly);
  digitalWrite(ML, LOW);
  delay(dly);
  digitalWrite(BL, HIGH);
  delay(dly);
  digitalWrite(BL, LOW);
  delay(dly); 
  digitalWrite(BR, HIGH);
  delay(dly);
  digitalWrite(BR, LOW);
  delay(dly);
  digitalWrite(MR, HIGH);
  delay(dly);
  digitalWrite(MR, LOW);
  delay(dly);
  digitalWrite(FR, HIGH);
  delay(dly);
  digitalWrite(FR, LOW);
  delay(dly);
}


void move_fwd() {
  digitalWrite(FR, HIGH);
  delay(100);
  digitalWrite(MFR, LOW);
  delay(500);
  digitalWrite(FR, LOW);
  delay(500);

  digitalWrite(FL, HIGH);
  delay(100);
  digitalWrite(MFL, LOW);
  delay(500);
  digitalWrite(FL, LOW);
  delay(500);

  digitalWrite(MR, HIGH);
  delay(100);
  digitalWrite(MMR, LOW);
  delay(500);
  digitalWrite(MR, LOW);
  delay(500);

  digitalWrite(ML, HIGH);
  delay(100);
  digitalWrite(MML, LOW);
  delay(500);
  digitalWrite(ML, LOW);
  delay(500);

  digitalWrite(BR, HIGH);
  delay(100);
  digitalWrite(MBR, LOW);
  delay(500);
  digitalWrite(BR, LOW);
  delay(500);

  digitalWrite(BL, HIGH);
  delay(100);
  digitalWrite(MBL, LOW);
  delay(500);
  digitalWrite(BL, LOW);
  delay(500);
  
 
  digitalWrite(MFR, HIGH);
  digitalWrite(MMR, HIGH);
  digitalWrite(MBR, HIGH);
  digitalWrite(MFL, HIGH);
  digitalWrite(MML, HIGH);
  digitalWrite(MBL, HIGH);
  
  delay(1000);
  
}

void loop() {

  look_around();
  
  //head up, middle pos
  digitalWrite(HT, HIGH);
  delay(500);

  digitalWrite(HR, HIGH);  

  for (int a=0;a<=5;a++) {
    move_fwd();
  }

  //tail up
  digitalWrite(TL, HIGH);
    
  //wait 15 Sek
  delay(15000);

  //tail down
  digitalWrite(TL, LOW);

  //wait 5 Sek
  delay(5000);
}

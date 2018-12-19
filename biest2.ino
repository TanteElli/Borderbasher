//Legs UP and Down

#define FL 11  // Front Left
#define BL 9   // Back Left
#define ML 10  // Middle Left

#define FR 6   // Front Right
#define BR 4   // Back Right
#define MR 5   // Middle Right


//Legs Movement

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


void loop() {
    look_around();
    tap_dance(300);
    tap_dance(200);
    tap_dance(100);
    tap_dance(50);
    tap_dance(50);
    tap_dance(50);
    tap_dance(50);    

}

uint8_t T1, T2, newT1, newT2, oldT1, oldT2;
char buf[16];
#define pinT1 A0
#define pinT2 A1
int a = 0;
void setup() {
  Serial.begin(9600);
  pinMode(pinT1, INPUT);
  pinMode(pinT2, INPUT);
  T1 = LOW;
  T2 = LOW;
  newT1 = LOW;
  newT2 = LOW;
}

#ifndef toDigital//類比轉數位
#define key 50
#define toDigital(_analog) (_analog >= key) ? (HIGH) : (LOW)
#endif

inline bool en(uint8_t newT1, uint8_t newT2) {//正轉
	return ((oldT1!=newT1) && (T1 == T2) && (T1 != newT1) && (T2 == newT2));
}
inline bool dir(uint8_t newT1, uint8_t newT2) {//反轉
	return ((oldT2 != newT2) && (T1 == T2) && (T1 == newT1) && (T2 != newT2));
}
void loop() {
  newT1 = toDigital(analogRead(pinT1));
  newT2 = toDigital(analogRead(pinT2));

  if (newT1 != T1 || newT2 != T2) {
    if (en(newT1, newT2)) {
	  a ++;
      Serial.print("+1,");
	  Serial.print(a);
	  oldT1 = newT1;
	  oldT2 = newT2;
    }
	else if(dir(newT1, newT2)) {
	  a--;
	  Serial.print("-1,");
	  Serial.print(a);
	  oldT1 = newT1;
	  oldT2 = newT2;
	}
    T1 = newT1;
    T2 = newT2;

    sprintf(buf, "\t%c\t%c\t\n", toChar(newT1), toChar(newT2));
    Serial.print(buf);
  }
}

inline char toChar(int digital) {
  switch (digital) {
    case HIGH: return '+';
    case LOW: return '-';
    default: return '*';
  }
}

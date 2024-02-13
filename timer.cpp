// C++ code
//
int a=2, b=3, c=10, d=6, e=7, f=4, g=5;
int d1=0, d2=1, d3=12, d4=8;

char number[] = {
//  abcdefg
//0b
  0b1111110, // 0
  0b0110000, // 1
  0b1101101, // 2
  0b1111001, // 3
  0b0110011, // 4
  0b1011011, // 5
  0b1011111, // 6
  0b1110000, // 7
  0b1111111, // 8
  0b1111011, // 9
};

void off(){
  digitalWrite(d1, 1);
  digitalWrite(d2, 1);
  digitalWrite(d3, 1);
  digitalWrite(d4, 1);
}

void display(int n){
  // method detect bit
  // x = 0b1111111
  //   & 0b1000000
  // -------------
  //     0b1000000
  digitalWrite(a, number[n] & 0b1000000);
  digitalWrite(b, number[n] & 0b0100000);
  digitalWrite(c, number[n] & 0b0010000);
  digitalWrite(d, number[n] & 0b0001000);
  digitalWrite(e, number[n] & 0b0000100);
  digitalWrite(f, number[n] & 0b0000010);
  digitalWrite(g, number[n] & 0b0000001);
}

void setup()
{
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  
  pinMode(d1, OUTPUT);
  pinMode(d2, OUTPUT);
  pinMode(d3, OUTPUT);
  pinMode(d4, OUTPUT);
}



int count = 2468;
void loop()
{  
  count = millis() / 100;
  int s1, s2, s3, s4;
  s4 = count % 10;
  s3 = (count % 100) / 10;
  s2 = (count % 1000) / 100;
  s1 = (count % 10000) / 1000;
  
  off(); display(s1); digitalWrite(d1, 0);
  delay(5);
  off(); display(s2); digitalWrite(d2, 0);
  delay(5);
  off(); display(s3); digitalWrite(d3, 0);
  delay(5);
  off(); display(s4); digitalWrite(d4, 0);
  delay(5);
}
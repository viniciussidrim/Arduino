int lvermelho=10;
int lverde=11;
int lamarelo=12;

void setup() {
  pinMode(lvermelho,OUTPUT);
  pinMode(lverde,OUTPUT);
  pinMode(lamarelo,OUTPUT);
  
}

void loop() {
  digitalWrite (lvermelho, HIGH);
  delay (8000);
  digitalWrite (lvermelho, LOW);
  digitalWrite (lverde, HIGH);
  delay (8000);
  digitalWrite (lverde, LOW);
  digitalWrite (lamarelo, HIGH);
  delay (3000);
  digitalWrite (lamarelo, LOW);

}

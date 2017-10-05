int data;
int data1;
boolean lock=true;

int counter=0;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

 pinMode(10, INPUT);
  pinMode(11,INPUT);
  pinMode(8,OUTPUT);
 pinMode(13,OUTPUT);
 pinMode(12,OUTPUT);
  //digitalWrite(ledPin, LOW);
  Serial.print("calibrating sensor ");
    for(int i = 0; i < 30; i++){
      Serial.print(".");
      delay(1000);
      }
    Serial.println(" done");
    Serial.println("SENSOR ACTIVE");
    digitalWrite(13,HIGH);
    digitalWrite(12,HIGH);
    delay(2000);
    digitalWrite(12,LOW);
    delay(50);
}

void loop() {
  // put your main code here, to run repeatedly:
data = digitalRead(10);
  data1 = digitalRead(11);

if(data==HIGH&&lock==true){
  lock=false;
  digitalWrite(12,HIGH);
  delay(500);
   digitalWrite(12,LOW);
   digitalWrite(8,HIGH);
  Serial.println("hello 3");
   delay(4000);
   lock=true;
}

if(data1==HIGH&&lock==true){
  lock=false;
  digitalWrite(12,HIGH);
  delay(500);
   digitalWrite(12,LOW);
   digitalWrite(8,LOW);
  Serial.println("hello 4");
  delay(4000);
lock=true;
}
}

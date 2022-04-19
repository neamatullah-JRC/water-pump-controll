
int upsens = 7;
int downset = 8;
int upstate;
int downstate;
int motor = 10;


void setup() {
pinMode (upsens , INPUT);
pinMode (downset , INPUT);
pinMode (motor , OUTPUT);


}

void loop() {

upstate = digitalRead(upsens);
downstate = digitalRead(downset);

if (upstate == LOW){

digitalWrite(motor , LOW);

}


if (downstate == HIGH){

digitalWrite(motor , HIGH);

}



}

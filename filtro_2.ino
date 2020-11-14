float band = 0.07, vf, x , med = x;

void setup()
{
pinMode (A0, INPUT);
Serial.begin(9600);
}

void loop() 
{
vf= analogRead(A0);
x = (vf*30)/1023;
//x = (vf*5)/1023;
med = (band*x)+((1-band)*med);
Serial.println(med);
delay(10);
}

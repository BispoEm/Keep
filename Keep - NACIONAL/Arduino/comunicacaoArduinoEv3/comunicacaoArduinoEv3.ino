// I2C Slave Send / Receive
// How to send data from the LEGO Mindstorms NXT/EV3 to the Arduino.
// For LEGO Mindstorms
// Demonstrates how to connect a LEGO MINDSTORMS to an Arduino and Send commands, receive data.
// A4 – SDA - Azul
// A5 – SCL - Amarelo
// See www.dexterindustries.com/howto for more information on the physical setup.
//________________________________________________________________________________
//________________________________________________________________________________
//________________________________________________________________________________

#include<Wire.h> // I2C library

#include <Ultrasonic.h>

//ultrasonico 0
#define TRIGGER_PIN  12
#define ECHO_PIN     13

Ultrasonic ultrasonic(TRIGGER_PIN, ECHO_PIN);

//ultrasonico 1
#define TRIGGER_PIN1  10
#define ECHO_PIN1     11

Ultrasonic ultrasonic1(TRIGGER_PIN1, ECHO_PIN1);
/*
//ultrasonico 2
#define TRIGGER_PIN2  7
#define ECHO_PIN2     6

Ultrasonic ultrasonic2(TRIGGER_PIN2, ECHO_PIN2);*/
///----------------------------------------------

int instruction[5] = {5, 0, 0, 0, 0};
int distancia = 0;
int distancia1 = 0;/*
int distancia2 = 0;*/

void setup()
{
  Wire.begin(0x04); // set the slave address
  Wire.onRequest(requestEvent); // Sending information back to the NXT/EV3
  Wire.onReceive(receiveI2C); // Receiving information!

  // Debugging
  Serial.begin(9600);

}
//________________________________________________________________________________
void loop()
{
  long microsec = ultrasonic.timing();
  distancia = ultrasonic.convert(microsec, Ultrasonic::CM);
  
  Serial.print("distancia:" );
  Serial.println(distancia);

  Serial.print(" ----------------------- " );
  
  long microsec1 = ultrasonic1.timing();
  distancia1 = ultrasonic1.convert(microsec1, Ultrasonic::CM);
  Serial.print  ("distancia1:" );
  Serial.println(distancia1);

/*
  long microsec2 = ultrasonic2.timing();
  distancia2 = ultrasonic2.convert(microsec2, Ultrasonic::CM);
  Serial.println("distancia2:" + distancia2);
*/
  delay(500);
}

//________________________________________________________________________________
//________________________________________________________________________________
//________________________________________________________________________________

byte read_byte = 0x00;
int byte_count = 0;


// When data is received from NXT/EV3, this function is called.
void receiveI2C(int bytesIn)
{
  Serial.println("recebendo");
  read_byte = bytesIn;
  byte_count = 0;
  while (1 < Wire.available()) // loop through all but the last
  {
    read_byte = Wire.read();

    instruction[byte_count] = read_byte;

    byte_count++;
  }
  int x = Wire.read(); // Read the last dummy byte (has no meaning, but must read it)


  if ( instruction[0] == 4 )
  {

  }

}//end recieveI2C

//________________________________________________________________________________

void requestEvent()
{
  //  Serial.print("enviando ");
  //  Serial.println(instruction[0]);
  if (instruction[0] == 1)  {
    Wire.write(distancia); // respond with message
    Serial.print("Value: ");
    Serial.println(distancia);

  }

  if (instruction[0] == 2)
  {
    Wire.write(distancia1); // respond with message
    Serial.print("Value: ");
    Serial.println(distancia1);

  }
/*
  if (instruction[0] == 3)
  {
    //Wire.write(distancia2); // respond with message
Wire.write(20); // respond with message
    Serial.print("Value: ");
    Serial.println(distancia2);

  }*/
}//end requestEvent
//________________________________________________________________________________

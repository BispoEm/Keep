
//___________________________ ____________ ________________________________________
//___________________________|            |________________________________________
//___________________________| I2C Basics |________________________________________
//___________________________|____________|________________________________________

// First, define the Arduino Address
// Address is 0x04 on the Arduino: (Binary) 0100
// Bit shifted out with one 0, that becomes: (Binary) 1000
// Which is 0x08
#define ARDUINO_ADDRESS	0x08     // Arduino: 0x04
#define ARDUINO_PORT S4
// ebs adicionei o arduino port

ubyte I2Cmessage[22];
char I2Creply[20];

int i2c_msg(byte ard_address, int message_size, int return_size, ubyte byte0, ubyte byte1, ubyte byte2, ubyte byte3 ,ubyte byte4)
{
	memset(I2Creply, 0, sizeof(I2Creply));
	message_size = message_size+3;

	I2Cmessage[0] = message_size; // Messsage Size
	I2Cmessage[1] = ard_address;

	I2Cmessage[2] = byte0;
	I2Cmessage[3] = byte1;
	I2Cmessage[4] = byte2;
	I2Cmessage[5] = byte3;
	I2Cmessage[6] = byte4; // max is 99 only for I2Cmessage[6]
	//// can't add more than 5 Bytes

	sendI2CMsg(S4, &I2Cmessage[0], return_size);
	wait1Msec(20);

	readI2CReply(ARDUINO_PORT, &I2Creply[0], return_size);


	int x = I2Creply[0];

	wait1Msec(35);
	return x;
}

//___________________________ ___________________ _________________________________
//___________________________|                   |_________________________________
//___________________________| Devices Functions |_________________________________
//___________________________|___________________|_________________________________


int read_sensor_US1(byte address, int pin_num, bool analog_digital)
{
	int value = i2c_msg(address, 2, 1, 1, pin_num, analog_digital , 0, 0);
	return value;
}

int read_sensor_US2(byte address, int pin_num, bool analog_digital)
{
int value = i2c_msg(address, 2, 1, 2, pin_num, analog_digital , 0, 0);
return value;
}


int read_sensor_US3(byte address, int pin_num, bool analog_digital)
{
int value = i2c_msg(address, 2, 1, 3, pin_num, analog_digital , 0, 0);
return value;
}
/**/
/*
int read_sensor_US4(byte address, int pin_num, bool analog_digital)
{
int value = i2c_msg(address, 2, 1, 4, pin_num, analog_digital , 0, 0);
return value;
}
*/

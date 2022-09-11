void beco()
{
	stopAllMotors();	wait(100,milliseconds);

	playSound(soundBlip);	wait(2,milliseconds);
	stopAllMotors();	wait(50,milliseconds);

	// frente beco
	setMotor(motorA,40);
	moveMotor(motorB,50,degrees,40);

	stopAllMotors();	wait(100,milliseconds);

	//virando por tempo
	setMotor(motorB, 30);
	moveMotor(motorA,800, degrees, -30);

	stopAllMotors();	wait(20,milliseconds);

	// ENQUANTO S2 DIFERENTE DE PRETO VIRAR ESQUERDA
	while(cor2 == 1 ){
		setMotor(motorA,-30);
		setMotor(motorB, 30);
	} // WHILE


	stopAllMotors();	wait(50,milliseconds);

	setMotor(motorA, 30);
	setMotor(motorB,-30);
	wait(200,milliseconds);

	stopAllMotors();	wait(200,milliseconds);

	setMotor(motorB, 50);
	moveMotor(motorA,60, degrees, 50);

	stopAllMotors();	wait(100,milliseconds);

	sleep(200);  stopAllMotors();	wait(250,milliseconds);
}

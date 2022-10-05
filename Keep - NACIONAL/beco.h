void beco()
{
	stopAllMotors();	wait(100,milliseconds);

	playSound(soundBlip);	wait(2,milliseconds);
	stopAllMotors();	wait(50,milliseconds);

	stopAllMotors();	wait(100,milliseconds);

	// VERDE FRENTE
	setMultipleMotors(22,motorA,motorB);
	wait(800,milliseconds);

	stopAllMotors();	wait(100,milliseconds);

	//virando por tempo
	setMotor(motorB, 30);
	moveMotor(motorA,800, degrees, -30);

	// ENQUANTO S2 DIFERENTE DE PRETO VIRAR ESQUERDA
	while(cor3() == BRANCO ){
		setMotor(motorA,-30);
		setMotor(motorB, 30);
	} // WHILE


	stopAllMotors();	wait(200,milliseconds);

	setMultipleMotors(22,motorA,motorB);
	wait(600,milliseconds);

	stopAllMotors();	wait(50,milliseconds);

	// MEIO PRETO ESQUERDA
	if(cor1!=1){
		meiopreto_esq();
	}
	// MEIO PRETO DIREITA
	if(cor2!=1){
		meiopreto_dir();
	}
	sleep(100);
	stopAllMotors(); wait(150,milliseconds);
}

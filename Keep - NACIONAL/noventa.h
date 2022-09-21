//jmbv 10/09/2022 criado um .h contendo os dois lados do noventa
//*******************************
//** codigo de detecÃÂÃÂÃÂÃÂÃÂ�
//*******************************

void noventaesquerda()
{
	stopAllMotors();	wait(30,milliseconds);
	playSound(soundShortBlip );wait(2,milliseconds);
	stopAllMotors();	wait(30,milliseconds);


	if ( cor3() != BRANCO ){
		stopAllMotors(); wait(50,milliseconds);
		setMultipleMotors(22,motorA,motorB);
		wait(500,milliseconds);
		// MEIO PRETO ESQUERDA
		if(cor1!=1){
			meiopreto_esq();
		}
		// MEIO PRETO DIREITA
		if(cor2!=1){
			meiopreto_dir();
		}
		sleep(200);
		stopAllMotors(); wait(250,milliseconds);
	}
	else{
		contador=0;
		stopAllMotors();	wait(100,milliseconds);
		setMultipleMotors(22,motorA,motorB);
		wait(500,milliseconds);

		stopAllMotors();	wait(200,milliseconds);
		contador=0;

		while( cor3()!= PRETO || cor2 != 2){
			setMotor(motorA,-30);
			setMotor(motorB, 30);
		}

		stopAllMotors(); wait(100,milliseconds);

		if(cor2 == 2 ){
			setMotor(motorA,-30);
			setMotor(motorB, 30);
			wait(350,milliseconds);
		}
		else{
			setMotor(motorA,-30);
			setMotor(motorB, 30);
			wait(200,milliseconds);
		}
		stopAllMotors();	wait(100,milliseconds);

		setMultipleMotors(22,motorA,motorB);
		wait(400,milliseconds);

		stopAllMotors(); 	wait(100,milliseconds);

		sleep(50);
		stopAllMotors();	wait(100,milliseconds);

		// MEIO PRETO ESQUERDA
		if(cor1!=1){
			meiopreto_esq();
		}
		// MEIO PRETO DIREITA
		if(cor2!=1){
			meiopreto_dir();
		}
		sleep(200);
		stopAllMotors(); wait(250,milliseconds);
	} // else
} // void



//*******************************
//** codigo de detecÃÂÃÂÃÂÃÂÃÂ�
//*******************************
void noventadireita()
{
	stopAllMotors();	wait(30,milliseconds);
	playSound(soundShortBlip );wait(2,milliseconds);
	stopAllMotors();	wait(30,milliseconds);


	if ( cor3() != BRANCO ){
		stopAllMotors(); wait(50,milliseconds);
		setMultipleMotors(22,motorA,motorB);
		wait(500,milliseconds);
		// MEIO PRETO ESQUERDA
		if(cor1!=1){
			meiopreto_esq();
		}
		// MEIO PRETO DIREITA
		if(cor2!=1){
			meiopreto_dir();
		}
		sleep(200);
		stopAllMotors(); wait(250,milliseconds);
	}
	else{

		contador=0;
		stopAllMotors();	wait(100,milliseconds);
		setMultipleMotors(22,motorA,motorB);
		wait(500,milliseconds);

		stopAllMotors();	wait(200,milliseconds);
		contador=0;

		while(cor3()!= PRETO || cor1 != 2){
			setMotor(motorA, 30);
			setMotor(motorB,-30);
		}

		stopAllMotors();	wait(100,milliseconds);

		if(cor1 == 2 ){
			setMotor(motorA, 30);
			setMotor(motorB,-30);
			wait(350,milliseconds);
		}
		else{
			setMotor(motorA, 30);
			setMotor(motorB,-30);
			wait(200,milliseconds);
		}

		stopAllMotors();	wait(100,milliseconds);

		setMultipleMotors(22,motorA,motorB);
		wait(400,milliseconds);

		stopAllMotors(); 	wait(100,milliseconds);

		sleep(50);
		stopAllMotors();	wait(100,milliseconds);

		// MEIO PRETO ESQUERDA
		if(cor1!=1){
			meiopreto_esq();
		}
		// MEIO PRETO DIREITA
		if(cor2!=1){
			meiopreto_dir();
		}
		sleep(200);
		stopAllMotors(); wait(250,milliseconds);
	} // else
} // void

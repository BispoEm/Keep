//*******************************
//** codigo de detecção de virada de 90 graus para a esquer
//*******************************

void noventaesquerda()
{
	stopAllMotors();	wait(30,milliseconds);
	playSound(soundShortBlip );wait(2,milliseconds);
	stopAllMotors();	wait(30,milliseconds);


	if ( cor3() != BRANCO ){
		stopAllMotors(); wait(50,milliseconds);
		setMultipleMotors(50,motorA,motorB);
		wait(200,milliseconds);
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
		setMultipleMotors(-22,motorA,motorB);
		wait(110,milliseconds);

		stopAllMotors();	wait(100,milliseconds);

		while(cor2!=2 && contador<=10){
			contador++;
			setMotor(motorA, 30);
			setMotor(motorB,-30);
			wait(50,milliseconds);
		}

		stopAllMotors();	wait(200,milliseconds);
		contador=0;

		while( cor3()!= PRETO){
			setMotor(motorA,-30);
			setMotor(motorB, 30);
		}

		stopAllMotors(); wait(100,milliseconds);

		setMotor(motorA,-30);
		setMotor(motorB, 30);
		wait(200,milliseconds);

		stopAllMotors();	wait(100,milliseconds);

		setMultipleMotors(30,motorA,motorB);
		wait(100,milliseconds);

		stopAllMotors(); 	wait(100000000000000000,milliseconds);

		sleep(50);
		stopAllMotors();	wait(100,milliseconds);

		// VERDE ESQUERDA VERIF
		if ( cor1==4 ) {
			stopAllMotors();  wait(50,milliseconds);

			setMotor(motorA,-30);
			setMotor(motorB, 30);
			wait(30,milliseconds);

			stopAllMotors();	wait(100,milliseconds);

			setMultipleMotors(60,motorA,motorB);
			wait(90,milliseconds);

			stopAllMotors();	wait(50,milliseconds);

		} // if verde esquerda verif

		// VERDE DIREITA VERIF
		else if ( cor2==4 ) {
			stopAllMotors();  wait(50,milliseconds);

			setMotor(motorA, 30);
			setMotor(motorB,-30);
			wait(30,milliseconds);

			stopAllMotors();	wait(100,milliseconds);

			setMultipleMotors(60,motorA,motorB);
			wait(90,milliseconds);

			stopAllMotors();	wait(50,milliseconds);

		} // if verde direita verif

		sleep(100);
		stopAllMotors();	wait(150,milliseconds);

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
//** codigo de detecção de virada de 90 graus para a direi
//*******************************
void noventadireita()
{
	stopAllMotors();	wait(30,milliseconds);
	playSound(soundShortBlip );wait(2,milliseconds);
	stopAllMotors();	wait(30,milliseconds);


	if ( cor3() != BRANCO ){
		stopAllMotors(); wait(50,milliseconds);
		setMultipleMotors(50,motorA,motorB);
		wait(200,milliseconds);
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
		setMultipleMotors(-22,motorA,motorB);
		wait(110,milliseconds);

		stopAllMotors();	wait(100,milliseconds);

		while(cor1!=2 && contador<=10){
			contador++;
			setMotor(motorA,-30);
			setMotor(motorB, 30);
			wait(50,milliseconds);
		}

		stopAllMotors();	wait(200,milliseconds);
		contador=0;

		while(cor3()!= PRETO){
			setMotor(motorA, 30);
			setMotor(motorB,-30);
		}

		stopAllMotors();	wait(100,milliseconds);

		setMotor(motorA, 30);
		setMotor(motorB,-30);
		wait(200,milliseconds);


		stopAllMotors();	wait(100,milliseconds);

		setMultipleMotors(30,motorA,motorB);
		wait(100,milliseconds);

		stopAllMotors(); 	wait(100000000000000000,milliseconds);

		sleep(50);
		stopAllMotors();	wait(100,milliseconds);

		// VERDE ESQUERDA VERIF
		if ( cor1==4 ) {
			stopAllMotors();  wait(50,milliseconds);

			setMotor(motorA,-30);
			setMotor(motorB, 30);
			wait(30,milliseconds);

			stopAllMotors();	wait(100,milliseconds);

			setMultipleMotors(60,motorA,motorB);
			wait(90,milliseconds);

			stopAllMotors();	wait(50,milliseconds);

		} // if verde esquerda verif

		// VERDE DIREITA VERIF
		else if ( cor2==4 ) {
			stopAllMotors();  wait(50,milliseconds);

			setMotor(motorA, 30);
			setMotor(motorB,-30);
			wait(30,milliseconds);

			stopAllMotors();	wait(100,milliseconds);

			setMultipleMotors(60,motorA,motorB);
			wait(90,milliseconds);

			stopAllMotors();	wait(50,milliseconds);

		} // if verde direita verif

		sleep(100);
		stopAllMotors();	wait(150,milliseconds);

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

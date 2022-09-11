//*******************************
//** codigo de detecção do verde
//*******************************
void detverde(){
	verde=0;
	v1=0;
	v2=0;
	setMultipleMotors(30, motorA, motorB);
	wait(40, milliseconds);

	while(verde<5){
		setMotor(motorA,20);
		setMotor(motorB,-20);
		wait(40,milliseconds);
		verde++;
		if(cor2==4){
			//verde=15;
			v2=1;
		}
		if(cor1==4){
			//verde=15;
			v1=1;
		}
	}

	while(verde!=15&&verde!=0){
		setMotor(motorB,20);
		setMotor(motorA,-20);
		wait(40,milliseconds);
		verde--;
		if(cor2==4){
			//verde=15;
			v2=1;
		}
		if(cor1==4){
			//verde=15;
			v1=1;
		}
	}

	while(verde<5&&verde!=15){
		setMotor(motorB,20);
		setMotor(motorA,-20);
		wait(40,milliseconds);
		verde++;
		if(cor2==4){
			//verde=15;
			v2=1;
		}
		if(cor1==4){
			//verde=15;
			v1=1;
		}
	}

	while(verde!=15&&verde!=0){
		setMotor(motorA,20);
		setMotor(motorB,-20);
		wait(40,milliseconds);
		verde--;
		if(cor2==4){
			//verde=15;
			v2=1;
		}
		if(cor1==4){
			//verde=15;
			v1=1;
		}
	}
	stopAllMotors();
}

//*******************************
//** codigo de detecção do verde na esquerda
//*******************************

void verdeesquerda(){

	stopAllMotors();	wait(30,milliseconds);
	playSound(soundBeepBeep );wait(2,milliseconds);
	stopAllMotors();	wait(30,milliseconds);

	stopAllMotors(); wait( 100,milliseconds );

	// VERDE FRENTE
	setMultipleMotors(50,motorA,motorB);
	wait(410,milliseconds);

	stopAllMotors();	wait(200,milliseconds);

	// VIRADA TEMPO
	setMotor(motorA,-35);
	setMotor(motorB, 35);
	wait(350,milliseconds);

	// ENQUANDO S1 DIFERENTE DE PRETO VIRAR DIREITA
	while(cor1!=2){
		setMotor(motorA,-35);
		setMotor(motorB, 35);
	} // WHILE

	// ENQUANTO S2 DIFERENTE DE PRETO VIRAR ESQUERDA
	while(cor1!= 1 ){
		setMotor(motorA,-35);
		setMotor(motorB, 35);
	} // WHILE

	stopAllMotors();	wait(50,milliseconds);

	setMotor(motorA,-30);
	setMotor(motorB, 30);
	wait(300,milliseconds);

	stopAllMotors();	wait(200,milliseconds);

	setMotor(motorB, 50);
	moveMotor(motorA,60, degrees, 50);

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
} // void


//*******************************
//** codigo de detecção do verde na direita
//*******************************
void verdedireita(){

	stopAllMotors();	wait(30,milliseconds);
	playSound(soundBeepBeep );wait(2,milliseconds);
	stopAllMotors();	wait(30,milliseconds);

	stopAllMotors(); wait( 100,milliseconds );

	// VERDE FRENTE
	setMultipleMotors(50,motorA,motorB);
	wait(380,milliseconds);

	stopAllMotors();	wait(200,milliseconds);

	// VIRADA TEMPO
	setMotor(motorA, 35);
	setMotor(motorB,-35);
	wait(350,milliseconds);

	// ENQUANDO S1 DIFERENTE DE PRETO VIRAR DIREITA
	while(cor2!=2){
		setMotor(motorA, 35);
		setMotor(motorB,-35);
	} // WHILE

	// ENQUANDO S3 DIFERENTE DE PRETO VIRAR DIREITA
	while(cor2!=1 ){
		setMotor(motorA, 35);
		setMotor(motorB,-35);
	} // WHILE

	stopAllMotors();	wait(50,milliseconds);

	setMotor(motorA, 30);
	setMotor(motorB,-30);
	wait(300,milliseconds);

	stopAllMotors();	wait(200,milliseconds);

	setMotor(motorB, 50);
	moveMotor(motorA,60, degrees, 50);

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
} // void

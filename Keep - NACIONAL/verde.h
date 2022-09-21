//jmbv 10/09/2022 criado um .h contendo todos os codigos do verde
//*******************************
//** codigo de detecÃÂ§Ã�
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
//** codigo de detecÃÂ§ÃÂ£o do ver
//*******************************

void verdeesquerda(){

	stopAllMotors();	wait(30,milliseconds);
	playSound(soundBeepBeep );wait(2,milliseconds);
	stopAllMotors();	wait(30,milliseconds);

	stopAllMotors(); wait( 100,milliseconds );

	// VERDE FRENTE
	setMultipleMotors(22,motorA,motorB);
	wait(700,milliseconds);

	stopAllMotors();	wait(200,milliseconds);

	// VIRADA TEMPO
	setMotor(motorA,-30);
	setMotor(motorB, 30);
	wait(500,milliseconds);

	// ENQUANDO S1 DIFERENTE DE PRETO VIRAR DIREITA
	while(cor3()!= PRETO){
		setMotor(motorA,-35);
		setMotor(motorB, 35);
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
} // void


//*******************************
//** codigo de detecÃÂ§ÃÂ£o do ve
//*******************************
void verdedireita(){

	stopAllMotors();	wait(30,milliseconds);
	playSound(soundBeepBeep );wait(2,milliseconds);
	stopAllMotors();	wait(30,milliseconds);

	stopAllMotors(); wait( 100,milliseconds );

	// VERDE FRENTE
	setMultipleMotors(22,motorA,motorB);
	wait(700,milliseconds);

	stopAllMotors();	wait(200,milliseconds);

	// VIRADA TEMPO
	setMotor(motorA, 30);
	setMotor(motorB,-30);
	wait(500,milliseconds);

	// ENQUANDO S1 DIFERENTE DE PRETO VIRAR DIREITA
	while(cor3()!= PRETO){
		setMotor(motorA, 30);
		setMotor(motorB,-30);
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
} // void

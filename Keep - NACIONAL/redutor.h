
void segredutor(){
	// SE BRANCO FRENTE
	if (cor1==1 && cor2==1 ){
		setMultipleMotors(30,motorA,motorB);
	}

	// SE MEIO PRETO OU PRETO ESQUERDA
	if (cor1!=1){
		setMotor(motorA, 20);
		setMotor(motorB, 50);
	}

	// SE MEIO PRETO OU PRETO DIREITA
	if (cor2!=1){
		setMotor(motorA, 50);
		setMotor(motorB, 20);
	}
}

void redutor(){
	red=0;
	// REDUTOR OU RAMPA NACIONAL
	stopAllMotors();
	resetTimer(T1);
	playSound(soundDownwardTones); wait(1,milliseconds);
	stopAllMotors();
	while( getTimer(T1,milliseconds)<1000 ){
		segredutor();
	}

	stopAllMotors(); wait(200,milliseconds);

	if ( cor1==1 && cor2==1 && cor3()==BRANCO ) {
		while ( cor1!=2 && cor2!=2 && cor3()!=PRETO ){
			setMultipleMotors(-22,motorA,motorB);
		} // while
		stopAllMotors(); wait(100,milliseconds);
	} // if verificacao

	stopAllMotors(); wait(100,milliseconds);
	sleep(100); // dormir sensores
	stopAllMotors(); wait(150,milliseconds);

	// VERDE ESQUERDA VERIF
	if ( cor1==4 ) {
		stopAllMotors();  wait(50,milliseconds);
		setMotor(motorA,-30);
		setMotor(motorB, 30);
		wait(30,milliseconds);
		if ( cor1==4 ){
			verdeesquerda();
		} // if verde esquerda conf
	} // if verde esquerda verif

	// VERDE DIREITA VERIF
	else if ( cor2==4 ) {
		stopAllMotors();  wait(50,milliseconds);
		setMotor(motorA, 30);
		setMotor(motorB,-30);
		wait(30,milliseconds);
		if ( cor2==4 ){
			verdedireita();
		} // if verde direita conf
	} // if verde direita verif

	stopAllMotors(); wait(100,milliseconds);
	sleep(100); // dormir sensores
	stopAllMotors(); wait(150,milliseconds);
}
